/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6File_AllChannelsIdle(void);
extern s32 func_0026DA40(s32);
extern void func_0093D720(void);
extern s32 func_0093D730(void);
extern void func_0093D7A0(void);
extern void func_0093D850(void);
extern void func_0094C790(s32);
extern void func_00B1AF40(void);
extern s32 func_00B1AFB0(void);
extern void func_00B1B0A0(void);
extern void func_00B1B0D0(void);

extern void *Pes6SaveData_Current;

s32 func_009669F0(void) {
    s32 var_s0;
    u32 temp_v0;

    temp_v0 = M2C_FIELD(Pes6SaveData_Current, u32 *, 4);
    var_s0 = -1;
    switch (temp_v0) {
    case 0:
        func_0093D850();
        func_00B1B0D0();
        func_0094C790(1);
        break;
    case 1:
        if ((Pes6File_AllChannelsIdle() == 1) && (func_0026DA40(1) == 0)) {
            func_00B1B0A0();
            func_0094C790(2);
        }
        break;
    case 2:
        func_0093D720();
        func_0094C790(3);
        break;
    case 3:
        if (func_00B1AFB0() == 1) {
            func_0094C790(4);
        }
        break;
    case 4:
        if ((func_0093D730() == 1) && (func_0026DA40(1) == 0)) {
            func_0094C790(5);
            func_0093D7A0();
        }
        break;
    case 5:
        func_00B1AF40();
        var_s0 = 4;
        break;
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
