/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009909D0(void *, M2C_UNK);                 /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
extern char D_00591BE4[];

s32 func_00C07060(void *arg0, void *arg1) {
    u16 temp_v1;

    M2C_FIELD(arg0, s32 *, 0x1EC) = 0x200;
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(arg0, s32 *, 0x1EC);
    if ((u32) ((u8) (*(u8 *)D_00591BE4) >> 2) >= (u32) M2C_FIELD(arg1, u32 *, 0x10)) {
        goto block_1;
    }
    if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) >= 0x3000) {
        if (M2C_FIELD(arg0, u8 *, 0x16) == 2) {
            temp_v1 = M2C_FIELD(arg0, u16 *, 0x18);
            if ((temp_v1 != 0x52) && (temp_v1 != 0x32)) {
                goto block_8;
            }
            goto block_10;
        }
block_8:
        if ((func_009909D0(arg0, 0x190000) != 0) || (M2C_FIELD(arg0, s32 *, 0x1C) == 0)) {
            goto block_10;
        }
block_1:
        return 3;
    }
block_10:
    return 1;
}
