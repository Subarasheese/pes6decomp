/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001DF7B0(s32);                         /* extern */

void func_00AEDE30(void *arg0) {
    if (arg0 != NULL) {
        func_001DF7B0(M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(arg0, s32 *, 8) = 0;
        if (M2C_FIELD(arg0, u8 *, 0xC) & 1) {
            func_00153FA0(arg0);
        }
    }
}
