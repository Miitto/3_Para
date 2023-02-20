#define QUOTE(var1) #var1
#define FOLD(var1) QUOTE(3_Para\Slates\functions\##var1)

class Para_Slates
{
    tag="Para";
    class Init
    {
        file=FOLD(Init);
        class postInit{postInit = 1;};
    };
    class Dialog
    {
      file=FOLD(Dialog);
      class medvacGUI{};
      class medvacUI{};
      class ccaGUI{};
      class ccaUI{};
    };
};