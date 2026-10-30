/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0018D4E0(s32);                           /* extern */
void *func_0018D4F0(s32);                           /* extern */
M2C_UNK func_009ABC10(void *);                      /* extern */

s32 func_009AB9D0(void **arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v0_2;
    s8 var_s0;
    void **var_s1_3;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s2;

    var_s2 = arg0 + 0x70;
    var_s1 = 0;
loop_1:
    var_s0 = 1;
    M2C_FIELD(var_s2, void **, 0) = func_0018D4F0(var_s1 & 0xFFFF);
    temp_v0 = M2C_FIELD(var_s2, void **, 0);
    if (temp_v0 != NULL) {
        M2C_FIELD(var_s2, f32 *, 4) = (f32) M2C_FIELD(temp_v0, f32 *, 0);
        M2C_FIELD(var_s2, f32 *, 8) = (f32) M2C_FIELD(temp_v0, f32 *, 4);
        M2C_FIELD(var_s2, f32 *, 0xC) = (f32) M2C_FIELD(temp_v0, f32 *, 8);
        if (var_s1 < 0x77) {
            if ((var_s1 % 7) == 6) {
                var_s0 = 0;
            }
        } else if (var_s1 < 0xBB) {
            if (((s32) (var_s1 - 0x77) % 4) == 0) {
                var_s0 = 0;
            }
        } else if (var_s1 < 0xD3) {
            temp_v1 = var_s1 - 0xBB;
            if ((temp_v1 % 4) != 0) {
                var_v0 = temp_v1 >> 2;
                if (temp_v1 < 0) {
                    var_v0 = (s32) (temp_v1 + 3) >> 2;
                }
                if (var_v0 == 0) {
                    goto block_37;
                }
            } else {
block_37:
                var_s0 = 0;
            }
        } else {
            temp_v1_2 = var_s1 - 0xD3;
            if ((temp_v1_2 % 4) != 0) {
                var_v0_2 = temp_v1_2 >> 2;
                if (temp_v1_2 < 0) {
                    var_v0_2 = (s32) (temp_v1_2 + 3) >> 2;
                }
                if (var_v0_2 == 0) {
                    goto block_39;
                }
            } else {
block_39:
                var_s0 = 0;
            }
        }
        var_s1 += 1;
        M2C_FIELD(var_s2, s8 *, 0x1C) = var_s0;
        var_s2 += 0x20;
        if (var_s1 >= 0xEB) {
            var_s0_2 = 0;
            var_s1_2 = 0;
loop_26:
            M2C_FIELD(var_s2, void **, 0) = func_0018D4E0(var_s1_2 & 0xFFFF);
            temp_v0_2 = M2C_FIELD(var_s2, void **, 0);
            if (temp_v0_2 != NULL) {
                M2C_FIELD(var_s2, f32 *, 4) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0);
                M2C_FIELD(var_s2, f32 *, 8) = (f32) M2C_FIELD(temp_v0_2, f32 *, 4);
                M2C_FIELD(var_s2, f32 *, 0xC) = (f32) M2C_FIELD(temp_v0_2, f32 *, 8);
                if ((var_s0_2 != 0) && (var_s0_2 != 3)) {
                    M2C_FIELD(var_s2, s8 *, 0x1C) = 1;
                } else {
                    M2C_FIELD(var_s2, s8 *, 0x1C) = 0;
                }
                var_s0_2 += 1;
                var_s2 += 0x20;
                var_s1_2 += 4;
                if (var_s0_2 >= 4) {
                    var_s0_3 = 0;
                    var_s1_3 = arg0;
                    do {
                        *var_s1_3 = func_0018D4E0(var_s0_3 & 0xFFFF);
                        var_s0_3 += 1;
                        var_s1_3 += 4;
                    } while (var_s0_3 < 0x1C);
                    func_009ABC10(arg0 + 0x1E50);
                    return 1;
                }
                goto loop_26;
            }
            return 0;
        }
        goto loop_1;
    }
    return 0;
}
