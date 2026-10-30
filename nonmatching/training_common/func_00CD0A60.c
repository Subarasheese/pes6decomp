/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern s32 func_00CD4270(s32);
extern void func_002648E0(int);
extern int func_002646D0(int);
extern void func_002648F0(int);
M2C_UNK func_001DD560(M2C_UNK);                     /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
s32 func_00CD4060(s32, M2C_UNK, s32);               /* extern */
s32 func_00CD44D0(s32, M2C_UNK, s32);               /* extern */

s32 func_00CD0A60(s32 arg0, s32 arg1) {
    s32 temp_a2;
    s32 var_s0;

    var_s0 = 0;
    func_002648F0(arg0);
    temp_a2 = func_002646D0(arg0) & 0xFF;
    switch (temp_a2) {                              /* irregular */
    case 10:
        var_s0 = 1;
        break;
    case 4:
        if (func_00CD4060(arg0, 0, temp_a2) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 3:
        if (func_00CD4270(arg0) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 2:
        if (func_00CD44D0(arg0, 2, temp_a2) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 1:
        func_00264790((void *) arg0, 0xAU);
        break;
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0xB4) == 0) {
            func_00264790((void *) arg0, 1U);
        } else {
            func_00264790((void *) arg0, 2U);
        }
        break;
    case 5:
        if (arg1 != 0) {
            func_001DD560(0x18);
        }
        func_00264790((void *) arg0, 0xAU);
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
