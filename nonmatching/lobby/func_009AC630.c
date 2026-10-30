/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0099C7E0(M2C_UNK);                       /* extern */

void *func_009AC630(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_0099C7E0(0xA4);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 0x74) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x6C) = arg0;
        M2C_FIELD(temp_v0, s32 *, 0x70) = arg1;
        M2C_FIELD(temp_v0, s8 *, 0x8C) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x8E) = 0xFFFF;
        M2C_FIELD(temp_v0, s16 *, 0x90) = 0xFFFF;
        M2C_FIELD(temp_v0, s16 *, 0x92) = 0xFFFF;
        M2C_FIELD(temp_v0, s32 *, 0x94) = 1;
        M2C_FIELD(temp_v0, s32 *, 0x9C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0xA0) = 0;
        return temp_v0;
    }
    return NULL;
}
