#include "script_component.hpp"

params["_target"];

_attachObj = ["attachObj", "Connect To", "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa", {}, {isNil {_target getVariable QGVAR(connectedVeh)}}, FUNC(addConnectAction)] call ACE_interact_menu_fnc_createAction;
[typeOf _target, 0, ["ACE_MainActions"], _attachObj] call ACE_interact_menu_fnc_addActionToClass;

_detachObj = ["detachObj", "Detach", "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa", {[_target] call FUNC(detachFrom)}, {!isNil {_target getVariable QGVAR(connectedVeh)}}] call ACE_interact_menu_fnc_createAction;
[typeOf _target, 0, ["ACE_MainActions"], _detachObj] call ACE_interact_menu_fnc_addActionToClass;