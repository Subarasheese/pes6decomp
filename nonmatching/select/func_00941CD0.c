/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00363BD0(void);
extern void func_002E92D0(int);
extern s32 func_002E84D0(void);
extern s32 func_0017F900(void);
extern void func_001FC840(void);
extern s32 func_002E8C60(void);
extern s32 func_002E8CB0(s32, s8);
M2C_UNK func_0023E0E0(M2C_UNK);                     /* extern */
M2C_UNK func_00363C40();                            /* extern */
extern s8 D_003EABE0;

s32 func_00941CD0(s8 arg0) {
    switch (D_003EABE0) {                           /* irregular */
    case 0:
        if (func_002E84D0() != 1) {
            return 1;
        }
        func_002E8CB0(0x2C, arg0);
        func_002E92D0(1);
        func_0023E0E0(0x1E);
        func_00363BD0();
        D_003EABE0 += 1;
block_12:
    default:
        return 0;
    case 1:
        if (func_002E8C60() == 1) {
            func_00363C40();
            func_001FC840();
            D_003EABE0 += 1;
        }
        goto block_12;
    case 2:
        if (func_0017F900() == 1) {
            D_003EABE0 = 0;
            return 1;
        }
        goto block_12;
    }
}
