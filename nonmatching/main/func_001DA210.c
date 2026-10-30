/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0052AB90[];
extern char D_0052ABAC[];

u16 *func_001DA210(s32 arg0, s32 arg1, s32 arg2) {
    s32 *var_a3;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a2;
    s32 var_v0_2;
    s32 var_v1;
    u16 *temp_a3;
    u16 *var_v0;
    u16 temp_v0;
    void **var_a3_2;
    void *temp_v1;

    var_a3 = NULL;
    if (((*(s32 *)D_0052ABAC) != 0) && (arg0 >= 0) && (arg0 < (*(s32 *)D_0052AB90))) {
        var_a3 = (*(s32 *)D_0052ABAC) + (arg0 * 0x4C);
    }
    if ((var_a3 != NULL) && (*var_a3 != 0)) {
        var_v0_2 = 1;
    } else {
        var_v0_2 = 0;
    }
    if (var_v0_2 != 0) {
        var_a3_2 = NULL;
        if (((*(s32 *)D_0052ABAC) != 0) && (arg0 >= 0) && (arg0 < (*(s32 *)D_0052AB90))) {
            var_a3_2 = (*(s32 *)D_0052ABAC) + (arg0 * 0x4C);
        }
        temp_v1 = M2C_FIELD(*var_a3_2, s32 *, 8) + (arg2 * 0xC);
        temp_v0 = M2C_FIELD(temp_v1, u16 *, 0);
        if (temp_v0 != 0) {
            temp_a3 = M2C_FIELD(temp_v1, u16 **, 8);
            var_a0 = (temp_v0 & 0xFFFF) - 1;
            var_a2 = 0;
            if (var_a0 > 0) {
                do {
                    temp_v0_2 = var_a2 + var_a0;
                    var_v1 = temp_v0_2 >> 1;
                    if (temp_v0_2 < 0) {
                        var_v1 = (s32) (temp_v0_2 + 1) >> 1;
                    }
                    if ((s32) *(temp_a3 + (var_v1 * 8)) < arg1) {
                        var_a2 = var_v1 + 1;
                    } else {
                        var_a0 = var_v1;
                    }
                } while (var_a2 < var_a0);
            }
            var_v0 = temp_a3 + (var_a2 * 8);
            if (arg1 == *var_v0) {

            } else {
                var_v0 = temp_a3;
            }
            return var_v0;
        }
        goto block_27;
    }
block_27:
    return NULL;
}
