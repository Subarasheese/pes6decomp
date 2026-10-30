/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_009B30B0(s32, M2C_UNK);                    /* extern */
s32 func_00A1FE80(s32, M2C_UNK);                    /* extern */
extern char Pes6MatchSquads[];

s32 func_00A87CC0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    if ((arg2 & 0xFFFF) < 0x8000) {
        var_v0_2 = func_009B30B0(arg2, 0x4000);
    } else {
        var_v0_2 = func_009B30B0(arg2, 0xC000);
    }
    var_a0 = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) - M2C_FIELD(arg1, f32 *, 0xE8));
    if (var_a0 > 0) {

    } else {
        var_a0 = -var_a0;
    }
    temp_s0 = func_00A1FE80(var_a0, 0x500);
    temp_v1 = (var_v0_2 & 0xFFFF & 0xFFFF) * 0xA00;
    var_v0_3 = temp_v1 >> 6;
    if (temp_v1 < 0) {
        var_v0_3 = (s32) (temp_v1 + 0x3F) >> 6;
    }
    var_s1 = var_v0_3 + 0x200;
    if (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x81) & 0x7F, 0x28U) >= 0x3D) {
        temp_a0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x81) & 0x7F, 0x28U) - 0x3C;
        var_v0 = (s32) ((temp_a0 * 0x600) + (var_s1 * (0x28 - temp_a0))) / temp_a0;
        if (temp_s0 < var_v0) {
            var_v0 = temp_s0;
        }
        return var_v0;
    }
    if (temp_s0 < var_s1) {
        var_s1 = temp_s0;
    }
    return var_s1;
}
