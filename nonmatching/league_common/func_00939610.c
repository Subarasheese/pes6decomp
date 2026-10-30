/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
s32 func_00246550(M2C_UNK);                         /* extern */

void func_00939610(void) {
    s32 var_s1;
    u8 temp_a0;
    void *temp_v0;

    temp_v0 = func_0022F150();
    if (temp_v0 != NULL) {
        var_s1 = 0;
        do {
            if (func_00246550(0xA4) == 1) {
                temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x580);
                M2C_FIELD(temp_v0, u8 *, 0x580) = (u8) ((temp_a0 & ~0x80) | (((((u64) ((s64) temp_a0 << 0x38) >> 0x3F) | ((1 << var_s1) & 0xFF)) & 1) << 7));
            }
            var_s1 += 1;
        } while (var_s1 < 5);
    }
}
