class CfgPatches
{
    class 3Para_Slates
    {
        name="Slates";
        units[]={};
        weapons[]={};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
        author = "Miitto";
    };
};

// Global Defines
#include "defines.hpp"
class RscPictureKeepAspect;

#include "NATO_MEDVAC_Slate_GUI.hpp"
#include "CCA_Slate_GUI.hpp"

class CfgFunctions {
    #include "CfgFunctions.hpp"
};

class RscTitles {
    titles[] = {};
    #include "NATO_MEDVAC_Slate_UI.hpp"
    #include "CCA_Slate_UI.hpp"
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class 3_Para {
                displayName = "3 Para";
                condition = "true";
                icon = "\3_Para\MainMenu\data\logoNoBack.paa";
                class Slates {
                    displayName = "Slates";
                    condition = "true";
                    class Medvac {
                        displayName = "Medvac";
                        condition = "true";
                        statement = "[] call Para_fnc_medvacUI";
                        icon = "\z\ace\addons\medical_gui\ui\cross.paa";
                        class Edit {
                            displayName = "Edit";
                            condition = "true";
                            statement = "[] call Para_fnc_medvacGUI";
                            icon = "\z\ace\addons\microdagr\ui\icon_microDAGR.paa";
                        };
                    };
                    class CCA {
                        displayName = "CCA";
                        condition = "true";
                        statement = "[] call Para_fnc_ccaUI";
                        icon = "\z\ace\addons\explosives\ui\Explosives_Menu_ca.paa";
                        class Edit {
                            displayName = "Edit";
                            condition = "true";
                            statement = "[] call Para_fnc_ccaGUI";
                            icon = "\z\ace\addons\microdagr\ui\icon_microDAGR.paa";
                        };
                    };
                };
            };
        };
    };
};