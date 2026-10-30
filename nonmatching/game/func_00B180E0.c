/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3070(s32, s32);
extern s32 func_009B32D0(s32, s32, s32);
s32 func_0099DF40(void *);                          /* extern */
s32 func_00AA3740(void *, s32, M2C_UNK);            /* extern */

u16 func_00B180E0(void *arg0) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v1;
    u16 var_s0;
    void *temp_a0;

    if (((f32) M2C_FIELD(arg0, s16 *, 0x14) * M2C_FIELD(arg0, f32 *, 0xE0)) <= -13081.0f) {
        var_v0_2 = (s32) M2C_FIELD(arg0, f32 *, 0xE8);
        if (var_v0_2 <= 0) {
            var_v0_2 = -var_v0_2;
        }
        if (var_v0_2 < 0x420) {
            var_s0 = M2C_FIELD(arg0, u16 *, 0x2A);
        } else {
            goto block_5;
        }
    } else {
block_5:
        temp_s0 = func_0099DF40(arg0) & 0xFFFF;
        var_s0 = func_009B32D0(temp_s0, func_00AA3740(arg0, temp_s0, 0x90000) & 0xFFFF, 0x3800) & 0xFFFF;
    }
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_a1 = func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF;
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 0x347:
        return M2C_FIELD(arg0, u16 *, 0x26);
    case 0x373:
        var_v0 = func_009B32D0((s32) M2C_FIELD(arg0, u16 *, 0x28), (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x1800);
block_41:
        return var_v0 & 0xFFFF;
    case 0x349:
        var_v0 = func_009B32D0((s32) var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_a0, u8 *, 0x2D) != 0) ? -1 : 1) << 0xB)) & 0xFFFF, 0x1000);
        goto block_41;
    case 0x34A:
        var_v0 = func_009B32D0((s32) var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_a0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x2800)) & 0xFFFF, 0x2000);
        goto block_41;
    case 0x344:
        temp_a0_2 = ((u32) (temp_a1 & 0xFFFF) >> 3) & 0xFFFF;
        var_v0 = func_009B32D0((s32) var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - ((temp_a0_2 + 0x2000) * ((M2C_FIELD(temp_a0, u8 *, 0x2D) != 0) ? -1 : 1))) & 0xFFFF, (temp_a0_2 + 0x1000) & 0xFFFF);
        goto block_41;
    case 0x362:
        return M2C_FIELD(arg0, u16 *, 0x26);
    case 0x34C:
    case 0x346:
        var_v0 = M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_a0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x3000);
        goto block_41;
    case 0x34B:
    case 0x371:
    case 0x36E:
    case 0x36F:
        var_v0 = func_009B32D0((s32) var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_a0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x3000)) & 0xFFFF, 0x1000);
        goto block_41;
    case 0x364:
    case 0x345:
        temp_a0_3 = ((u32) (temp_a1 & 0xFFFF) >> 3) & 0xFFFF;
        var_v0 = func_009B32D0((s32) var_s0, (M2C_FIELD(arg0, u16 *, 0x26) - ((temp_a0_3 + 0x2000) * ((M2C_FIELD(temp_a0, u8 *, 0x2D) != 0) ? -1 : 1))) & 0xFFFF, (temp_a0_3 + 0x1000) & 0xFFFF);
        goto block_41;
    default:
        var_v0 = func_009B32D0((s32) var_s0, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x1800);
        goto block_41;
    }
}
