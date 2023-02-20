#define ADDON Para
#define COMPONENT Logistics

#define QUOTE(var1) #var1
#define DOUBLE(var1,var2) var1##_##var2
#define TRIPLE(var1,var2,var3) var1##_##var2##_##var3


#define GVAR(var1) TRIPLE(ADDON,COMPONENT,var1)
#define QGVAR(var1) QUOTE(GVAR(var1))

#define FUNC(var1) TRIPLE(DOUBLE(ADDON, COMPONENT), fnc, var1)
#define QFUNC(var1) QUOTE(FUNC(var1))

#define MAX_LOAD_DISTANCE 10