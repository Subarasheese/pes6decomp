/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008C13D0(s32, s8, s32);                    /* extern */
M2C_UNK func_008C59B0(s32, s8 *);                   /* extern */
M2C_UNK func_008D3040();                            /* extern */

void func_008D3850(void *arg0, s8 **arg1, s32 arg2) {
    s8 sp6C;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;
    s8 **var_s3;
    s8 *temp_a1;
    s8 *var_v1;
    s8 var_s2;
    void *var_s1;

    var_s3 = arg1;
    var_s0 = arg2;
    if ((arg0 != NULL) && (var_s3 != NULL)) {
        func_008D3040();
        if ((var_s0 & 0xFF) >= 0xB) {
            var_s0 = 0xA;
        }
        temp_s0 = var_s0 & 0xFF;
        if (temp_s0 != 0) {
            temp_a1 = *var_s3;
            if (temp_a1 != NULL) {
                var_v1 = &sp6C;
                var_v0 = 2;
                if (var_v1 != NULL) {
                    do {
                        *var_v1 = 0;
                        var_v0 -= 1;
                        var_v1 += 1;
                    } while (var_v0 != 0);
                }
                if (temp_a1 != NULL) {
                    func_008C59B0(arg0 + 0xB8, temp_a1);
                } else {
                    func_008C59B0(arg0 + 0xB8, &sp6C);
                }
                var_s2 = 0;
                if (temp_s0 > 0) {
                    var_s1 = arg0;
loop_18:
                    if (M2C_FIELD(var_s3, s32 *, 4) != 0) {
                        M2C_FIELD((arg0 + var_s2), s8 *, 3) = 1;
                        temp_v0 = func_008C13D0(M2C_FIELD(arg0, s32 *, 0x48), var_s2, M2C_FIELD(var_s3, s32 *, 4));
                        var_s2 += 1;
                        M2C_FIELD(var_s1, s32 *, 0x5C) = temp_v0;
                        var_s3 += 4;
                        var_s1 += 4;
                        if (var_s2 < temp_s0) {
                            goto loop_18;
                        }
                    }
                }
                M2C_FIELD(arg0, s8 *, 2) = var_s2;
            } else {
                M2C_FIELD(arg0, s8 *, 2) = 0;
            }
        }
    }
}
