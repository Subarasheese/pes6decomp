/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C8590(s32, M2C_UNK);                /* extern */

s32 func_009BCB90(void *arg0, s8 *arg1) {
    if (arg0 == NULL) {
        return 1;
    }
    if (arg1 != NULL) {
        if (*arg1 != 0) {
            func_001C8590(arg0 + 0x148, 0x93);
            if (arg0 != NULL) {
                if (M2C_FIELD(arg0, s32 *, 0) != 1) {
                    M2C_FIELD(arg0, s8 *, 0x1E8) = 1;
                }
                M2C_FIELD(arg0, s32 *, 0) = 1;
            }
            M2C_FIELD(arg0, s8 *, 0x1E8) = 1;
            return 0;
        }
        if (arg0 == NULL) {
            return 0;
        }
        if (M2C_FIELD(arg0, s32 *, 0) != 2) {
            M2C_FIELD(arg0, s8 *, 0x1E8) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0) = 2;
        return 0;
    }
    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0) != 2) {
        M2C_FIELD(arg0, s8 *, 0x1E8) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0) = 2;
    return 0;
}
