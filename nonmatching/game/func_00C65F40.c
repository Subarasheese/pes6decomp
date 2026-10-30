/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_00952420(void *, u16, s32, s32);           /* extern */
f32 func_00983550(M2C_UNK, f32, M2C_UNK);           /* extern */
s32 func_00990750(u8, s32, f32, f32);               /* extern */
s32 func_009909D0(void *, s32, u8, s32, u32);       /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E4C[];
extern char Pes6MatchSquads[];

s32 func_00C65F40(void *arg0, s32 arg1) {
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_s2;
    u32 temp_a4;
    u32 temp_ret;
    u8 temp_a2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v1_3;

    temp_v1 = arg1 & 0xFF;
    var_s2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x1DE) == temp_v1) {
        var_s2 = 1;
    }
    switch (temp_v1) {                              /* irregular */
    case 2:
        if ((*(u8 *)D_00591E4C) != 0) {
            temp_v1_2 = (*(u8 *)D_00591E4C) & 0xFF;
            if (temp_v1_2 == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = temp_v1_2 % 23;
            }
            temp_v0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
            temp_v1_3 = (M2C_FIELD(temp_v0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v0, u8 *, 0x12) * 0x6900));
            if ((((u64) ((s64) M2C_FIELD(temp_v1_3, u8 *, 0x7C) << 0x38) >> 0x3F) == 0) && (((u64) ((s64) M2C_FIELD(temp_v1_3, u8 *, 0x7D) << 0x38) >> 0x3F) == 0)) {
                goto block_12;
            }
            temp_s0 = var_s2 & 0xFF;
            temp_s1 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900));
            temp_ret = func_00288670(M2C_FIELD(temp_s1, u8 *, 0x81) & 0x7F, 0x28U);
            temp_a4 = temp_ret >> 0x1F;
            temp_a2 = M2C_FIELD(temp_s1, u8 *, 0x7B);
            temp_v0_2 = 0x600 - (temp_s0 << 9);
            temp_a3 = (temp_ret / 10) + temp_a4;
            if (!(func_009909D0(arg0, temp_v0_2 * temp_v0_2, temp_a2, temp_a3, temp_a4) & 0xFF)) {
                temp_v0_3 = 0x800 - (temp_s0 << 9);
                if (func_00952420(arg0, M2C_FIELD(arg0, u16 *, 0x2A), (0x2000 - (((temp_s0 * 2) + (temp_a3 + (((u64) ((s64) temp_a2 << 0x38) >> 0x3F) * 0x10))) << 8)) & 0xFFFF, temp_v0_3 * temp_v0_3) != 0) {
                    goto block_17;
                }
            }
            goto block_12;
        }
block_12:
        if ((func_00990750(M2C_FIELD(arg0, u8 *, 0x13), 0x800 - ((var_s2 & 0xFF) << 9), M2C_FIELD(arg0, f32 *, 0xE0), func_00983550(0, M2C_FIELD(arg0, f32 *, 0xE8), 0x45000000)) & 0xFF) < 2) {
block_17:
            return 1;
        }
    case 1:
    default:
        return 0;
    }
}
