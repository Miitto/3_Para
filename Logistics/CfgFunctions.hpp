#include "script_component.hpp"

class DOUBLE(ADDON,COMPONENT)
{
    tag=QUOTE(DOUBLE(ADDON,COMPONENT));
    class Func {
      file="\3_Para\Logistics\functions";
      class addConnect{};
      class addConnectAction{};
      class connectToAction{};
      class detachFrom{};
      class handleCarryScroll{};
      class init{postInit = 1;};
      class canAttach{};
      class getBoundingCorners{};
    };
};