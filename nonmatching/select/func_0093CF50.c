/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00363BD0(void);
extern void func_0023FC70(void);
extern void func_002E92D0(int);
extern s32 func_0017F8A0(s32);
extern void func_001FC840(void);
extern s32 func_002E8C60(void);
extern s32 func_002E8CB0(s32, s8);
s32 func_001B6A30(M2C_UNK, s8);                     /* extern */
M2C_UNK func_0023E0E0(M2C_UNK);                     /* extern */
M2C_UNK func_00363C40();                            /* extern */
extern s8 D_003EAB8C;

void func_0093CF50(void) {
    switch (D_003EAB8C) {                           /* irregular */
    case 0:
        func_002E8CB0(0x46, 0);
        func_002E92D0(1);
        func_0023E0E0(0x1E);
        func_00363BD0();
        D_003EAB8C += 1;
        return;
    case 1:
        if (func_002E8C60() == 1) {
            func_001FC840();
            D_003EAB8C += 1;
            return;
        }
        return;
    case 2:
        if (func_0017F8A0(3) == 1) {
            func_00363C40();
            D_003EAB8C += 1;
            return;
        }
        break;
    case 3:
        if (func_001B6A30(0x4FD5, D_003EAB8C) == 1) {
            D_003EAB8C = 0;
            func_0023FC70();
        }
        break;
    }
}
