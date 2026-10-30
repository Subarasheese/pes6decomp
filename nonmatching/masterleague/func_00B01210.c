/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_00B01210(s32 arg0) {
    u8 temp_v0_2;
    u8 temp_v1;
    void *temp_a0;
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        temp_a0 = (arg0 & 0xFF) + temp_v0;
        temp_v1 = M2C_FIELD(temp_a0, u8 *, 0xCE2E);
        if (temp_v1 != 0xFF) {
            temp_v0_2 = M2C_FIELD(temp_a0, u8 *, 0xCE22);
            if ((s32) temp_v0_2 >= (s32) temp_v1) {
                if ((s32) temp_v1 >= (s32) temp_v0_2) {
                    return 0;
                }
                return 2;
            }
            return 1;
        }
        return 0;
    }
    return 0xFF;
}
