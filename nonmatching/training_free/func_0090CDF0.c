/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_0098F220(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_00591F24[];
extern char Pes6MatchSquads[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
s32 func_0090CDF0(void *arg0) {
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;

    var_s0 = 0x300;
    temp_f20 = (f32) M2C_FIELD(arg0, s16 *, 0x14);
    switch ((*(u8 *)D_00591F24)) {                           /* irregular */
    case 0:
    case 3:
        break;
    case 1:
        temp_f3 = M2C_FIELD(arg0, f32 *, 0xE0);
        temp_f2 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
        var_s0 = (0x380 - (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6B) & 0x7F, 0x14U) * 2)) & 0xFFFF;
        if ((temp_f2 * temp_f20) < (temp_f3 * temp_f20)) {
            var_v1 = (s32) (temp_f2 - temp_f3);
            if (var_v1 <= 0) {
                var_v1 = -var_v1;
            }
            var_v0 = var_v1 >> 1;
            if (var_v1 < 0) {
                var_v0 = (s32) (var_v1 + 1) >> 1;
            }
            var_v0_2 = var_s0 + (var_v0 & 0xFFFF);
block_21:
            var_s0 = var_v0_2 & 0xFFFF;
        }
        break;
    case 2:
        temp_f3_2 = M2C_FIELD(arg0, f32 *, 0xE0);
        temp_f2_2 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
        var_s0 = 0x380;
        if ((temp_f2_2 * temp_f20) < (temp_f3_2 * temp_f20)) {
            var_v1_2 = (s32) (temp_f2_2 - temp_f3_2);
            if (var_v1_2 <= 0) {
                var_v1_2 = -var_v1_2;
            }
            var_v0_3 = var_v1_2 >> 1;
            if (var_v1_2 < 0) {
                var_v0_3 = (s32) (var_v1_2 + 1) >> 1;
            }
            var_v0_2 = (var_v0_3 & 0xFFFF) + 0x380;
            goto block_21;
        }
        break;
    }
    if (func_0098F220(arg0) != 0) {
        temp_v1 = (var_s0 & 0xFFFF) + 0x80;
        var_v0_4 = temp_v1 >> 1;
        if (temp_v1 < 0) {
            var_v0_4 = (s32) (temp_v1 + 1) >> 1;
        }
        var_s0 = var_v0_4 & 0xFFFF;
    }
    return var_s0;
}
