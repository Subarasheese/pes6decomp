/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008D7030(s32, s32, u8 *);              /* extern */
M2C_UNK func_008D7630(s32, void *);                 /* extern */
M2C_UNK func_008D7C70(s32, void *, u8 *, void *, s32 *); /* extern */

void func_008E0870(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s32 sp40;
    u8 sp70;
    u8 sp80;
    s32 *var_a2;
    s32 var_a4;
    u8 *var_a0;
    u8 *var_a3;
    u8 temp_v0;
    void *temp_v0_2;

    var_a4 = 0;
    var_a2 = &sp40;
    var_a3 = &sp80;
    var_a0 = &sp70;
    do {
        temp_v0 = M2C_FIELD((arg3 + var_a4), u8 *, 0x28);
        *var_a3 = M2C_FIELD((arg1 + temp_v0), u8 *, 0x33);
        *var_a2 = M2C_FIELD((arg1 + (temp_v0 * 4)), s32 *, 0x254);
        if (arg2 != 0) {
            *var_a0 = M2C_FIELD((arg2 + M2C_FIELD((arg2 + var_a4), u8 *, 0x766)), u8 *, 0x33);
        }
        var_a4 += 1;
        var_a3 += 1;
        var_a2 += 4;
        var_a0 += 1;
    } while (var_a4 < 0xB);
    temp_v0_2 = arg3 + (*arg3 * 0x52);
    func_008D7C70(arg0 + 0x13C, temp_v0_2 + 0x98, &sp80, temp_v0_2 + 0xCD, &sp40);
    if (arg2 != 0) {
        func_008D7030(arg0 + 0x13C, arg2 + 0x7D6, &sp70);
        func_008D7630(arg0 + 0x13C, arg3 + (*arg3 * 0x52) + 0xD8);
    }
}
