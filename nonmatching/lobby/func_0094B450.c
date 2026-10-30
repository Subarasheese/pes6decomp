/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
M2C_UNK func_0082C920(M2C_UNK);                     /* extern */
s32 func_00836E20();                                /* extern */
s32 func_0094B160(s32, s32);                        /* extern */

s32 func_0094B450(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_00836E20();
    if (func_0082C2A0() != 0) {
        return func_0094B160(temp_s0, arg0);
    }
    func_0082C920(0x6C);
    func_0082C840(0x7B);
    func_0082C690(0x7B, 0);
    return 2;
}
