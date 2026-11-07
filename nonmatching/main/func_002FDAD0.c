/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0023A060();                                /* extern */
s32 func_0023A0C0();                                /* extern */
s32 func_0023A3E0();                                /* extern */
M2C_UNK func_002D4970(M2C_UNK);                     /* extern */
M2C_UNK func_00305E50(s32);                         /* extern */
s64 func_008FF980();                                /* extern */
s64 func_008FF9B0();                                /* extern */
s64 func_008FFA10();                                /* extern */

s32 func_002FDAD0(s32 arg0) {
    M2C_UNK var_s0;

    if (((func_0023A0C0() & 0xFF) == 1) || ((func_0023A060() & 0xFF) == 1)) {
        func_00305E50(arg0);
    }
    if (func_0023A3E0() & 0xFF) {
        var_s0 = 0x5C;
    } else {
        var_s0 = 0x58;
    }
    if (((s64) (func_008FFA10() << 0x38) >> 0x38) == 1) {
        if (func_0023A3E0() & 0xFF) {
            var_s0 = 0x5D;
        } else {
            var_s0 = 0x59;
        }
    }
    if (((s64) (func_008FF9B0() << 0x38) >> 0x38) == 1) {
        if (func_0023A3E0() & 0xFF) {
            var_s0 = 0x5E;
        } else {
            var_s0 = 0x5A;
        }
    }
    if (((s64) (func_008FF980() << 0x38) >> 0x38) == 1) {
        if (func_0023A3E0() & 0xFF) {
            var_s0 = 0x5F;
        } else {
            var_s0 = 0x5B;
        }
    }
    func_002D4970(var_s0);
    return 1;
}
