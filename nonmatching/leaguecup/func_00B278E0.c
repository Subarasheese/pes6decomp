/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229310(void);
extern void *D_003EAD94;

s32 func_00B278E0(void) {
    u8 temp_a0;

    func_00229310();
    if (D_003EAD94 != NULL) {
        temp_a0 = M2C_FIELD(D_003EAD94, u8 *, 0xD9C);
        if (temp_a0 == 1) {
            if (M2C_FIELD(D_003EAD94, u8 *, 0xD7C) == 1) {
                return 1;
            }
            goto block_8;
        }
block_8:
        if ((temp_a0 == 2) && (M2C_FIELD(D_003EAD94, u8 *, 0xD7C) == 2)) {
            return 1;
        }
        goto block_11;
    }
block_11:
    return 0;
}
