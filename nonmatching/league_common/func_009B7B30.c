/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225820();                                /* extern */
s32 func_00984AD0(M2C_UNK, s32);                    /* extern */
s32 func_0099B6E0(M2C_UNK, s32);                    /* extern */

s32 func_009B7B30(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_00225820() & 0xFF;
    if (func_0099B6E0(1, arg0) == 1) {
        if (func_00984AD0(1, temp_s0) == 1) {
            return 1;
        }
        goto block_4;
    }
block_4:
    if (((func_0099B6E0(3, arg0) == 1) && (func_00984AD0(3, temp_s0) == 1)) || ((func_0099B6E0(6, arg0) == 1) && (func_00984AD0(6, temp_s0) == 1)) || ((func_0099B6E0(7, arg0) == 1) && (func_00984AD0(7, temp_s0) == 1)) || ((func_0099B6E0(8, arg0) == 1) && (func_00984AD0(8, temp_s0) == 1)) || ((func_0099B6E0(9, arg0) == 1) && (func_00984AD0(9, temp_s0) == 1))) {
        return 1;
    }
    return 0;
}
