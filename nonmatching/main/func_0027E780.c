/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, u16);                        /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_009B32D0(u16, u16, s32);                   /* extern */
s32 func_009F42B0(void *, M2C_UNK);                 /* extern */
s32 func_00BBB7F0(M2C_UNK);                         /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char Pes6MatchSquads[];

s32 func_0027E780(void *arg0) {
    s32 temp_a0_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    u16 temp_a0;
    u16 temp_a1_2;
    u16 temp_s0;
    u16 temp_s0_2;
    u16 temp_s1;
    void *temp_a1;

    temp_s0 = M2C_FIELD(arg0, u16 *, 0x10C);
    temp_a1_2 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x58);
    temp_s1 = (temp_a1_2 + 0x7FFF + 1) & 0xFFFF;
    temp_s3 = func_009B30B0(temp_s0, temp_a1_2) & 0xFFFF;
    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x21) {
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x11) {
            temp_v0_2 = temp_s3 & 0xFFFF;
            if ((temp_v0_2 >= 0x21) && (temp_v0_2 < 0x61)) {
                temp_v0_3 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                if ((temp_v0_3 < 0x3000) && (temp_v0_3 >= 0x1001)) {
                    temp_s0_2 = ((temp_s0 & 0xFFFF) + func_00BBB7F0(0x1000)) & 0xFFFF;
                    temp_s1_2 = func_009B30B0(temp_s0_2, M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF;
                    temp_v1 = temp_s1_2 & 0xFFFF;
                    temp_v0 = func_00BBB8C0(0x1E) + 0x3C;
                    return func_009B32D0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), temp_s0_2, (((temp_v1 * temp_v0) / 100) + ((u32) (temp_v1 * temp_v0) >> 0x1F)) & 0xFFFF) & 0xFFFF;
                }
            }
        }
        goto block_3;
    }
block_3:
    if ((M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x1000) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), temp_s0) & 0xFFFF) < 0x21)) {
        return ((temp_s0 & 0xFFFF) + func_00BBB7F0(0x1000)) & 0xFFFF;
    }
    temp_s3_2 = func_009B3070(temp_s1, temp_s0) & 0xFFFF;
    var_s3 = (temp_s3_2 + func_00BBB8C0(0x1800)) & 0xFFFF;
    temp_a1_3 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
    var_v1 = (((temp_a1_3 * 7) / 10) + ((u32) (temp_a1_3 * 7) >> 0x1F)) & 0xFFFF;
    if (var_v1 >= 0x3801) {
        var_v1 = 0x3800;
    }
    temp_v1_2 = var_v1 & 0xFFFF;
    if (temp_v1_2 < (var_s3 & 0xFFFF)) {
        var_s3 = temp_v1_2;
    }
    temp_a1 = M2C_FIELD(arg0, void **, 4);
    temp_a0 = M2C_FIELD(temp_a1, u16 *, 0x30);
    switch (temp_a0) {                              /* irregular */
    case 0x2EA:
        if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4C)) {
            temp_a2_2 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
            if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) <= (f32) (((temp_a2_2 * -0x60) / 183) + ((u32) (temp_a2_2 * -0x60) >> 0x1F))) && ((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x14400U)) {
                return (M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + (((M2C_FIELD(temp_a1, u8 *, 0x2D) != 0) ? -1 : 1) << 0xC)) & 0xFFFF;
            }
        }
    default:
block_16:
        temp_v1_3 = func_00BBB8C0(0xB) + 0xE;
        temp_v0_4 = var_s3 & 0xFFFF;
        temp_a2 = (((temp_v0_4 * temp_v1_3) / 10) + ((u32) (temp_v0_4 * temp_v1_3) >> 0x1F)) & 0xFFFF;
        if (((((temp_s0 & 0xFFFF) - (temp_s1 & 0xFFFF)) + 0x10000) & 0xFFFF) >= 0x8001) {
            var_v0 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + 0x1000;
        } else {
            var_v0 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) - 0x1000;
        }
        return func_009B32D0(var_v0 & 0xFFFF, temp_s1, temp_a2) & 0xFFFF;
    case 0x135:
        if (M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) < (f32) func_009F42B0(arg0, -0x100)) {
            temp_a0_2 = var_s3 & 0xFFFF;
            var_s3 = (((temp_a0_2 * 0xF) / 10) + ((u32) (temp_a0_2 * 0xF) >> 0x1F)) & 0xFFFF;
        }
        goto block_16;
    }
}
