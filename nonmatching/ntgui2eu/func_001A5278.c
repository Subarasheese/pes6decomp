/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */
M2C_UNK func_001A5018(s32);                         /* extern */
M2C_UNK func_001A5388(s32);                         /* extern */
s32 func_001A5880();                                /* extern */

s32 func_001A5278(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_s0 = func_001A4728();
    temp_v0 = *(s32 *)0x10001010;
    if (temp_v0 & 0x80) {
        var_v0 = 1;
        if (temp_s0 != 0) {
            func_001A4778();
            return 1;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_v0;
    }
    func_001A5018((temp_v0 & 0xFFFFF3FF) | 0x80);
    func_001A5388(func_001A5880());
    var_v0 = 0;
    if (temp_s0 != 0) {
        func_001A4778();
        var_v0 = 0;
    }
    return var_v0;
}
