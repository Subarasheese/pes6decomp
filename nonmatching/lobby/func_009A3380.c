/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0099C7E0(M2C_UNK);                       /* extern */

void *func_009A3380(s32 arg0, s8 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    void *temp_v0;

    temp_v0 = func_0099C7E0(0x318);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 0x2F8) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x2F9) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0x2F0) = arg0;
        M2C_FIELD(temp_v0, s32 *, 0x2F4) = (s32) *arg2;
        M2C_FIELD(temp_v0, s32 *, 0x314) = (s32) *arg5;
        if (arg3 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 0x2FC) = (s32) *arg3;
        } else {
            M2C_FIELD(temp_v0, s32 *, 0x2FC) = 0;
        }
        if (arg4 == NULL) {
            M2C_FIELD(temp_v0, s32 *, 0x300) = 0;
            return temp_v0;
        }
        M2C_FIELD(temp_v0, s32 *, 0x300) = (s32) *arg4;
        return temp_v0;
    }
    return NULL;
}
