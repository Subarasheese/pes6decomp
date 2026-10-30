/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00113770(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00113830(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00114940();                            /* extern */
M2C_UNK func_00114BC0(void *, s32);                 /* extern */
M2C_UNK func_001169EC(M2C_UNK);                     /* extern */

void func_0011354C(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x52) = (u8) (M2C_FIELD(arg0, u8 *, 0x52) ^ 2);
    func_00114940();
    func_00114BC0(arg0, M2C_FIELD(arg0, s32 *, 0x54));
    if (M2C_FIELD(arg0, u8 *, 0x52) & 2) {
        func_00113770(arg0, 1, 2);
    } else {
        func_00113830(arg0, 1, 2);
    }
    func_001169EC(0xB);
}
