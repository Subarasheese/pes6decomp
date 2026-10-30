/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
M2C_UNK func_002645D0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_002D49B0(M2C_UNK);                     /* extern */
s32 func_008082E0(s32);                             /* extern */
M2C_UNK func_00CD7960(M2C_UNK);                     /* extern */
M2C_UNK func_00CD7A00(M2C_UNK);                     /* extern */

void func_00CD6D80(void *arg0) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = 0;
    func_00CD7A00(0x2A);
    temp_v0 = func_008082E0(arg0 + 0xA8);
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 3:
        func_002D49B0(0);
        func_002645D0(arg0, 0x18, 1);
        M2C_FIELD(arg0, s8 *, 0x178) = 0;
block_14:
        var_s1 = 1;
        break;
    case 2:
        func_002D49B0(0);
        func_002645D0(arg0, 0x1D, 1);
        M2C_FIELD(arg0, s8 *, 0x178) = 0;
        goto block_14;
    case 1:
        func_002645D0(arg0, 0x13, 1);
        func_00CD7960(0x2A);
        var_s0 = 1;
        func_002D49B0(0);
        var_s1 = 1;
        break;
    }
    if (var_s1 != 0) {
        if (var_s0 == 0) {
            func_00264790(arg0, 0x22U);
        } else {
            func_00264790(arg0, 0x12U);
        }
    }
}
