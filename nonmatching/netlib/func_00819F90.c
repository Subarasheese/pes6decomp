/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00819F90(void *arg0, s32 arg1) {
    void *temp_v1;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 >= 2) {
        return 0;
    }
    if (arg0 != NULL) {
        temp_v1 = arg0 + (arg1 * 8);
        if ((temp_v1 + 0x20) != 0) {
            M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(temp_v1, f32 *, 0x20);
            M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(temp_v1, f32 *, 0x24);
            M2C_FIELD(arg0, s8 *, 0x47) = 1;
        }
    }
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(((arg1 * 4) + arg0), f32 *, 0x30);
        M2C_FIELD(arg0, s8 *, 0x47) = 1;
    }
    M2C_FIELD(arg0, s8 *, 0x47) = 1;
    return 1;
}
