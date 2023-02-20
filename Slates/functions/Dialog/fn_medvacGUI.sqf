#include "\a3\ui_f\hpp\definedikcodes.inc"

if (Para_medvacUI_Open) then {
	Para_medvacUI_Open = false;

	_hud = uiNamespace getVariable "medvacSlate";
	_hud closeDisplay 1;
};

if (Para_ccaUI_Open) then {
	Para_ccaUI_Open = false;

	_hud = uiNamespace getVariable "ccaSlate";
	_hud closeDisplay 1;
};

createDialog "3Para_Medvac_Slate_GUI";

_diag = (findDisplay 6020);

_diag displayAddEventHandler["Unload", {
	Para_medvac = [];
	for "_i" from 1400 to 1421 step 1 do {
		Para_medvac pushBack (ctrlText _i);
	};
}];


if (!isNil "Para_medvac") then {
	for "_i" from 0 to 21 step 1 do {
		ctrlSetText [(_i + 1400), (Para_medvac select _i)];
	};
};