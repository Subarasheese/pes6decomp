/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001C8590(void *, s32, M2C_UNK);        /* extern */
s32 func_008407A0(s32);                             /* extern */
s32 func_00840970(s32);                             /* extern */
s32 func_00841940(s32);                             /* extern */

s32 func_00805EB0(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    if (arg0 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    func_001C48E8(arg0 + 8, 0, 0x31);
    func_001C48E8(arg0 + 0x39, 0, 0x31);
    if (arg1 != 0) {
        temp_v0 = func_00841940(M2C_FIELD(arg0, s32 *, 4));
        temp_v0_2 = func_00840970(temp_v0);
        if (temp_v0_2 != 0) {
            func_001C8590(arg0 + 8, temp_v0_2, 0x30);
        }
        temp_v0_3 = func_008407A0(temp_v0);
        if (temp_v0_3 != 0) {
            func_001C8590(arg0 + 0x39, temp_v0_3, 0x30);
        }
    }
    return 1;
}
