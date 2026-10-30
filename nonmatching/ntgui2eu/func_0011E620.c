/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0011E620(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8) {
    s32 *var_a1;
    s32 *var_v0;
    s32 var_t0;
    s32 var_t0_2;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    var_t0 = 4;
    M2C_FIELD(arg0, s32 *, 0x10) = arg5;
    var_a1 = arg0 + 0x54;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (arg6 * 0x10);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (arg7 * 0x10);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (arg_sp0 * 0x10);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (arg_sp8 * 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    do {
        *var_a1 = 0;
        var_t0 -= 1;
        var_a1 -= 4;
    } while (var_t0 >= 0);
    var_v0 = arg0 + 0x80 + 0x24;
    var_t0_2 = 9;
    do {
        *var_v0 = 0;
        var_t0_2 -= 1;
        var_v0 -= 4;
    } while (var_t0_2 >= 0);
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
}
