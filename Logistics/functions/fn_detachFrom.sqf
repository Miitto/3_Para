#include "script_component.hpp"

params ["_obj"];

detach _obj;

_obj setVariable [QGVAR(connectVeh), nil];

[player, _obj] call ace_dragging_fnc_carryObject;