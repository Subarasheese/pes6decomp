/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_00B044D0(s32 arg0, s32 arg1) {
    s32 temp_a1;
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        temp_a1 = arg1 & 0xFFFF;
        if (temp_a1 < 0x11F5) {
            return (arg0 & 0xFF) == ((u64) ((s64) M2C_FIELD((temp_v0 + (temp_a1 * 0x1C)), u16 *, 0x1163E) << 0x32) >> 0x38);
        }
        return 0;
    }
    return 0;
}
