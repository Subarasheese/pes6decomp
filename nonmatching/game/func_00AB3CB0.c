/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_002084C0(void *);                      /* extern */

s32 func_00AB3CB0(void *arg0) {
    s16 var_v0;
    u16 temp_v1;

    if (func_00207D10(M2C_FIELD(arg0, void **, 4)) != 0) {
        func_002084C0(M2C_FIELD(arg0, void **, 4));
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1A) = 0xFF;
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        switch (temp_v1) {                          /* irregular */
        case 0x2C5:
            var_v0 = 4;
            M2C_FIELD(arg0, s8 *, 0x16) = 0x18;
block_25:
            M2C_FIELD(arg0, s16 *, 0x18) = var_v0;
            break;
        case 0x285:
            var_v0 = 0x23;
            M2C_FIELD(arg0, s8 *, 0x16) = 0x11;
            goto block_25;
        case 0x2A6:
            var_v0 = 0x40;
            M2C_FIELD(arg0, s8 *, 0x16) = 0x11;
            goto block_25;
        case 0x1BF:
        case 0x0:
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            if (M2C_FIELD(arg0, u8 *, 0x10) != 0) {
                M2C_FIELD(arg0, s8 *, 0x16) = 7;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
            } else {
                M2C_FIELD(arg0, s8 *, 0x16) = 0x82;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
            }
            break;
        default:
            var_v0 = 0x10;
            M2C_FIELD(arg0, s8 *, 0x16) = 0x18;
            goto block_25;
        }
        return 1;
    }
    return 0;
}
