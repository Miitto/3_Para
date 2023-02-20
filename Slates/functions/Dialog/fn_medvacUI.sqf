

if (!Para_medvacUI_Open) then {

	if (Para_ccaUI_Open) then {
		Para_ccaUI_Open = false;

		_hud = uiNamespace getVariable "ccaSlate";
		_hud closeDisplay 1;
	};

	"medvacSlate" cutRsc ["3Para_Medvac_Slate_UI", "PLAIN", 0.1, true];

	_hud = uiNamespace getVariable "medvacSlate";

	if (!isNil "Para_medvac") then {
		for "_i" from 0 to 21 step 1 do {
			(_hud displayCtrl (_i + 1400)) ctrlSetText (Para_medvac select _i);
		};
	};

	Para_medvacUI_Open = true;
} else {
	Para_medvacUI_Open = false;

	_hud = uiNamespace getVariable "medvacSlate";
	_hud closeDisplay 1;
}