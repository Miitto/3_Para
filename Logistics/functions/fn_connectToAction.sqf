params ["_obj", "_veh"];

Para_connectObj = _obj;
Para_connectVeh = _veh;

[player, _obj] call ace_dragging_fnc_carryObject; // Pickup Object

_id = player getVariable "ace_dragging_ReleaseActionID"; // Remove ACE's Drop EH
[player, "DefaultAction", _id] call ace_common_fnc_removeActionEventHandler;

player setVariable ["ace_dragging_ReleaseActionID", [ // Add our own Drop EH to Attach to veh
    player, "DefaultAction",
    {!isNull ((_this select 0) getVariable ["ace_dragging_carriedObject", objNull])},
    {
		Para_connectObj = player getVariable ["ace_dragging_carriedObject", objNull];
		[player, Para_connectObj] call ace_dragging_fnc_dropObject_carry; // Drop Object
		if (!isNil "Para_connectAreaDrawEH") then {
			removeMissionEventHandler["Draw3D", Para_connectAreaDrawEH];
		};
		if !([Para_connectVeh, Para_connectObj] call Para_fnc_canAttach) exitWith {
			[] spawn {
				hint "Vehicle is too far Away";
				uiSleep 5;
				hintSilent "";
			};
		};
		_offsetPos = Para_connectVeh worldToModelVisual ASLToAGL (getPosASL Para_connectObj); // Get Attach To Offset
		_bb = 0 boundingBoxReal Para_connectObj;
		_minZ = (_bb select 0) select 2;
		_offsetPos set [2, (_offsetPos select 2) - _minZ]; // Adjust so Bottom of model is where Center was
		_Dir = Para_connectVeh vectorWorldToModel (vectorDir Para_connectObj); // Get Rotation
		_Up = (vectorUp Para_connectObj);
		Para_connectObj attachTo [Para_connectVeh, _offsetPos];
		Para_connectObj setVectorDirAndUp[_Dir, _Up];
		Para_connectObj setVariable ["Para_connectedVeh", Para_connectVeh];
		Para_connectObj = objNull;
		Para_connectVeh = objNull;
	}
] call ace_common_fnc_addActionEventHandler];

if (Para_DrawConnectArea) then {
	Para_connectAreaDrawEH = addMissionEventHandler ["Draw3D", {
		_color = [0,1,0,1];
		if !([Para_connectVeh, Para_connectObj] call Para_fnc_canAttach) then {
			_color = [1,0,0,1];
		};
		_bboxr = Para_connectVeh call Para_fnc_getBoundingCorners;
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