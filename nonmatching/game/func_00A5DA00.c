/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B32D0(s32, s32, s32);
extern s32 func_009B3070(s32, s32);
extern s32 func_009B30B0(s32, s32);
extern void *Pes6Ball_Current;

u16 func_00A5DA00(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_v0_2;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v0;
    u16 temp_v1;
    void *temp_a0;

    if (((u64) ((s64) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), u8 *, 0xD) << 0x38) >> 0x39) != 1) {
        temp_s1 = func_009B3070(arg1, arg2) & 0xFFFF;
        if ((func_009B30B0(arg2, arg3) & 0xFFFF) < 0x39) {
            if (((func_009B30B0(arg1, (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x70) && (temp_v0_2 = temp_s1 & 0xFFFF, ((temp_v0_2 < 0x4801) != 0))) {
                var_v0_2 = func_009B32D0(arg2, arg1, (((temp_v0_2 * 2) / 3) + ((u32) (temp_v0_2 * 2) >> 0x1F)) & 0xFFFF);
            } else {
                goto block_6;
            }
        } else {
block_6:
            var_v0_2 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) + 0x7FFF + 1;
        }
        temp_s1_2 = var_v0_2 & 0xFFFF;
        if (((0x1500 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C)) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x21)) {
            return M2C_FIELD(arg0, u16 *, 0x26);
        }
        if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), temp_s1_2) & 0xFFFF) >= 0x40) {
            temp_a0 = M2C_FIELD(arg0, void **, 4);
            temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
            if ((temp_v1 != 0xC6) && (temp_v1 != 0xC7) && (temp_v1 != 0xB6)) {
                goto block_19;
            }
            var_v0 = func_009B32D0(temp_s1_2, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_a0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x1C00)) & 0xFFFF, 0x400);
            goto block_23;
        }
block_19:
        temp_s3 = func_009B30B0(temp_s1_2, arg3) & 0xFFFF;
        if (temp_s3 < (func_009B30B0(temp_s1_2, (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF)) {
            temp_a3 = temp_s1_2 & 0xFFFF;
            temp_v0 = M2C_FIELD(arg0, u16 *, 0x26);
            if ((((((arg3 & 0xFFFF) - temp_a3) + 0x10000) & 0xFFFF) < 0x8001) == ((((temp_v0 - temp_a3) + 0x10000) & 0xFFFF) < 0x8001)) {
                return temp_v0;
            }
        }
        var_v0 = func_009B32D0(temp_s1_2, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x2000);
block_23:
        return var_v0 & 0xFFFF;
    }
    return M2C_FIELD(arg0, u16 *, 0x26);
}
