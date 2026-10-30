/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B30B0(s32, s32);
extern void *Pes6Ball_Current;
extern char D_005926D8[];
extern char D_005926DE[];
extern char Pes6MatchSquads[];

s32 func_00C4D8F0(void *arg0, s32 arg1, s32 arg2) {
    f32 var_f0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s0_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x238);
    if (!(temp_v1 & 0x1000)) {
        M2C_FIELD(arg0, s32 *, 0x238) = (s32) (temp_v1 | 0x1000);
        var_s0 = 0;
        if ((M2C_FIELD(arg0, u16 *, 0x30) != 0) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x3000)) {
            var_s0 = 1;
        }
        var_s0_2 = var_s0 + 2;
        temp_v1_2 = (((u64) ((s64) M2C_FIELD((((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900) + (M2C_FIELD(arg0, u8 *, 0x11) * 0x348)), u8 *, 0x8C) << 0x38) >> 0x3A) & 0xFF) + 0x94;
        temp_a0 = (((temp_v1_2 * 0x380) / 180) + ((u32) (temp_v1_2 * 0x380) >> 0x1F)) * 0x380;
        if (((((temp_v1_2 * temp_a0) / 180) + ((u32) (temp_v1_2 * temp_a0) >> 0x1F)) < arg2) || (((*(f32 *)D_005926D8) <= 8.0f) && (temp_a0_2 = (((temp_v1_2 * 0x280) / 180) + ((u32) (temp_v1_2 * 0x280) >> 0x1F)) * 0x280, (((((temp_v1_2 * temp_a0_2) / 180) + ((u32) (temp_v1_2 * temp_a0_2) >> 0x1F)) < arg2) != 0)))) {
            var_s0_2 += 4;
        }
        if ((s32) (*(u8 *)D_005926DE) >= 0) {
            var_f0 = (f32) (*(u8 *)D_005926DE);
        } else {
            var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926DE) >> 1) | ((*(u8 *)D_005926DE) & 1));
        }
        if (!((*(f32 *)D_005926D8) < var_f0)) {
            var_s0_2 += 8;
        }
        if (M2C_FIELD(arg0, s32 *, 0x1C) < 0xC00) {
            var_s0_2 += 0x10;
        }
        if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0x2A)) & 0xFFFF) < 0x31) {
            var_s0_2 += 0x20;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x114) >= 0x281U) {
            var_s0_2 += 0x40;
        }
        if ((func_009B30B0((s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), (s32) M2C_FIELD(arg0, u16 *, 0xA8)) & 0xFFFF) >= 0x50) {
            var_s0_2 += 0x80;
        }
        if ((func_009B30B0((s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), arg1) & 0xFFFF) >= 0x18) {
            var_s0_2 += 0x100;
        }
        if ((func_009B30B0((s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), arg1) & 0xFFFF) < 0x39) {
            var_s0_2 += 0x200;
        }
        if (var_s0_2 == 0x3FF) {
            M2C_FIELD(arg0, s8 *, 0x16) = 0x96;
            M2C_FIELD(arg0, s16 *, 0x18) = 0;
            return 1;
        }
        return 0;
    }
    return 0;
}
