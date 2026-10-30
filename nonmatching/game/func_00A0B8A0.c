/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16, s32);                   /* extern */

s32 func_00A0B8A0(void *arg0) {
    s32 var_a2;
    u16 temp_v1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    if ((temp_v1 != 0x2BA) && (temp_v1 != 0x22) && (temp_v1 != 0x23) && (temp_v1 != 0x31) && (temp_v1 != 0x12) && (temp_v1 != 0xC3) && (temp_v1 != 0xC2) && (temp_v1 != 0xC5) && (temp_v1 != 0xC4) && (temp_v1 != 0xBF) && (temp_v1 != 0xC6) && (temp_v1 != 0xC7) && (temp_v1 != 0xB6) && (temp_v1 != 0x2B5) && (temp_v1 != 0x2B7) && (temp_v1 != 0xC8) && (temp_v1 != 0x6E) && (temp_v1 != 0x6D) && (temp_v1 != 0x6A) && (temp_v1 != 0x6B) && (temp_v1 != 0x2C0) && (temp_v1 != 0x2B4) && (temp_v1 != 0x22A) && (temp_v1 != 0xBB) && (temp_v1 != 0xB7) && (temp_v1 != 3) && (temp_v1 != 0x68) && (temp_v1 != 0xBE) && (temp_v1 != 0x11) && (temp_v1 != 0x14) && (temp_v1 != 0x16) && (temp_v1 != 0x17) && (temp_v1 != 0x15)) {
        var_a2 = 1;
        if (((u64) ((s64) M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 0xD) << 0x38) >> 0x39) != 1) {
            if ((temp_v1 != 0xC1) && (temp_v1 != 0xC8)) {
                var_a2 = 0;
            } else {
                var_a2 = 1;
            }
        }
        if (var_a2 == 0) {
            return (func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x28), var_a2) & 0xFFFF) < 0x21;
        }
        return 0;
    }
    return 1;
}
