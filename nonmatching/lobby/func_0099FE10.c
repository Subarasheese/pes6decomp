/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C8590(void *, M2C_UNK);             /* extern */

s32 func_0099FE10(void *arg0, s8 *arg1) {
    if (arg0 == NULL) {
        return 1;
    }
    M2C_FIELD(arg0, s8 *, 0x100) = 1;
    if (arg1 == NULL) {
        if (arg0 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0) != 2) {
                M2C_FIELD(arg0, s8 *, 0x100) = 1;
            }
            M2C_FIELD(arg0, s32 *, 0) = 2;
            return 0;
        }
        goto block_17;
    }
    if (*arg1 == 0) {
        if (arg0 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0) != 2) {
                M2C_FIELD(arg0, s8 *, 0x100) = 1;
            }
            M2C_FIELD(arg0, s32 *, 0) = 2;
            return 0;
        }
        goto block_17;
    }
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) != 1) {
            M2C_FIELD(arg0, s8 *, 0x100) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0) = 1;
    }
    func_001C8590(arg0 + 0x54, 0x93);
block_17:
    return 0;
}
