/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(s32, u16);                        /* extern */

s32 func_00A0CFA0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;
    u16 temp_v1;

    temp_a2 = func_009B3070(arg2, M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF;
    if (temp_a2 >= 0x1401) {
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        switch (temp_v1) {                          /* irregular */
        case 0x34:
        case 0x33:
        case 0xC6:
        case 0xC7:
            if ((arg1 & 0xFFFF) >= 0x1401) {
                return 1;
            }
block_19:
            goto block_20;
        case 0x68:
        case 0x67:
        case 0x6E:
        case 0x6D:
            if ((M2C_FIELD(arg0, s32 *, 0x1C) >= (0x1100 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC))) && (temp_a2 >= 0x4001)) {
            default:
                if ((M2C_FIELD(arg0, s32 *, 0x1C) < 0x400) && ((arg1 & 0xFFFF) < 0x1401)) {
                    goto block_20;
                }
                if ((arg1 & 0xFFFF) >= 0x801) {
                    return 1;
                }
                goto block_19;
            }
            goto block_20;
        }
    } else {
block_20:
        return 0;
    }
}
