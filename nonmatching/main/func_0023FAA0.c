/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0022C2B0(int);
extern int func_0022C2C0(void);
M2C_UNK func_0023F510(M2C_UNK);                     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00931BA0(M2C_UNK);                     /* extern */
extern s32 D_003E9A8C;
extern s32 D_003EAA0C;
extern s32 D_003EAA10;
extern s32 D_003EAA40;
extern char D_0053C304[];
extern char D_0053C306[];
extern char D_00591C09[];

void func_0023FAA0(void) {
    s32 temp_v0;

    D_003EAA40 = 0;
    switch ((*(u8 *)D_00591C09)) {                           /* irregular */
    case 4:
        temp_v0 = func_0022C2C0();
        if ((temp_v0 != 3) && (temp_v0 != 2) && (temp_v0 != 1)) {

        } else {
            func_00931BA0(0xC);
            (*(s16 *)D_0053C304) = 2;
            D_003E9A8C = 1;
            D_003EAA40 = 1;
            D_003EAA0C = 0;
            func_0023F510(3);
            func_0022C2B0(0);
        }
        if (func_0022C2C0() == 3) {
            (*(s16 *)D_0053C304) = 3;
        }
        func_0026E840(0x9A080400);
        return;
    case 14:
        if (func_0022C2C0() == 5) {
            func_00931BA0(9);
            (*(s16 *)D_0053C304) = 2;
            D_003E9A8C = 0xA;
            D_003EAA40 = 1;
            D_003EAA0C = 0;
            func_0023F510(2);
        } else if (func_0022C2C0() == 4) {
            func_00931BA0(9);
            (*(s16 *)D_0053C304) = 2;
            D_003E9A8C = 7;
            D_003EAA40 = 1;
            D_003EAA0C = 0;
            func_0023F510(2);
        }
        func_0026E840(0x9A080400);
        return;
    case 10:
        func_00931BA0(0xE);
        D_003E9A8C = 6;
        D_003EAA0C = 2;
        D_003EAA10 = 1;
        D_003EAA40 = 2;
        (*(s16 *)D_0053C306) = 2;
        func_0026E840(0x9A088407);
        return;
    default:
        func_0026E840(0x9A080400);
        return;
    }
}
