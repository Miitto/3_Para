params["_target"];

_attachObj = ["attachObj", "Connect To", "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa", {}, {isNil {_target getVariable "Para_connectedVeh"}}, Para_fnc_addConnectAction] call ACE_interact_menu_fnc_createAction;
[typeOf _target, 0, ["ACE_MainActions"], _attachObj] call ACE_interact_menu_fnc_addActionToClass;

_detachObj = ["detachObj", "Detach", "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa", {[_target] call Para_fnc_detachFrom}, {!isNil {_target getVariable "Para_connectedVeh"}}] call ACE_interact_menu_fnc_createAction;
[typeOf _target, 0, ["ACE_MainActions"], _detachObj] call ACE_interact_menu_fnc_addActionToClass;