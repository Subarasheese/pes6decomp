/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00288580(void);
extern u32 func_00288670(u32, u32);
s32 func_00A09950(u32, u32);                        /* extern */
extern char D_00591DF0[];
extern char D_005926D8[];
extern char D_005926FC[];
extern char Pes6MatchSquads[];

void func_00AFB7C0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_v1;
    u16 temp_a0;
    u32 temp_a1;
    u32 temp_a2;
    u32 temp_ret;

    temp_a2 = arg2 * (*(u8 *)D_00591DF0);
    temp_a1 = temp_a2 >> 0x1F;
    var_s0 = ((arg2 * (*(u8 *)D_00591DF0)) / 60) + temp_a1;
    if (arg1 >= M2C_FIELD(arg0, s32 *, 0x1C)) {
        if (func_00A09950(temp_a1, temp_a2) != 1) {
            goto block_2;
        }
        temp_ret = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x70) & 0x7F, 0x32U);
        if (((*(f32 *)D_005926D8) <= (f32) ((*(u8 *)D_005926FC) - ((temp_ret / 20) + (temp_ret >> 0x1F)))) && (temp_a1_2 = M2C_FIELD(arg0, s32 *, 0x1C), ((temp_a1_2 < 0xC00) == 0))) {
            var_v1 = temp_a1_2 + (0x1900 / (s32) (var_s0 * 2));
        } else {
block_2:
            var_v1 = M2C_FIELD(arg0, s32 *, 0x1C) + (0x1900 / var_s0);
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = var_v1;
        if (arg1 < M2C_FIELD(arg0, s32 *, 0x1C)) {
            goto block_4;
        }
    } else {
        if (func_00288580() != 0) {
            var_s0 = ((var_s0 * 0xB) / 10) + ((u32) (var_s0 * 0xB) >> 0x1F);
        }
        temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        switch (temp_a0) {                          /* irregular */
        case 0x114:
            var_s0 = ((var_s0 * 6) / 10) + ((u32) (var_s0 * 6) >> 0x1F);
            /* fallthrough */
        case 0xB7:
        case 0x1:
            var_a0 = 0x1900 / var_s0;
            break;
        default:
            var_a0 = 0x1900 / var_s0;
            break;
        }
        if (var_a0 < M2C_FIELD(arg0, s32 *, 0x1C)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - var_a0);
            if (M2C_FIELD(arg0, s32 *, 0x1C) < arg1) {
block_4:
                M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        }
    }
}
