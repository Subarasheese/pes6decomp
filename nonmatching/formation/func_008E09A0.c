/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008E1BA0(s32, s32, s32);               /* extern */
M2C_UNK func_008E1C30(s32, M2C_UNK);                /* extern */

void func_008E09A0(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    if (!(arg2 & 0xFF)) {
        temp_v0 = (arg1 & 0xFF) + arg0;
        if (M2C_FIELD(temp_v0, u8 *, 9) != 0) {
            M2C_FIELD(temp_v0, u8 *, 9) = 0U;
            func_008E1C30(arg0 + 0x18, 0);
        }
    }
    func_008E1BA0(arg0 + 0x18, arg1, arg2);
}
