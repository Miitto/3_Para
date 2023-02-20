class 3Para_Medvac_Slate_UI {
  idd = 6050;
  enableSimulation = 1;
	enableDisplay = 1;
	duration = 9999999;
	fadein = 0;
	fadeout = 0;
	name = "medvacSlate";
	onLoad = "uiNamespace setVariable['medvacSlate', _this select 0]";
  class controls {
    class medvacImage: RscPicture
    {
      idc = 1200;
      text = "\3_Para\Slates\data\NATO_MEDVAC_Slate.paa";
      x = 0.75 * safezoneW + safezoneX;
      y = 0.437917 * safezoneH + safezoneY;
      w = 0.251172 * safezoneW;
      h = 0.562083 * safezoneH;
    };
    class callSignEdit: RscTextNoShadow
    {
      idc = 1400;
      x = 0.886328 * safezoneW + safezoneX;
      y = 0.491666 * safezoneH + safezoneY;
      w = 0.113906 * safezoneW;
      h = 0.0281111 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class gridEdit: RscTextNoShadow
    {
      idc = 1401;
      x = 0.886407 * safezoneW + safezoneX;
      y = 0.518861 * safezoneH + safezoneY;
      w = 0.113906 * safezoneW;
      h = 0.0315834 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class p1Edit: RscTextNoShadow
    {
      idc = 1402;
      x = 0.903046 * safezoneW + safezoneX;
      y = 0.549056 * safezoneH + safezoneY;
      w = 0.020156 * safezoneW;
      h = 0.0392222 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class p2Edit: RscTextNoShadow
    {
      idc = 1403;
      x = 0.934375 * safezoneW + safezoneX;
      y = 0.549306 * safezoneH + safezoneY;
      w = 0.020156 * safezoneW;
      h = 0.0392222 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class p3Edit: RscTextNoShadow
    {
      idc = 1404;
      x = 0.965235 * safezoneW + safezoneX;
      y = 0.549306 * safezoneH + safezoneY;
      w = 0.020156 * safezoneW;
      h = 0.0392222 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class equipEdit: RscTextNoShadow
    {
      idc = 1405;
      x = 0.886719 * safezoneW + safezoneX;
      y = 0.619056 * safezoneH + safezoneY;
      w = 0.113906 * safezoneW;
      h = 0.0336666 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class sEdit: RscTextNoShadow
    {
      idc = 1406;
      x = 0.878906 * safezoneW + safezoneX;
      y = 0.670139 * safezoneH + safezoneY;
      w = 0.020156 * safezoneW;
      h = 0.0364445 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class wEdit: RscTextNoShadow
    {
      idc = 1407;
      x = 0.907814 * safezoneW + safezoneX;
      y = 0.670832 * safezoneH + safezoneY;
      w = 0.0205465 * safezoneW;
      h = 0.0357501 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class eEdit: RscTextNoShadow
    {
      idc = 1408;
      x = 0.934766 * safezoneW + safezoneX;
      y = 0.670834 * safezoneH + safezoneY;
      w = 0.0205465 * safezoneW;
      h = 0.0357501 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class oEdit: RscTextNoShadow
    {
      idc = 1409;
      x = 0.962109 * safezoneW + safezoneX;
      y = 0.670834 * safezoneH + safezoneY;
      w = 0.0205465 * safezoneW;
      h = 0.0357501 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class securityEdit: RscTextNoShadow
    {
      idc = 1410;
      x = 0.864844 * safezoneW + safezoneX;
      y = 0.725695 * safezoneH + safezoneY;
      w = 0.135391 * safezoneW;
      h = 0.0308888 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class hlsEdit: RscTextNoShadow
    {
      idc = 1411;
      x = 0.864844 * safezoneW + safezoneX;
      y = 0.794444 * safezoneH + safezoneY;
      w = 0.13539 * safezoneW;
      h = 0.0343611 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class aEdit: RscTextNoShadow
    {
      idc = 1412;
      x = 0.874609 * safezoneW + safezoneX;
      y = 0.857638 * safezoneH + safezoneY;
      w = 0.0193747 * safezoneW;
      h = 0.0225557 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class fEdit: RscTextNoShadow
    {
      idc = 1413;
      x = 0.902735 * safezoneW + safezoneX;
      y = 0.878472 * safezoneH + safezoneY;
      w = 0.0193747 * safezoneW;
      h = 0.0225557 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class bEdit: RscTextNoShadow
    {
      idc = 1414;
      x = 0.902734 * safezoneW + safezoneX;
      y = 0.856944 * safezoneH + safezoneY;
      w = 0.0193747 * safezoneW;
      h = 0.0225557 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class gEdit: RscTextNoShadow
    {
      idc = 1415;
      x = 0.933985 * safezoneW + safezoneX;
      y = 0.878472 * safezoneH + safezoneY;
      w = 0.0193747 * safezoneW;
      h = 0.0225557 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class otherEEdit: RscTextNoShadow
    {
      idc = 1416;
      x = 0.87475 * safezoneW + safezoneX;
      y = 0.8784 * safezoneH + safezoneY;
      w = 0.0193747 * safezoneW;
      h = 0.0225557 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class cEdit: RscTextNoShadow
    {
      idc = 1417;
      x = 0.933985 * safezoneW + safezoneX;
      y = 0.856945 * safezoneH + safezoneY;
      w = 0.0193747 * safezoneW;
      h = 0.0225557 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class dEdit: RscTextNoShadow
    {
      idc = 1418;
      x = 0.967969 * safezoneW + safezoneX;
      y = 0.858333 * safezoneH + safezoneY;
      w = 0.0193747 * safezoneW;
      h = 0.0225557 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class hEdit: RscTextNoShadow
    {
      idc = 1419;
      x = 0.967969 * safezoneW + safezoneX;
      y = 0.879167 * safezoneH + safezoneY;
      w = 0.0193747 * safezoneW;
      h = 0.0225557 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class tacEdit: RscTextNoShadow
    {
      idc = 1420;
      x = 0.865546 * safezoneW + safezoneX;
      y = 0.951472 * safezoneH + safezoneY;
      w = 0.139374 * safezoneW;
      h = 0.0260278 * safezoneH;
      colorText[] = {0,0,0,1};
    };
    class otherEdit: RscTextNoShadow
    {
      idc = 1421;
      x = 0.865625 * safezoneW + safezoneX;
      y = 0.976389 * safezoneH + safezoneY;
      w = 0.139374 * safezoneW;
      h = 0.0260278 * safezoneH;
      colorText[] = {0,0,0,1};
    };
  };
};