/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008C5E20(s32, s32, s32);               /* extern */

s32 func_008C6580(void *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_a2;
    u8 var_a3;

    var_a3 = M2C_FIELD(arg0, u8 *, 0x50);
    if (arg1 > 0) {
        var_v0 = arg1;
    } else {
        var_v0 = -arg1;
    }
    if (var_v0 >= 5) {
        if (var_a3 != 4) {
            var_v1 = 5;
        } else {
            var_v1 = 0xA;
        }
        var_a1 = M2C_FIELD(arg0, u8 *, 0x51) + arg1;
        if (var_a1 >= 0) {
            if (var_a1 >= var_v1) {
                var_a1 -= var_v1;
                var_a3 = (u8) ((s32) (var_a3 + 1) % 5);
            }
        } else {
            var_v1_2 = 5;
            var_a3 = (u8) ((s32) (var_a3 + 4) % 5);
            if (var_a3 == 4) {
                var_v1_2 = 0xA;
            }
            var_a1 += var_v1_2;
        }
        goto block_27;
    }
    switch (var_a3) {                               /* irregular */
    case 2:
        return 0;
    default:
        temp_a2 = M2C_FIELD(arg0, u8 *, 0x51);
        var_a1 = ((s32) (temp_a2 + 5 + arg1) % 5) + (temp_a2 - ((s32) temp_a2 % 5));
block_27:
        func_008C5E20((s32) var_a3, var_a1 & 0xFF, (s32) var_a3);
        return 1;
    case 1:
    case 3:
    case 0:
        return 0;
    }
}
