#include "script_component.hpp"

params ["_scrollAmount"];

private _unit = ACE_player;

// EH is always assigned. Exit and don't overwrite input if not carrying
if !(_unit getVariable ["ace_dragging_isCarrying", false]) exitWith {false};

private _carriedItem = _unit getVariable ["ace_dragging_carriedObject", objNull];

//disabled for persons
if (_carriedItem isKindOf "CAManBase") exitWith {false};

if !(cba_events_control) then {
	// raise/lower

	// move carried item 15 cm per scroll interval
	_scrollConst = 0.15;
	if (cba_events_alt && cba_events_shift) then {
		_scrollConst = 0.01;
	} else {
		if (cba_events_shift) then {
		_scrollConst = 0.05;
		} else {
	 		if (cba_events_alt) then {
				_scrollConst = 0.1;
			};
		};
	};

	_scrollAmount = _scrollAmount * _scrollConst;

	private _position = getPosASL _carriedItem;
	private _maxHeight = (_unit modelToWorldVisualWorld [0, 0, 0]) select 2;

	_position set [2, ((_position select 2) + _scrollAmount min (_maxHeight + 1.5)) max _maxHeight];

	// move up/down object and reattach at current position
	detach _carriedItem;

	// Uses this method of selecting position because setPosATL did not have immediate effect
	private _positionChange = _position vectorDiff (getPosASL _carriedItem);
	private _selectionPosition = _unit worldToModel (ASLtoAGL getPosWorld _carriedItem);
	_selectionPosition = _selectionPosition vectorAdd _positionChange;
	_carriedItem attachTo [_unit, _selectionPosition];

	//reset the carry direction
	private _direction = _carriedItem getVariable ["ace_dragging_carryDirection_temp", _carriedItem getVariable ["ace_dragging_carryDirection", 0]];
	["ace_common_setDir", [_carriedItem, _direction], _carriedItem] call CBA_fnc_targetEvent;
} else {
    // rotate

	_scrollConst = 10;
	if (cba_events_shift) then {
		_scrollConst = 5;
	} else {
		if (cba_events_alt) then {
			_scrollConst = 1;
		};
	};

    private _direction = _carriedItem getVariable ["ace_dragging_carryDirection_temp", _carriedItem getVariable ["ace_dragging_carryDirection", 0]];
    _scrollAmount = _scrollAmount * _scrollConst;
    _direction = _direction + _scrollAmount;
    ["ace_common_setDir", [_carriedItem, _direction], _carriedItem] call CBA_fnc_targetEvent;
    _carriedItem setVariable ["ace_dragging_carryDirection_temp", _direction];
};

true