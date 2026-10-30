/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E19[];

s32 func_0027D960(void *arg0) {
    s32 temp_v0;
    s32 var_v0;
    u16 temp_v1;
    u64 temp_v1_2;
    void *temp_a0;

    temp_v1 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
    if ((temp_v1 != 0xD) && (temp_v1 != 0xB) && (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E19))) {
        return 1;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 < 0x1700) {
        if (temp_v0 >= 0x1101) {
            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x41) {
                goto block_22;
            }
            goto block_8;
        }
block_8:
        temp_a0 = M2C_FIELD(arg0, void **, 4);
        if ((M2C_FIELD(temp_a0, u16 *, 0x30) != 0x314) && (temp_v1_2 = (u64) ((s64) M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 0xD) << 0x38) >> 0x39, (temp_v1_2 != 8)) && (temp_v1_2 != 7) && (temp_v1_2 != 6)) {
            var_v0 = 0;
        } else {
            var_v0 = 1;
        }
        if (var_v0 != 0) {
            return 0;
        }
        if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x900) {
            return (func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x21;
        }
        return 0;
    }
block_22:
    return 1;
}
