/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_009B3070(u16, s32);                        /* extern */
s32 func_00A1FE80(s32, M2C_UNK);                    /* extern */
s32 func_00AA3540(void *);                          /* extern */
s32 func_00BBB780(s64);                             /* extern */
extern char D_00592260[];
extern char D_00592268[];
extern char Pes6MatchSquads[];

void func_00A64850(void *arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    var_s1 = arg2;
    var_s0 = arg3;
    temp_s4 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7E) & 0x7F, 0x32U) * 0xA;
    if (arg4 < 2U) {
        temp_v1 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF;
        if (temp_v1 < 0x2801) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
            var_a0 = func_00A1FE80(((temp_a0 * 9) / 10) + ((u32) (temp_a0 * 9) >> 0x1F), 0xE00);
        } else {
            temp_a1 = (temp_v1 - 0x2000) & 0xFFFF;
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x1C) * (0x8000 - ((((temp_a1 * 0x3C) / 100) + ((u32) (temp_a1 * 0x3C) >> 0x1F)) & 0xFFFF));
            var_a0 = temp_v1_2 >> 0xF;
            if (temp_v1_2 < 0) {
                var_a0 = (s32) (temp_v1_2 + 0x7FFF) >> 0xF;
            }
        }
        temp_v1_3 = temp_s4 + 0x600;
        if (var_a0 < temp_v1_3) {
            var_a0 = temp_v1_3;
        }
        if (var_a0 < var_s1) {
            var_s1 = var_a0;
        }
    }
    if ((arg4 != 1) && (var_s0 < 0)) {
        if (func_00AA3540(arg0) < 0xC400) {
            temp_v1_4 = M2C_FIELD(arg0, u8 *, 0x5F) + func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U);
            var_v0 = temp_v1_4 >> 1;
            if (temp_v1_4 < 0) {
                var_v0 = (s32) (temp_v1_4 + 1) >> 1;
            }
            if (!(func_00BBB780((s64) ((var_v0 - 0x3C) << 0x30) >> 0x30) & 0xFF)) {
                temp_v0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7E) & 0x7F, 0x32U);
                var_v1 = -temp_v0;
                var_v0_2 = temp_v0 * -2;
            } else {
                goto block_8;
            }
        } else {
block_8:
            temp_v0_2 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7E) & 0x7F, 0x32U);
            var_v1 = -temp_v0_2;
            var_v0_2 = temp_v0_2 * -4;
        }
        temp_s4_2 = (s32) ((var_v0_2 + var_v1) * M2C_FIELD(arg0, s32 *, 0x1C)) / (s32) (M2C_FIELD(arg0, s32 *, 0x58) - 0x200);
        var_s5 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF;
        if (var_s5 < (func_009B3070(M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF)) {
            var_s5 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF;
        }
        if (temp_s4_2 < var_s0) {
            var_s0 = temp_s4_2;
        }
        temp_v1_5 = var_s0 * (0x8000 - (var_s5 & 0xFFFF));
        var_s0 = temp_v1_5 >> 0xF;
        if (temp_v1_5 < 0) {
            var_s0 = (s32) (temp_v1_5 + 0x7FFF) >> 0xF;
        }
    }
    (*(s32 *)D_00592260) = var_s1;
    (*(s32 *)D_00592268) = var_s0;
}
