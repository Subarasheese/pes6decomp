/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00293030(void *, s32);                     /* extern */
s32 func_002937A0(s32);                             /* extern */

s32 func_00293620(void *arg0, s32 arg1) {
    s32 temp_a0;
    u8 var_s0;
    s32 var_v0;
    u64 temp_a1;
    u64 temp_a1_2;

    var_s0 = 0;
    temp_a0 = arg1 & 0xFF;
    var_v0 = func_00293030(arg0, func_002937A0(arg1)) & 0xFF;
    switch (temp_a0) {
    case 29:
    case 22:
    case 15:
    case 8:
        temp_a1 = (u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1D) << 0x38) >> 0x3E;
        switch (temp_a1) {
        case 2:
            break;
        case 1:
            if (M2C_FIELD(arg0, u8 *, 0) & 1) {
                var_s0 = 1;
            }
            break;
        case 0:
            if (!(M2C_FIELD(arg0, u8 *, 0) & 1)) {
                var_s0 = 1;
            }
            break;
        }
        break;
    case 30:
    case 23:
    case 16:
    case 9:
        temp_a1_2 = (u64) ((s64) M2C_FIELD(arg0, u8 *, 0x1D) << 0x38) >> 0x3E;
        switch (temp_a1_2) {
        case 2:
            break;
        case 1:
            if (!(M2C_FIELD(arg0, u8 *, 0) & 1)) {
                var_s0 = 1;
            }
            break;
        case 0:
            if (M2C_FIELD(arg0, u8 *, 0) & 1) {
                var_s0 = 1;
            }
            break;
        }
        break;
    }
    if (!var_s0) {
    } else {
        var_v0 = ((u32) (var_v0 & 0xFF) >> 1) & 0xFF;
    }
    return var_v0;
}
