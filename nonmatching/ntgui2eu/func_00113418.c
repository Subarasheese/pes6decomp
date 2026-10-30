/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00113770(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00113830(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00114940(s32);                         /* extern */
M2C_UNK func_00114BC0(void *, s32);                 /* extern */

void func_00113418(void *arg0, s32 arg1) {
    s32 temp_a1;
    u8 temp_v0;
    u8 var_v0;

    temp_a1 = arg1 & 0xFF;
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x52);
    if (temp_a1 == 0) {
        var_v0 = (temp_v0 | 1) & 0x7F;
    } else {
        var_v0 = temp_v0 ^ 0x81;
    }
    M2C_FIELD(arg0, u8 *, 0x52) = var_v0;
    func_00114940(temp_a1);
    func_00114BC0(arg0, M2C_FIELD(arg0, s32 *, 0x54));
    if (M2C_FIELD(arg0, u8 *, 0x52) & 1 & 0xFF) {
        func_00113770(arg0, 2, 2);
        func_00113770(arg0, 3, 2);
        return;
    }
    func_00113830(arg0, 2, 2);
    func_00113830(arg0, 3, 2);
}
