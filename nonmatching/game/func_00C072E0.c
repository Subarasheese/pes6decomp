/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096D0A0(void *, s32, M2C_UNK);        /* extern */
s32 func_009909D0(void *, M2C_UNK);                 /* extern */
s32 func_009B3070(u16, s32);                        /* extern */
extern char D_005926EC[];

s32 func_00C072E0(void *arg0, void *arg1) {
    u16 temp_v1;
    u8 temp_a0;

    temp_a0 = M2C_FIELD(arg1, u8 *, 0x29);
    switch (temp_a0) {                              /* irregular */
    case 1:
        M2C_FIELD(arg1, u8 *, 0x29) = (u8) (temp_a0 + 1);
        if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x10C), (M2C_FIELD(arg0, u16 *, 0x26) + 0x1000) & 0xE000 & 0xFFFF) & 0xFFFF) >= 0x1001) {
            return 1;
        }
    case 2:
        if ((M2C_FIELD(arg0, u8 *, 0x16) == 2) && (M2C_FIELD(arg0, u16 *, 0x18) == 0xF1)) {
            M2C_FIELD(arg1, u8 *, 0x29) = (u8) (M2C_FIELD(arg1, u8 *, 0x29) + 1);
            M2C_FIELD(arg1, u32 *, 0x2C) = (u32) M2C_FIELD(arg1, u32 *, 0x10);
        }
    case 3:
        func_0096D0A0(arg0, (M2C_FIELD(arg0, u16 *, 0x26) + 0x7FFF + 1) & 0xFFFF, 0);
        M2C_FIELD(arg0, s32 *, 0x1EC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1EC) | 0x200);
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(arg0, s32 *, 0x1EC);
        if (M2C_FIELD(arg1, u8 *, 0x29) == 3) {
            if ((u32) (M2C_FIELD(arg1, u32 *, 0x2C) + (*(u8 *)D_005926EC)) >= (u32) M2C_FIELD(arg1, u32 *, 0x10)) {
                if (func_009909D0(arg0, 0x90000) != 0) {
                    goto block_25;
                }
                goto block_26;
            }
block_25:
            return 1;
        }
block_26:
    default:
        return 3;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1EC) = 0x200;
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(arg0, s32 *, 0x1EC);
        if (M2C_FIELD(arg0, u8 *, 0x16) == 2) {
            temp_v1 = M2C_FIELD(arg0, u16 *, 0x18);
            if ((temp_v1 != 0x74) && (temp_v1 != 0x70)) {

            } else {
                M2C_FIELD(arg1, u8 *, 0x29) = (u8) (M2C_FIELD(arg1, u8 *, 0x29) + 1);
            }
        }
        if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            M2C_FIELD(arg1, u8 *, 0x29) = (u8) (M2C_FIELD(arg1, u8 *, 0x29) + 1);
        }
        goto block_26;
    }
}
