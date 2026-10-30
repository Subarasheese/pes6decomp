/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00952A50(u16);                             /* extern */
extern char D_00591E4C[];

s32 func_00967760(void *arg0) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u16 temp_v0;
    u16 var_a0;

    if ((*(u8 *)D_00591E4C) != 0) {
        goto block_1;
    }
    if ((func_00952A50(M2C_FIELD(arg0, u16 *, 0x26)) & 0xFF) >= 0x5A) {
        var_s2 = 0x63;
        var_s3 = 0xFFFF & 0xFFFF;
        var_s1 = 0;
        do {
            temp_s0 = (var_s1 & 0xFF) << 0xD;
            temp_v1 = func_00952A50((temp_s0 + (M2C_FIELD(arg0, u8 *, 0x13) << 0xF)) & 0xFFFF) & 0xFF;
            if (temp_v1 < (var_s2 & 0xFF)) {
                var_s2 = temp_v1;
                var_s3 = (temp_s0 + (M2C_FIELD(arg0, u8 *, 0x13) << 0xF)) & 0xFFFF;
            }
            var_s1 = (var_s1 + 1) & 0xFF;
        } while (var_s1 < 8);
        if ((var_s3 & 0xFFFF) != 0xFFFF) {
            return var_s3;
        }
block_1:
        var_a0 = M2C_FIELD(arg0, u16 *, 0x26);
        if (M2C_FIELD(arg0, u8 *, 0x16) != 2) {

        } else {
            temp_v0 = M2C_FIELD(arg0, u16 *, 0x18);
            switch (temp_v0) {                      /* irregular */
            default:
                var_a0 = M2C_FIELD(arg0, u16 *, 0x2C);
                break;
            case 0x58:
            case 0x98:
            case 0x51:
            case 0xF0:
            case 0xF1:
            case 0x18:
            case 0x19:
            case 0x8:
            case 0x4:
            case 0x0:
            case 0x28:
            case 0x74:
            case 0x70:
            case 0x45:
            case 0x39:
            case 0xB0:
            case 0x59:
            case 0x88:
            case 0x32:
            case 0x30:
            case 0xD8:
            case 0xD4:
            case 0xD2:
                var_a0 = M2C_FIELD(arg0, u16 *, 0x30);
                break;
            case 0x52:
            case 0x50:
            case 0x60:
            case 0x44:
            case 0x40:
            case 0x10:
                var_a0 = M2C_FIELD(arg0, u16 *, 0x2E);
                break;
            }
        }
        if ((var_a0 & 0xFFFF) == 0xFFFF) {
            var_a0 = 0;
        }
        return ((var_a0 & 0xFFFF) + 0x1000) & 0xE000 & 0xFFFF;
    }
    return (M2C_FIELD(arg0, u16 *, 0x26) + 0x1000) & 0xE000 & 0xFFFF;
}
