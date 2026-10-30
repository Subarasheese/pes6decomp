/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00A0BAC0(void *);
extern s32 func_009B30B0(s32, s32);
extern void *Pes6Ball_Current;
extern char D_005926D8[];
extern char D_005926EC[];
extern char Pes6MatchSquads[];

s32 func_00C4D660(void *arg0, s32 arg1, s32 arg2) {
    f32 var_f0;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x238);
    if (!(temp_v1 & 0x2000)) {
        M2C_FIELD(arg0, s32 *, 0x238) = (s32) (temp_v1 | 0x2000);
        var_s0 = 0;
        if ((M2C_FIELD(arg0, u16 *, 0x30) != 0) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x3000)) {
            var_s0 = 1;
        }
        var_s0_2 = var_s0 + 2;
        temp_a3 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
        temp_v0 = (((temp_a3 * 0x380) / 180) + ((u32) (temp_a3 * 0x380) >> 0x1F)) * 0x380;
        if ((((temp_a3 * temp_v0) / 180) + ((u32) (temp_a3 * temp_v0) >> 0x1F)) < arg2) {
            var_s0_2 += 4;
        }
        if ((s32) (*(u8 *)D_005926EC) >= 0) {
            var_f0 = (f32) (*(u8 *)D_005926EC);
        } else {
            var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926EC) >> 1) | ((*(u8 *)D_005926EC) & 1));
        }
        if (!((*(f32 *)D_005926D8) < var_f0)) {
            var_s0_2 += 8;
        }
        if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0xC01) {
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
        if (func_00A0BAC0(arg0) != 0) {
            var_s0_2 += 0x400;
        }
        if (var_s0_2 == 0x7FF) {
            M2C_FIELD(arg0, s32 *, 0xA4) = 0x19A;
            M2C_FIELD(arg0, u8 *, 0x50) = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D);
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
            M2C_FIELD(arg0, s8 *, 0x16) = 0x96;
            M2C_FIELD(arg0, s16 *, 0x18) = 0xD0;
            M2C_FIELD(arg0, s32 *, 0xF4) = 0;
            return 1;
        }
        return 0;
    }
    return 0;
}
