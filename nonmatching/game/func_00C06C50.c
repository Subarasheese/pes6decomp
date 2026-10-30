/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00952A50(u16);                             /* extern */
M2C_UNK func_0096D0A0(u16, M2C_UNK);                /* extern */
s32 func_009909D0(M2C_UNK);                         /* extern */
s32 func_009937C0();                                /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
extern char D_00591BE4[];
extern char Pes6MatchSquads[];

s32 func_00C06C50(void *arg0, void *arg1) {
    u16 temp_v1_2;
    u16 var_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg1, u8 *, 0x29);
    switch (temp_v1) {                              /* irregular */
    case 1:
        func_0096D0A0(M2C_FIELD(arg1, u16 *, 0x2A), 0);
        if (M2C_FIELD(arg0, u8 *, 0x16) == 2) {
            temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x18);
            if ((temp_v1_2 != 0xD5) && (temp_v1_2 != 0xD0) && (temp_v1_2 != 4)) {

            } else {
                M2C_FIELD(arg1, u8 *, 0x29) = (u8) (M2C_FIELD(arg1, u8 *, 0x29) + 1);
                M2C_FIELD(arg1, u16 *, 0x2A) = (u16) (M2C_FIELD(arg1, u16 *, 0x2A) + 0x7FFF + 1);
            }
        }
block_33:
    default:
        return 3;
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            if (func_009909D0(0x100000) == 0) {
                goto block_11;
            }
            goto block_12;
        }
block_11:
        if ((u8) (*(u8 *)D_00591BE4) < (u32) M2C_FIELD(arg1, u32 *, 0x10)) {
block_12:
            M2C_FIELD(arg1, u8 *, 0x29) = (u8) (M2C_FIELD(arg1, u8 *, 0x29) + 1);
        }
        M2C_FIELD(arg0, s32 *, 0x1EC) = 0x200;
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(arg0, s32 *, 0x1EC);
        if (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x68) & 1 & 1) {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x26) - 0x4000;
        } else {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x26) + 0x4000;
        }
        M2C_FIELD(arg1, u16 *, 0x2A) = var_v0;
        if ((func_009B3070(M2C_FIELD(arg1, u16 *, 0x2A), M2C_FIELD(((M2C_FIELD((((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 0xB) + arg0), u8 *, 0x1B4) * 2) + arg0), u16 *, 0x128)) & 0xFFFF) >= 0x4001) {
            M2C_FIELD(arg1, u16 *, 0x2A) = (u16) (M2C_FIELD(arg1, u16 *, 0x2A) + 0x7FFF + 1);
        }
        if ((func_00952A50(M2C_FIELD(arg1, u16 *, 0x2A)) & 0xFF) < 0x63) {
            if ((func_00952A50((M2C_FIELD(arg1, u16 *, 0x2A) + 0x7FFF + 1) & 0xFFFF) & 0xFF) >= 0x63) {
                goto block_24;
            }
            goto block_33;
        }
block_24:
        return 1;
    case 2:
        func_0096D0A0(M2C_FIELD(arg1, u16 *, 0x2A), 0);
        if ((func_009937C0() & 0xFF) == 8) {
            return 1;
        }
        goto block_33;
    }
}
