/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00821570();                                /* extern */
s32 func_0093AF60();                                /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
extern void *D_00A68CB8;

void func_0096AA20(void) {
    s32 var_v0;
    void *temp_s0;

    temp_s0 = D_00A68CB8;
    if (func_00969B90() != 0) {
        func_009717C0(5);
    } else if (func_00821570() != 0) {
        if ((M2C_FIELD(temp_s0, s32 *, 0xC) != 4) && (func_0093AF60() != 0)) {
            func_009717C0(5);
            return;
        }
        if (func_0093AF60() != 0) {
            var_v0 = 0x01FB003E;
        } else {
            var_v0 = 0x020D0023;
        }
        M2C_FIELD(temp_s0, s32 *, 0) = var_v0;
        func_0026E840(0x8C008005);
        func_009717C0(0xB);
    }
}
