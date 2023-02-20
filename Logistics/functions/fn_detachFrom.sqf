params ["_obj"];

detach _obj;

_obj setVariable ["Para_connectedVeh", nil];

[player, _obj] call ace_dragging_fnc_carryObject;