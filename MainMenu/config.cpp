class CfgPatches {
    class 3Para_MainMenu {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_UI_F"};
    };
};

class RscButton;
class RscPicture;
class RscPictureKeepAspect;
class RscStandardDisplay;
class RscText;
class IGUIBack;
class RscFrame;
class RscDisplayMain: RscStandardDisplay {
    idd=0;
	scriptName="RscDisplayMain";
	scriptPath="GUI";
	onLoad="[""onLoad"",_this,""RscDisplayMain"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload="[""onUnload"",_this,""RscDisplayMain"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
    delete Spotlight;
	class controls {
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
        delete SpotlightPrev;
        delete SpotlightNext;
        class opsServerTxt: RscText
        {
            idc = 1000;
            text = "| Join 3 Para Operations"; //--- ToDo: Localize;
            x = 0.875 * safezoneW + safezoneX;
            y = 0.72 * safezoneH + safezoneY;
            w = 0.1125 * safezoneW;
            h = 0.04 * safezoneH;
        };
        class trainServerTxt: RscText
        {
            idc = 1003;
            text = "| Join 3 Para Trainings"; //--- ToDo: Localize;
            x = 0.875 * safezoneW + safezoneX;
            y = 0.78 * safezoneH + safezoneY;
            w = 0.1125 * safezoneW;
            h = 0.04 * safezoneH;
        };
        class opsServerLogo: RscPictureKeepAspect
        {
            idc = 1200;
            text = "\3_Para\MainMenu\data\logoNoBack.paa";
            x = 0.85 * safezoneW + safezoneX;
            y = 0.72 * safezoneH + safezoneY;
            w = 0.025 * safezoneW;
            h = 0.04 * safezoneH;
        };
        class trainServerLogo: RscPictureKeepAspect
        {
            idc = 1201;
            text = "\3_Para\MainMenu\data\logo.paa";
            x = 0.85 * safezoneW + safezoneX;
            y = 0.78 * safezoneH + safezoneY;
            w = 0.025 * safezoneW;
            h = 0.04 * safezoneH;
        };
        class opsServerBtn: RscButton
        {
            idc = 1601;
            x = 0.85 * safezoneW + safezoneX;
            y = 0.72 * safezoneH + safezoneY;
            w = 0.15 * safezoneW;
            h = 0.04 * safezoneH;
            colorText[] = {0,0,0,0};
            colorBackground[] = {0,0,0,0};
            colorActive[] = {0,0,0,0};
            colorBackgroundActive[] = {0,0,0,0};
            colorBackgroundDisabled[] = {0,0,0,0};
            colorFocused[] = {0,0,0,0};
            onButtonClick="connectToServer ['161.97.157.162', 2302, '3para:operations'];";
            tooltip="Join the 3 Para Operations Server";
        };
        class trainServerBtn: RscButton
        {
            idc = 1602;
            x = 0.85 * safezoneW + safezoneX;
            y = 0.78 * safezoneH + safezoneY;
            w = 0.15 * safezoneW;
            h = 0.04 * safezoneH;
            colorText[] = {0,0,0,0};
            colorBackground[] = {0,0,0,0};
            colorActive[] = {0,0,0,0};
            colorBackgroundActive[] = {0,0,0,0};
            colorBackgroundDisabled[] = {0,0,0,0};
            colorFocused[] = {0,0,0,0};
            onButtonClick="connectToServer ['161.97.157.162', 2402, '3para:training'];";
            tooltip="Join the 3 Para Training Server";
        };
    };
    class ControlsBackground
	{
        class joinServerBack: IGUIBack
        {
            idc = 2201;
            x = 0.85 * safezoneW + safezoneX;
            y = 0.72 * safezoneH + safezoneY;
            w = 0.15 * safezoneW;
            h = 0.1 * safezoneH;
        };
        class backgroundPicture: RscPicture
        {
            idc = 5001;
            text = "\3_Para\MainMenu\data\background.paa";
            x = 0 * safezoneW + safezoneX;
            y = 0 * safezoneH + safezoneY;
            w = 1 * safezoneW;
            h = 1 * safezoneH;
        };
    };
};