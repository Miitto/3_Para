class CfgPatches
{   
    class Para_Logistics
    {
    name="3 Para Logistics";
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.3;
    requiredAddons[] = {"ACE_main"};
    author = "Miitto";
    };
};

class CfgFunctions
{
    #include "CfgFunctions.hpp"
};

class Extended_Init_EventHandlers {
    class StaticWeapon {
        class Para {
            init = "_this call Para_fnc_addConnect";
        };
    };
    class Thing {
        class Para {
            init = "_this call Para_fnc_addConnect";
            exclude[] = {"ModuleEmpty_F", "ThingEffect", "Wreck"};
        };
    };
    class NonStrategic {
        class Para {
            init = "_this call Para_fnc_addConnect";
        };
    };
    class Land_Camping_Light_F {
        class Para {
            init = "_this call Para_fnc_addConnect";
        };
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = call compileScript ["\3_Para\Logistics\XEH_preInit.sqf"];
    };
};