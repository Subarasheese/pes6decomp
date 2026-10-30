/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A6D2E0();                                /* extern */
s32 func_00A6D390();                                /* extern */
extern char D_00CBBE50[];

s32 func_00BEE8D0(void *arg0) {
    s32 var_s0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x4A);
    var_s0 = 1;
    switch (temp_v1) {                              /* irregular */
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x2000) {
            M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 8);
        } else {
        default:
block_17:
            var_s0 = 0;
        }
        break;
    case 6:
        if (((u64) ((s64) (*(u8 *)D_00CBBE50) << 0x3B) >> 0x3F) != 0) {
            if (func_00A6D2E0() != 0) {
                M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 8);
            } else {
                goto block_17;
            }
        } else if (func_00A6D390() != 0) {
            M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 8);
        } else {
            goto block_17;
        }
        break;
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0x4D) >= 0x80) {
        var_s0 = 0;
        M2C_FIELD(arg0, u8 *, 0x4D) = 0x80U;
    }
    if (var_s0 == 0) {
        return 0;
    }
    return 1;
}
