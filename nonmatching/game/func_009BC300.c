/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
extern s32 func_00BBB7F0(s32);
extern s32 func_00BBB8C0(s32);
extern void *Pes6Ball_Current;
extern char D_005900B0[];
extern char Pes6MatchSquads[];

s32 func_009BC300(void) {
    f32 temp_f2;
    s32 temp_f0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;

    temp_f2 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
    temp_f0 = (s32) (temp_f2 / 188.0f);
    if ((temp_f2 < -3008.0f) && (M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) < -368.0f)) {
        temp_s0 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
        if (((func_00288670(M2C_FIELD(((M2C_FIELD(((void *)D_005900B0), u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(((void *)D_005900B0), u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U) << 5) + 0x5000) < temp_s0) {
            temp_v0 = -(func_00BBB8C0(0x78) + 0x50);
            var_v0_3 = ((temp_f0 * temp_v0) / 100) + ((u32) (temp_f0 * temp_v0) >> 0x1F);
        } else {
            var_a0 = temp_f0 >> 2;
            if (temp_f0 < 0) {
                var_a0 = (s32) (temp_f0 + 3) >> 2;
            }
            var_v0_3 = -temp_f0 + func_00BBB7F0(var_a0);
        }
        return var_v0_3;
    }
    temp_s0_2 = -temp_f0 + func_00BBB8C0(temp_f0 >> 1);
    if (temp_s0_2 > 0) {
        var_v0_4 = temp_s0_2;
    } else {
        var_v0_4 = -temp_s0_2;
    }
    if ((var_v0_4 < 0x18) && !(M2C_FIELD(Pes6Ball_Current, f32 *, 0x30) <= -3008.0f) && (M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) < -368.0f)) {
        var_v0_5 = func_00BBB7F0((M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) / 384) + ((u32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >> 0x1F));
        goto block_17;
    }
    if (temp_s0_2 > 0) {
        var_v0_5 = func_00BBB8C0((M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) / 768) + ((u32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >> 0x1F));
block_17:
        var_v0_2 = temp_s0_2 + var_v0_5;
    } else {
        var_v0_2 = temp_s0_2 - func_00BBB8C0((M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) / 768) + ((u32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >> 0x1F));
    }
    if (var_v0_2 < 0x41) {
        if (var_v0_2 < -0x40) {
            var_v0 = -0x40;
            goto block_21;
        }
        return var_v0_2;
    }
    var_v0 = 0x40;
block_21:
    return var_v0;
}
