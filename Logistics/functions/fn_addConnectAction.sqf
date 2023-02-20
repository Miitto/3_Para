#include "script_component.hpp"

params ["_target"];

private _statement = {
    params ["_target", "_player", "_vehicle"];
    [_target, _vehicle] call FUNC(connectToAction);
};

private _vehicles = (nearestObjects [_target, ace_cargo_cargoHolderTypes, (MAX_LOAD_DISTANCE + 10)]) select {
    true && {_x != _target} && {alive _x} && {locked _x < 2} &&
    {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < MAX_LOAD_DISTANCE}
};

[_vehicles, _statement, _target] call ace_interact_menu_fnc_createVehiclesActions