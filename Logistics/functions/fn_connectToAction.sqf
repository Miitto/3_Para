#include "script_component.hpp"

params ["_obj", "_veh"];

GVAR(connectObj) = _obj;
GVAR(connectVeh) = _veh;

[player, _obj] call ace_dragging_fnc_carryObject; // Pickup Object

_id = player getVariable "ace_dragging_ReleaseActionID"; // Remove ACE's Drop EH
[player, "DefaultAction", _id] call ace_common_fnc_removeActionEventHandler;

player setVariable ["ace_dragging_ReleaseActionID", [ // Add our own Drop EH to Attach to veh
    player, "DefaultAction",
    {!isNull ((_this select 0) getVariable ["ace_dragging_carriedObject", objNull])},
    {
		GVAR(connectObj) = player getVariable ["ace_dragging_carriedObject", objNull];
		[player, GVAR(connectObj)] call ace_dragging_fnc_dropObject_carry; // Drop Object
		if (!isNil QGVAR(connectAreaDrawEH)) then {
			removeMissionEventHandler["Draw3D", GVAR(connectAreaDrawEH)];
		};
		if !([GVAR(connectVeh), GVAR(connectObj)] call FUNC(canAttach)) exitWith {
			[] spawn {
				hint "Vehicle is too far Away";
				uiSleep 5;
				hintSilent "";
			};
		};
		_offsetPos = GVAR(connectVeh) worldToModelVisual ASLToAGL (getPosASL GVAR(connectObj)); // Get Attach To Offset
		_bb = 0 boundingBoxReal GVAR(connectObj);
		_minZ = (_bb select 0) select 2;
		_offsetPos set [2, (_offsetPos select 2) - _minZ]; // Adjust so Bottom of model is where Center was
		_Dir = GVAR(connectVeh) vectorWorldToModel (vectorDir GVAR(connectObj)); // Get Rotation
		_Up = (vectorUp GVAR(connectObj));
		GVAR(connectObj) attachTo [GVAR(connectVeh), _offsetPos];
		GVAR(connectObj) setVectorDirAndUp[_Dir, _Up];
		GVAR(connectObj) setVariable [QGVAR(connectVeh), GVAR(connectVeh)];
		GVAR(connectObj) = objNull;
		GVAR(connectVeh) = objNull;
	}
] call ace_common_fnc_addActionEventHandler];

if (GVAR(DrawConnectArea)) then {
	GVAR(connectAreaDrawEH) = addMissionEventHandler ["Draw3D", {
		_color = [0,1,0,1];
		if !([GVAR(connectVeh), GVAR(connectObj)] call FUNC(canAttach)) then {
			_color = [1,0,0,1];
		};
		_bboxr = GVAR(connectVeh) call FUNC(getBoundingCorners);
		for "_i" from 0 to 7 step 2 do {
			drawLine3D [
				_bboxr select _i,
				_bboxr select (_i + 2),
				_color
			];
			drawLine3D [
				_bboxr select (_i + 2),
				_bboxr select (_i + 3),
				_color
			];
			drawLine3D [
				_bboxr select (_i + 3),
				_bboxr select (_i + 1),
				_color
			];
		};
	}];
};