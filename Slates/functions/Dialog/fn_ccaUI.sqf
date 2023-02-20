if (!Para_ccaUI_Open) then {
	if (Para_medvacUI_Open) then {
		Para_medvacUI_Open = false;

		_hud = uiNamespace getVariable "medvacSlate";
		_hud closeDisplay 1;
	};
	"ccaSlate" cutRsc ["3Para_CCA_Slate_UI", "PLAIN", 0.1, true];

	_hud = uiNamespace getVariable "ccaSlate";

	if (!isNil "Para_cca") then {
		for "_i" from 0 to 21 step 1 do {
			(_hud displayCtrl (_i + 1400)) ctrlSetText (Para_cca select _i);
		};
	};

	Para_ccaUI_Open = true;
} else {
	Para_ccaUI_Open = false;

	_hud = uiNamespace getVariable "ccaSlate";
	_hud closeDisplay 1;
};