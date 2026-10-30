/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0099C7E0(M2C_UNK);                       /* extern */

void *func_009A2370(s32 arg0, s32 arg1, s8 arg2, s8 arg3, s32 arg4, s32 *arg5, s32 *arg6, s32 arg7) {
    s32 var_v1;
    void *temp_v0;

    temp_v0 = func_0099C7E0(0xAC);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 0x90) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x92) = arg2;
        M2C_FIELD(temp_v0, s8 *, 0x91) = arg3;
        M2C_FIELD(temp_v0, s32 *, 0x94) = arg4;
        M2C_FIELD(temp_v0, s32 *, 0x88) = arg0;
        M2C_FIELD(temp_v0, s32 *, 0x8C) = arg1;
        if (arg5 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 0x98) = (s32) *arg5;
        } else {
            M2C_FIELD(temp_v0, s32 *, 0x98) = 0;
        }
        if (arg6 == NULL) {
            var_v1 = 1;
        } else {
            var_v1 = *arg6;
        }
        M2C_FIELD(temp_v0, s32 *, 0x9C) = var_v1;
        M2C_FIELD(temp_v0, s32 *, 0xA8) = arg7;
        return temp_v0;
    }
    return NULL;
}
