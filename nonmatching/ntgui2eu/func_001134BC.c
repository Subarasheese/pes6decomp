/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00113830(void *, s32, s32);
M2C_UNK func_00114940(void *);                      /* extern */
M2C_UNK func_00114BC0(void *, s32);                 /* extern */

void func_001134BC(void *arg0, s32 arg1) {
    u8 temp_v1;
    u8 var_v0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x52);
    if (!(arg1 & 0xFF)) {
        if (!(temp_v1 & 0x80)) {
            var_v0 = temp_v1 & 0x7E;
            goto block_4;
        }
    } else {
        var_v0 = temp_v1 & 0x7E;
        if (temp_v1 & 0x80) {
block_4:
            M2C_FIELD(arg0, u8 *, 0x52) = var_v0;
        }
    }
    if (!(M2C_FIELD(arg0, u8 *, 0x52) & 1 & 0xFF)) {
        func_00113830(arg0, 2, 2);
        func_00113830(arg0, 3, 2);
    }
    func_00114940(arg0);
    func_00114BC0(arg0, M2C_FIELD(arg0, s32 *, 0x54));
}
