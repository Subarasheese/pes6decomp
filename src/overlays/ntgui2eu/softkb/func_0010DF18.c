/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

s32 func_0010DF18(void *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 temp_a4;
    s32 temp_v0;
    s32 var_a1;
    u8 temp_v1;

    temp_a4 = (s32) M2C_FIELD(arg0, u16 *, 0x14) >> arg1;
    temp_v0 = (s32) M2C_FIELD(arg0, u16 *, 0x16) >> arg1;
    if (arg2 != NULL) {
        *arg2 = temp_a4;
    }
    if (arg3 != NULL) {
        *arg3 = temp_v0;
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x13);
    var_a1 = temp_a4 * temp_v0;
    switch (temp_v1) {
    case 5:
        break;
    case 1:
        var_a1 *= 2;
        break;
    case 2:
        var_a1 *= 3;
        break;
    case 3:
        var_a1 *= 4;
        break;
    case 4:
        var_a1 = var_a1 / 2;
        break;
    }
    return (var_a1 + 0xF) & ~0xF;
}
