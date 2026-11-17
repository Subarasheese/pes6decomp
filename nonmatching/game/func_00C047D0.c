/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CB52A0[];

void func_00C047D0(void) {
    u8 *var_a0;
    s32 temp_v1;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = (u8 *)D_00CB52A0;
    do {
        if (M2C_FIELD(var_a0, s32 *, 0x43C) != 0) {
            temp_v1 = M2C_FIELD(var_a0, s32 *, 0x448);
            if (temp_v1 != 0) {
                M2C_FIELD(var_a0, s32 *, 0x448) = (s32) (temp_v1 - 1);
            }
            M2C_FIELD(var_a0, s32 *, 0x44C) = (s32) (M2C_FIELD(var_a0, s32 *, 0x44C) + 1);
        }
        var_a1 += 1;
        var_a0 += 0x40;
    } while (var_a1 < 0xA);
}
