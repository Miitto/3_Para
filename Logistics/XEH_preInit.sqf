#include "script_component.hpp"

[
    QGVAR(DrawConnectArea),
    "CHECKBOX",
    ["Draw Connect Area", "Draw the holographic box showing area that will allow connection"],
    ["3 Para", "Logistics"],
    true,
    false
] call CBA_fnc_addSetting;

[
    QGVAR(acceptableCorners),
    "SLIDER",
    ["Requried Cornes", "Required Corners of the object to be in the bounding box of the vehicle. More corners may cause issues for larger items"],
    ["3 Para", "Logistics"],
    [0, 8, 4, 0],
    false
] call CBA_fnc_addSetting;