/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00A9B980(void *);
s32 func_009B32D0(u16, u16, M2C_UNK);               /* extern */
s32 func_00A20DC0(void *, s32, u16, u16, M2C_UNK, s32); /* extern */
s32 func_00A21A90(void *, s32, u16, u16, s32, s32); /* extern */
extern char Pes6MatchSquads[];

s32 func_00A68CC0(void *arg0) {
    s16 var_v1;
    u16 temp_v1;
    u8 temp_a5;
    u8 temp_a5_2;

    if (func_00A9B980(arg0) < 0x01000001) {
        temp_a5 = M2C_FIELD(arg0, u8 *, 0x12);
        if (func_00A21A90(arg0, M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a5 * 0x6900))), u8 *, 0x68) & 1 & 1, M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x120), M2C_FIELD(arg0, s32 *, 0x1C), temp_a5 * 0x69) == 0) {
            temp_a5_2 = M2C_FIELD(arg0, u8 *, 0x12);
            if (func_00A20DC0(arg0, M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a5_2 * 0x6900))), u8 *, 0x68) & 1 & 1, M2C_FIELD(arg0, u16 *, 0x120), M2C_FIELD(arg0, u16 *, 0x26), 0, temp_a5_2 * 0x69) != 0) {
                var_v1 = 7;
                M2C_FIELD(arg0, s8 *, 0x16) = 0xA;
                goto block_14;
            }
            goto block_3;
        }
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        if ((temp_v1 == 0x233) || (temp_v1 == 0x306) || (temp_v1 == 0x305)) {
            M2C_FIELD(arg0, s32 *, 0x94) = (s32) (func_009B32D0(M2C_FIELD(arg0, u16 *, 0x2C), M2C_FIELD(arg0, u16 *, 0x26), 0x1800) & 0xFFFF);
        }
        var_v1 = 6;
        M2C_FIELD(arg0, s8 *, 0x16) = 0xA;
block_14:
        M2C_FIELD(arg0, s16 *, 0x18) = var_v1;
        return 1;
    }
block_3:
    return 0;
}
