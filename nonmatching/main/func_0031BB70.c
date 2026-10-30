/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_003421E0(s32);
extern u8 func_0030DBA0(void);
extern s32 func_00338570(void);
extern void func_00338930(int);
extern s32 func_003389D0(s32, s32);
M2C_UNK func_003387E0(M2C_UNK);                     /* extern */
extern s8 D_003E9F54;

s32 func_0031BB70(s32 arg0) {
    if (func_0030DBA0() != 0) {

    } else {
        func_00338570();
        D_003E9F54 = 0;
        func_003387E0(4);
        func_003421E0(func_003389D0(arg0, 0));
        func_00338930(arg0);
    }
    return 0;
}
