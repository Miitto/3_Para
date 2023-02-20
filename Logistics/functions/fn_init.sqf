#include "script_component.hpp"

Para_CounterAceScrollEH = ["MouseZChanged", {_this select 1 call FUNC(handleCarryScroll)}] call CBA_fnc_addDisplayHandler;