/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008BE9B0(void *, s32);                 /* extern */
M2C_UNK func_008BEB40(void *, M2C_UNK, s32);        /* extern */

void func_008BEAA0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a2;
    u8 temp_a1;
    u8 temp_v1;
    void *temp_v0;

    var_a2 = arg2;
    temp_a1 = M2C_FIELD(arg0, u8 *, 0x771);
    if (M2C_FIELD((temp_a1 + arg0), u8 *, 0x193) != 0) {
        var_a2 = 0xC;
loop_2:
        temp_v0 = arg0 + var_a2;
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x766);
        if (M2C_FIELD((arg0 + temp_v1), u8 *, 0x193) != 0) {
            var_a2 += 1;
            if (var_a2 >= 0x20) {

            } else {
                goto loop_2;
            }
        } else {
            M2C_FIELD(arg0, u8 *, 0x771) = temp_v1;
            M2C_FIELD(temp_v0, u8 *, 0x766) = temp_a1;
        }
    }
    func_008BEB40(arg0, 0xB, var_a2);
    func_008BE9B0(arg0, arg1);
}
