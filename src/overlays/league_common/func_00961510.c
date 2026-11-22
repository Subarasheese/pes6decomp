/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6File_AllChannelsIdle(void);
extern s32 func_0093D740(void);
extern s32 func_0093D780(void);
extern void func_0094C790(s32);
extern void func_00B77BE0(void);
extern s32 func_00B77C30(void);
extern void func_00B77C60(void);
extern void func_00B77C90(void);

extern void *Pes6SaveData_Current;

s32 func_00961510(void) {
    s32 var_s0;
    u32 temp_v0;

    temp_v0 = M2C_FIELD(Pes6SaveData_Current, u32 *, 4);
    var_s0 = -1;
    switch (temp_v0) {
    case 0:
        func_00B77C90();
        func_0094C790(1);
        break;
    case 1:
        if (Pes6File_AllChannelsIdle() == 1) {
            func_00B77C60();
            func_0094C790(2);
        }
        break;
    case 2:
        if (func_0093D780() == 1) {
            func_0094C790(3);
        }
        break;
    case 3:
        if (func_00B77C30() == 1) {
            func_0094C790(4);
        }
        break;
    case 4:
        if (func_0093D740() == 1) {
            func_0094C790(5);
        }
        break;
    case 5:
        func_00B77BE0();
        var_s0 = 0x38;
        break;
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
