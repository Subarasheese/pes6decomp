/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_0023A060();                                /* extern */
s32 func_0023A0C0();                                /* extern */
s32 func_0023A3E0();                                /* extern */
M2C_UNK func_002D4970(M2C_UNK);                     /* extern */
M2C_UNK func_00305E50(s32);                         /* extern */
s8 func_008FF980(void);                                /* extern */
s8 func_008FF9B0(void);                                /* extern */
s8 func_008FFA10(void);                                /* extern */

s32 func_002FDAD0(s32 arg0) {
    M2C_UNK var_s0;

    if (((func_0023A0C0() & 0xFF) == 1) || ((func_0023A060() & 0xFF) == 1)) {
        func_00305E50(arg0);
    }
    if ((func_0023A3E0() & 0xFF) == 0) {
        var_s0 = 0x58;
    } else {
        var_s0 = 0x5C;
    }
    if ((func_008FFA10()) == 1) {
        if ((func_0023A3E0() & 0xFF) == 0) {
            var_s0 = 0x59;
        } else {
            var_s0 = 0x5D;
        }
    }
    if ((func_008FF9B0()) == 1) {
        if ((func_0023A3E0() & 0xFF) == 0) {
            var_s0 = 0x5A;
        } else {
            var_s0 = 0x5E;
        }
    }
    if ((func_008FF980()) == 1) {
        if ((func_0023A3E0() & 0xFF) == 0) {
            var_s0 = 0x5B;
        } else {
            var_s0 = 0x5F;
        }
    }
    func_002D4970(var_s0);
    return 1;
}
