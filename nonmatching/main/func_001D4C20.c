/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0052AB50[];
extern char D_0052AB54[];
extern char D_0052AB58[];
extern char D_0052AB5C[];

s32 func_001D4C20(s32 arg0, void *arg1, f32 *arg2) {
    f32 *var_a2;
    s32 var_a7;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t8;
    u32 temp_v0;
    u32 temp_v1;
    void *var_a1;

    var_a1 = arg1;
    var_a2 = arg2;
    var_t1 = 0;
    var_t2 = 0;
    var_t3 = 0;
    var_t8 = 0;
    var_t0 = 0;
    var_a7 = 0;
    if (arg0 > 0) {
loop_2:
        temp_v1 = M2C_FIELD(var_a1, u32 *, 0);
        if ((u32) (*(u32 *)D_0052AB50) < temp_v1) {
            var_t8 += 1;
        }
        if (temp_v1 < (u32) (*(u32 *)D_0052AB54)) {
            var_t3 += 1;
        }
        temp_v0 = M2C_FIELD(var_a1, u32 *, 4);
        if ((u32) (*(u32 *)D_0052AB58) < temp_v0) {
            var_t2 += 1;
        }
        if (temp_v0 < (u32) (*(u32 *)D_0052AB5C)) {
            var_t1 += 1;
        }
        if (((s32) temp_v1 < 0x10001) && ((s32) temp_v1 >= 0) && ((s32) temp_v0 < 0x10001) && ((s32) temp_v0 >= 0) && (M2C_FIELD(var_a1, s32 *, 8) >= 0)) {
            if (*var_a2 < 0.0f) {
                var_t0 += 1;
            }
            var_a7 += 1;
            var_a1 += 0x10;
            var_a2 += 4;
            if (var_a7 >= arg0) {
                goto block_19;
            }
            goto loop_2;
        }
        return 0;
    }
block_19:
    if ((var_t8 < arg0) && (var_t3 < arg0) && (var_t2 < arg0) && (var_t1 < arg0)) {
        if ((var_t0 != 0) && (var_t0 != arg0)) {
            return 0;
        }
        return 1;
    }
    return 0;
}
