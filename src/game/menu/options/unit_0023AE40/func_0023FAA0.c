/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern void func_0022C2B0(int);
extern int func_0022C2C0(void);
extern void func_0023F510(int);
extern void SD_call(u32);
extern void func_00931BA0(u32);
extern s32 D_003E9A8C, D_003EAA0C, D_003EAA10, D_003EAA40;
extern s16 D_0053C304[], D_0053C306[];
extern u8 D_00591C09[];
void func_0023FAA0(void) {
    D_003EAA40 = 0;
    switch (*D_00591C09) {
    case 4:
        switch (func_0022C2C0()) {
        case 1:
        case 2:
        case 3:
            func_00931BA0(12);
            *D_0053C304 = 2;
            D_003E9A8C = 1;
            D_003EAA40 = 1;
            D_003EAA0C = 0;
            func_0023F510(3);
            func_0022C2B0(0);
            break;
        }
        if (func_0022C2C0() == 3)
            *D_0053C304 = 3;
        SD_call(0x9A080400);
        return;
    case 14:
        if (func_0022C2C0() == 5) {
            func_00931BA0(9);
            *D_0053C304 = 2;
            D_003E9A8C = 10;
            D_003EAA40 = 1;
            D_003EAA0C = 0;
            func_0023F510(2);
        } else if (func_0022C2C0() == 4) {
            func_00931BA0(9);
            *D_0053C304 = 2;
            D_003E9A8C = 7;
            D_003EAA40 = 1;
            D_003EAA0C = 0;
            func_0023F510(2);
        }
        SD_call(0x9A080400);
        return;
    case 10:
        func_00931BA0(14);
        D_003E9A8C = 6;
        D_003EAA0C = 2;
        D_003EAA10 = 1;
        D_003EAA40 = 2;
        *D_0053C306 = 2;
        SD_call(0x9A088407);
        return;
    default:
        SD_call(0x9A080400);
        return;
    }
}
