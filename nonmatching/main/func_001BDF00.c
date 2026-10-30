/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEDA0(void *, u8);
f32 func_001BE080(s32, s32, f32);                   /* extern */
extern char D_00398620[];

void func_001BDF00(void *arg0) {
    s8 sp90;
    M2C_UNK *var_s2;
    s32 temp_a2;
    s32 temp_f0;
    s32 temp_s7;
    s32 var_s6;
    s32 var_v0;
    s32 var_v1;
    s8 *var_a1;
    s8 *var_s1;
    u32 var_s5;
    void *temp_s4;
    void *var_s3;

    var_a1 = &sp90;
    var_s6 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x20);
    temp_s7 = (s32) M2C_FIELD(arg0, f32 *, 0x2C);
    var_v1 = 0xC;
    if (var_a1 != NULL) {
        do {
            *var_a1 = 0;
            var_v1 -= 1;
            var_a1 += 1;
        } while (var_v1 != 0);
    }
    if (var_s6 != temp_a2) {
        if (var_s6 >= temp_a2) {
            if (temp_a2 < var_s6) {
                var_s6 -= 0x18;
                if (var_s6 < temp_a2) {
                    goto block_10;
                }
            }
        } else {
            var_s6 += 0x18;
            if (temp_a2 < var_s6) {
block_10:
                var_s6 = temp_a2;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = var_s6;
    }
    var_s3 = arg0;
    var_s5 = 0;
    var_s2 = ((void *)D_00398620);
    var_s1 = &sp90;
    do {
        temp_s4 = M2C_FIELD(var_s3, void **, 8);
        if (temp_s4 != NULL) {
            temp_f0 = (s32) ((func_001BE080(M2C_FIELD(var_s2, s32 *, 4), M2C_FIELD(var_s2, s32 *, 0), (f32) temp_s7) * (f32) var_s6) / 100.0f);
            if (temp_f0 < 0x100) {
                var_v0 = temp_f0;
            } else {
                var_v0 = 0xFF;
            }
            func_001EEDA0(temp_s4, var_v0 & 0xFF);
            *var_s1 = (f32) temp_f0;
        }
        var_s5 += 1;
        var_s3 += 4;
        var_s2 += 8;
        var_s1 += 4;
    } while (var_s5 < 2U);
}
