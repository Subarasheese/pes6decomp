/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00151EA0(s32);                             /* extern */
extern s32 *D_00520098;

s32 func_00189060(void *arg0) {
    s32 temp_v0;
    void *temp_v1;

    if (D_00520098 != NULL) {
        temp_v0 = *D_00520098;
        if (temp_v0 != 0) {
            temp_v1 = ((func_00151EA0(temp_v0 & 0xFFFF) & 0xFFFF) * 0xC) + D_00520098;
            M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(temp_v1, f32 *, 4);
            M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(temp_v1, f32 *, 8);
            M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(temp_v1, f32 *, 0xC);
            return 1;
        }
    }
    return 0;
}
