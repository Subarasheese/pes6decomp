/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6File_AllChannelsIdle(void);
extern s32 func_00210DF0(void);
extern s32 func_0093D780(void);
extern void func_0094C790(s32);
extern void func_009947B0(s32);
extern void func_00999990(void);
extern void func_00AECFB0(s32);
extern void func_00B22B60(void);
extern s32 func_00B22BB0(void);
extern void func_00B22C30(void);
extern void func_00B22C60(void);

extern void *Pes6SaveData_Current;

s32 func_00964B20(void) {
    s32 value;
    u32 value2;

    value2 = M2C_FIELD(Pes6SaveData_Current, u32 *, 4);
    value = -1;
    switch (value2) {
    case 0:
        if (func_00210DF0() == 2) {
            func_00B22C60();
            func_00AECFB0(2);
        }
        func_0094C790(1);
        break;
    case 1:
        if (Pes6File_AllChannelsIdle() != 0) {
            if (func_00210DF0() == 2) {
                func_00B22C30();
            }
            func_0094C790(2);
        }
        break;
    case 2:
        if (func_0093D780() != 0) {
            func_0094C790(3);
        }
        break;
    case 3:
        if (func_00210DF0() == 2) {
            if (func_00B22BB0() == 1) {
                func_0094C790(4);
            }
        } else {
            func_0094C790(4);
        }
        break;
    case 4:
        func_0094C790(5);
        break;
    case 5:
        if (func_00210DF0() == 2) {
            func_00B22B60();
        }
        value = 0x22;
        func_00999990();
        func_009947B0(0);
        break;
    }
    if (value != -1) {
        func_0094C790(0);
    }
    return value;
}
