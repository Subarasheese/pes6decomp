/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_00AA3540();                                /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchSquads[];

s32 func_00A5E1C0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;

    var_s3 = arg2;
    var_s2 = arg3;
    temp_s0 = arg4 - 0x1000 + (var_s3 << 8);
    if ((func_00AA3540() < 0x10000) || (M2C_FIELD(arg0, u8 *, 0x25) != 0)) {
        temp_v0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U) + 0x384;
        var_s2 = ((var_s2 * temp_v0) / 1000) + ((u32) (var_s2 * temp_v0) >> 0x1F);
    }
    var_v0_2 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
    if (var_v0_2 <= 0) {
        var_v0_2 = -var_v0_2;
    }
    var_v1 = var_v0_2 >> 1;
    if (var_v0_2 < 0) {
        var_v1 = (s32) (var_v0_2 + 1) >> 1;
    }
    var_s1 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) + var_v1;
    temp_v0_2 = func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF;
    if (temp_v0_2 < 0x40) {
        temp_v0_3 = var_s1 * ((((temp_v0_2 + 0xC0) / 3) + ((u32) (temp_v0_2 + 0xC0) >> 0x1F)) & 0xFFFF);
        var_s1 = temp_v0_3 >> 6;
        if (temp_v0_3 < 0) {
            var_s1 = (s32) (temp_v0_3 + 0x3F) >> 6;
        }
    }
    if (var_s3 <= 0) {
        var_s3 = -var_s3;
    }
    var_v0_3 = var_s3 >> 1;
    if (var_s3 < 0) {
        var_v0_3 = (s32) (var_s3 + 1) >> 1;
    }
    temp_v1 = arg1 + var_v0_3;
    if (var_s1 < 0x1800) {
        var_s1 = 0x1800;
    }
    if (var_s1 >= 0x3801) {
        var_s1 = 0x3800;
    }
    temp_v0_4 = var_s1 + var_s2;
    if (temp_v0_4 >= temp_v1) {
        if ((temp_v1 + temp_s0) >= var_s1) {
            return arg1;
        }
        var_v0 = var_s1 - temp_s0;
        if (var_v0 < 0x800) {
            var_v0 = 0x800;
        }
        return var_v0;
    }
    var_s4 = temp_v0_4;
    if (temp_v0_4 < 0) {
        var_s4 = 0x800;
    }
    return var_s4;
}
