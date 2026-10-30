/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0083F470(M2C_UNK);                         /* extern */
s64 func_00840E40();                                /* extern */
extern char D_0058D7AB[];

void func_0087F550(void) {
    s32 temp_s0;
    s32 temp_v0;
    s64 temp_s1;
    s8 var_a0;

    temp_s1 = (s64) (func_00840E40() << 0x38) >> 0x38;
    temp_s0 = func_0083F470(0);
    temp_v0 = func_0083F470(1);
    if (((s64) (temp_s1 << 0x38) >> 0x38) == 0) {
        if ((temp_s0 == 1) && (temp_v0 == 1)) {
            var_a0 = 0;
        } else {
            var_a0 = 1;
        }
    } else {
        var_a0 = 2;
    }
    (*(s8 *)D_0058D7AB) = var_a0;
}
