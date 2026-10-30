/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0036D3F0(void *, void *, void *);      /* extern */
M2C_UNK func_0036D8F0(void *, void *, void *);      /* extern */
s32 func_008BF0E0(s32);                             /* extern */

void func_0036D310(void *arg0, void *arg1, void *arg2) {
    s32 var_a0;
    void *var_v1;

    var_a0 = 0;
    var_v1 = arg2;
    do {
        M2C_FIELD(var_v1, s32 *, 0) = 0;
        var_a0 += 7;
        M2C_FIELD(var_v1, s32 *, 4) = 0;
        M2C_FIELD(var_v1, s32 *, 8) = 0;
        M2C_FIELD(var_v1, s32 *, 0xC) = 0;
        M2C_FIELD(var_v1, s32 *, 0x10) = 0;
        M2C_FIELD(var_v1, s32 *, 0x14) = 0;
        M2C_FIELD(var_v1, s32 *, 0x18) = 0;
        var_v1 += 0x1C;
    } while (var_a0 < 0xE);
    if (M2C_FIELD(arg1, u8 *, 8) == 0) {
        if (M2C_FIELD(arg1, u8 *, 9) != 0) {
            M2C_FIELD(arg2, s32 *, 0x24) = 0x011D0020;
        }
    } else {
        M2C_FIELD(arg2, s32 *, 0x20) = 0x011D001F;
    }
    if (func_008BF0E0(var_a0) == 0) {
        if (M2C_FIELD(arg0, u8 *, 0x946) == 0) {
            func_0036D3F0(arg0, arg1, arg2);
            return;
        }
        goto block_12;
    }
block_12:
    func_0036D8F0(arg0, arg1, arg2);
}
