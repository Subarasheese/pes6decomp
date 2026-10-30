/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C7E10(s32, s32);                        /* extern */
extern char D_0052B120[];
extern s32 *D_0052B124;
extern void *D_0052B128;

u64 func_001E6660(s32 arg0) {
    s32 *var_s2;
    s32 temp_a0;
    s32 var_s1;
    u64 var_v0;
    void *var_s1_2;

    if (arg0 == 0) {
        var_s2 = NULL;
    } else {
        var_s1 = (*(s32 *)D_0052B120);
        if (var_s1 == 0) {
            var_s2 = NULL;
        } else {
            var_s2 = D_0052B124;
            if (var_s1 != 0) {
loop_7:
                temp_a0 = M2C_FIELD(var_s2, s32 *, 4);
                if ((temp_a0 == 0) || (func_001C7E10(temp_a0, arg0) != 0)) {
                    var_s1 -= 1;
                    var_s2 += 8;
                    if (var_s1 == 0) {
                        goto block_18;
                    }
                    goto loop_7;
                }
            } else {
block_18:
                var_s2 = NULL;
            }
        }
        if (var_s2 == NULL) {
            var_s1_2 = D_0052B128;
            if (var_s1_2 != NULL) {
loop_20:
                var_s2 = M2C_FIELD(var_s1_2, s32 **, 8);
loop_21:
                if (func_001C7E10(M2C_FIELD(var_s2, s32 *, 4), arg0) != 0) {
                    var_s2 += 8;
                    if (M2C_FIELD(var_s2, s32 *, 4) == 0) {
                        var_s1_2 = M2C_FIELD(var_s1_2, void **, 4);
                        if (var_s1_2 == NULL) {
                            goto block_27;
                        }
                        goto loop_20;
                    }
                    goto loop_21;
                }
            } else {
block_27:
                var_s2 = NULL;
            }
            if (var_s2 == NULL) {
                var_s2 = NULL;
            }
        }
    }
    if (var_s2 != NULL) {
        var_v0 = (u64) ((s64) *var_s2 << 0x21) >> 0x21;
    } else {
        var_v0 = 0;
    }
    return var_v0;
}
