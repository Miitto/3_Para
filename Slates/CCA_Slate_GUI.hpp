class 3Para_CCA_Slate_GUI {
  idd=6021;
  class controls 
  { 
    class obsGrid: RscEdit
    {
      idc = 1400;
      x = 0.890624 * safezoneW + safezoneX;
      y = 0.509027 * safezoneH + safezoneY;
      w = 0.10961 * safezoneW;
      h = 0.0218611 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class obsDesc: RscEdit
    {
      idc = 1401;
      x = 0.849688 * safezoneW + safezoneX;
      y = 0.529972 * safezoneH + safezoneY;
      w = 0.150625 * safezoneW;
      h = 0.0197779 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class obsMark: RscEdit
    {
      idc = 1402;
      x = 0.849609 * safezoneW + safezoneX;
      y = 0.548611 * safezoneH + safezoneY;
      w = 0.150625 * safezoneW;
      h = 0.0204723 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class targGrid: RscEdit
    {
      idc = 1403;
      x = 0.864453 * safezoneW + safezoneX;
      y = 0.568056 * safezoneH + safezoneY;
      w = 0.149453 * safezoneW;
      h = 0.030889 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class targElev: RscEdit
    {
      idc = 1404;
      x = 0.866015 * safezoneW + safezoneX;
      y = 0.597917 * safezoneH + safezoneY;
      w = 0.149453 * safezoneW;
      h = 0.0343612 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class targDesc: RscEdit
    {
      idc = 1405;
      x = 0.871484 * safezoneW + safezoneX;
      y = 0.63125 * safezoneH + safezoneY;
      w = 0.150625 * safezoneW;
      h = 0.0267223 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class targMark: RscEdit
    {
      idc = 1406;
      x = 0.849609 * safezoneW + safezoneX;
      y = 0.656944 * safezoneH + safezoneY;
      w = 0.150625 * safezoneW;
      h = 0.0239446 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class weapType: RscEdit
    {
      idc = 1407;
      x = 0.901563 * safezoneW + safezoneX;
      y = 0.679861 * safezoneH + safezoneY;
      w = 0.149453 * safezoneW;
      h = 0.0232502 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class attkHead: RscEdit
    {
      idc = 1408;
      x = 0.871094 * safezoneW + safezoneX;
      y = 0.702083 * safezoneH + safezoneY;
      w = 0.102188 * safezoneW;
      h = 0.024639 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class dngrClose: RscEdit
    {
      idc = 1409;
      x = 0.904297 * safezoneW + safezoneX;
      y = 0.725694 * safezoneH + safezoneY;
      w = 0.149453 * safezoneW;
      h = 0.0232501 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class bmRstrct: RscEdit
    {
      idc = 1410;
      x = 0.875391 * safezoneW + safezoneX;
      y = 0.747917 * safezoneH + safezoneY;
      w = 0.149844 * safezoneW;
      h = 0.0218613 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class threats: RscEdit
    {
      idc = 1411;
      x = 0.852344 * safezoneW + safezoneX;
      y = 0.76875 * safezoneH + safezoneY;
      w = 0.149062 * safezoneW;
      h = 0.0225557 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class friendlyForces: RscEdit
    {
      idc = 1412;
      x = 0.816407 * safezoneW + safezoneX;
      y = 0.790278 * safezoneH + safezoneY;
      w = 0.183828 * safezoneW;
      h = 0.0697778 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class engageTime: RscEdit
    {
      idc = 1413;
      x = 0.816406 * safezoneW + safezoneX;
      y = 0.859028 * safezoneH + safezoneY;
      w = 0.183828 * safezoneW;
      h = 0.0461668 * safezoneH;
      colorText[] = {0,0,0,1};
    };
  };
  class ControlsBackground {
    class CCA_Back: RscPicture
    {
      idc = 1200;
      text = "\3_Para\Slates\data\cca_Slate.paa";
      x = 0.75 * safezoneW + safezoneX;
      y = 0.437917 * safezoneH + safezoneY;
      w = 0.251172 * safezoneW;
      h = 0.562083 * safezoneH;
    };
  };
};