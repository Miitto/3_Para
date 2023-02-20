#include "script_component.hpp"

class CfgPatches
{   
    class DOUBLE(ADDON,COMPONENT)
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
        class DOUBLE(ADDON,COMPONENT) {
            init = QUOTE(_this call FUNC(addConnect));
        };
    };
    class Thing {
        class DOUBLE(ADDON,COMPONENT) {
            init = QUOTE(_this call FUNC(addConnect));
            exclude[] = {"ModuleEmpty_F", "ThingEffect", "Wreck"};
        };
    };
    class NonStrategic {
        class DOUBLE(ADDON,COMPONENT) {
            init = QUOTE(_this call FUNC(addConnect));
        };
    };
    class Land_Camping_Light_F {
        class DOUBLE(ADDON,COMPONENT) {
            init = QUOTE(_this call FUNC(addConnect));
        };
    };
};

class Extended_PreInit_EventHandlers {
    class DOUBLE(ADDON,COMPONENT) {
        init = call compileScript ["\3_Para\Logistics\XEH_preInit.sqf"];
    };
};