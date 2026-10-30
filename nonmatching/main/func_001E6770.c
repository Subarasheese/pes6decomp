/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C7E10(s32, s32);                        /* extern */
extern char D_0052B120[];
extern void *D_0052B124;
extern void *D_0052B128;

void *func_001E6770(s32 arg0) {
    s32 temp_a0;
    s32 var_s1;
    void *var_s1_2;
    void *var_s2;

    if (arg0 == 0) {
        return NULL;
    }
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
                    goto block_13;
                }
                goto loop_7;
            }
        } else {
block_13:
            var_s2 = NULL;
        }
    }
    if (var_s2 != NULL) {

    } else {
        var_s1_2 = D_0052B128;
        if (var_s1_2 != NULL) {
loop_15:
            var_s2 = M2C_FIELD(var_s1_2, void **, 8);
loop_16:
            if (func_001C7E10(M2C_FIELD(var_s2, s32 *, 4), arg0) != 0) {
                var_s2 += 8;
                if (M2C_FIELD(var_s2, s32 *, 4) == 0) {
                    var_s1_2 = M2C_FIELD(var_s1_2, void **, 4);
                    if (var_s1_2 == NULL) {
                        goto block_22;
                    }
                    goto loop_15;
                }
                goto loop_16;
            }
        } else {
block_22:
            var_s2 = NULL;
        }
        if (var_s2 == NULL) {
            var_s2 = NULL;
        }
    }
    return var_s2;
}
