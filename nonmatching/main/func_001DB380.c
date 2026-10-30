/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_001DB750(s32, s32, s32);                 /* extern */

void *func_001DB380(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    if (arg0 == NULL) {
        return NULL;
    }
    temp_v0 = func_001DB750(arg1, arg2, arg3);
    M2C_FIELD(temp_v0, void **, 8) = arg0;
    if (M2C_FIELD(arg0, void **, 0) == NULL) {
        M2C_FIELD(arg0, void **, 0) = temp_v0;
        M2C_FIELD(temp_v0, void **, 0) = NULL;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4) = temp_v0;
        M2C_FIELD(temp_v0, void **, 0) = (void *) M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(arg0, void **, 4) = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) + 1);
    M2C_FIELD(arg0, u8 *, 0x2F) = (u8) (M2C_FIELD(arg0, u8 *, 0x2F) | 2);
    return temp_v0;
}
