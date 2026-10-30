/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016D5C0(M2C_UNK);                     /* extern */
s32 func_0016D7A0(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_00170920(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_v0;

    func_0016D5C0(0x4700);
    temp_s0 = func_0016D7A0(arg0, 0, 0);
    func_0016D5C0(0x4701);
    var_v0 = 0;
    if (temp_s0 >= 0) {
        func_0016D5C0(0x4800);
        temp_s0_2 = func_0016D7A0(arg0, 0, 2);
        func_0016D5C0(0x4801);
        var_v0 = (temp_s0_2 >= 0) ? temp_s0_2 : 0;
    }
    return var_v0;
}
