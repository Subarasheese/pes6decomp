/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s8 func_00151EA0(M2C_UNK);                          /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */

void *func_009A9990(s32 arg0, s32 *arg1) {
    void *temp_v0;

    temp_v0 = func_0099C7E0(0x3C4);
    if (temp_v0 == NULL) {
        return NULL;
    }
    M2C_FIELD(temp_v0, s8 *, 0x378) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x370) = arg0;
    M2C_FIELD(temp_v0, s32 *, 0x374) = (s32) *arg1;
    M2C_FIELD(temp_v0, s32 *, 0x37C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x380) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x3A0) = -1;
    M2C_FIELD(temp_v0, s32 *, 0x3A4) = -1;
    M2C_FIELD(temp_v0, s8 *, 0x3AC) = func_00151EA0(0x3B);
    return temp_v0;
}
