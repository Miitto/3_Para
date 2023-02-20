class CfgPatches
{
    class 3Para_SplashChange
    {
        name="Splash Change";
        units[]={};
        weapons[]={};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_UI_F", "ALIVE_splashscreen"};
        author = "Miitto";
    };
};

class RscStandardDisplay;
class RscControlsGroup;
class RscPictureKeepAspect;
class RscPicture;

class RscDisplayStart: RscStandardDisplay
{
 class controls
 {
  class LoadingStart: RscControlsGroup
  {
    class controls
    {
        delete Logo;
        class Noise: RscPicture
        {
            text = "\3_Para\SplashChange\data\background.paa";
        };
    };
  };
 };
};