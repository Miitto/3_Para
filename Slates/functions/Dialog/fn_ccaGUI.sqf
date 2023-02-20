#include "\a3\ui_f\hpp\definedikcodes.inc"

if (Para_ccaUI_Open) then {
	Para_ccaUI_Open = false;

	_hud = uiNamespace getVariable "ccaSlate";
	_hud closeDisplay 1;
};

if (Para_medvacUI_Open) then {
	Para_medvacUI_Open = false;

	_hud = uiNamespace getVariable "medvacSlate";
	_hud closeDisplay 1;
};

createDialog "3Para_CCA_Slate_GUI";

_diag = (findDisplay 6021);

_diag displayAddEventHandler["Unload", {
	Para_cca = [];
	for "_i" from 1400 to 1413 step 1 do {
		Para_cca pushBack (ctrlText _i);
	};
	player setVariable ["3Para_CCA", Para_cca];
}];

if (!isNil "Para_cca") then {
	for "_i" from 0 to 13 step 1 do {
		ctrlSetText [(_i + 1400), (Para_cca select _i)];
	};
};