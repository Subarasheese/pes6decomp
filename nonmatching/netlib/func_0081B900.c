/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_001C80F0(s32);                             /* extern */
M2C_UNK func_001C8590(void *, s32, M2C_UNK);        /* extern */

s32 func_0081B900(s32 arg0, s32 arg1, s32 arg2) {
    void *var_s1;

    if (arg0 == 0) {
        var_s1 = NULL;
    } else if (arg1 < 0) {
        var_s1 = NULL;
    } else if (arg1 < 4) {
        var_s1 = arg0 + (arg1 * 0x34) + 0x209;
    } else {
        var_s1 = NULL;
    }
    if (var_s1 != NULL) {
        func_001C48E8(var_s1, 0, 0x31);
        if ((arg2 != 0) && (func_001C80F0(arg2) != 0)) {
            func_001C8590(var_s1, arg2, 0x30);
            M2C_FIELD(var_s1, s8 *, 0x30) = 0;
        }
        return 1;
    }
    return 0;
}
