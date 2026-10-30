/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008ECB20[];

void func_008BB2A0(void *arg0, s32 arg1, s32 arg2) {
    void *temp_a3;

    temp_a3 = ((void *)D_008ECB20) + (((s32) (arg1 + ((arg2 & 0xFF) * 4)) % 8) * 8);
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(temp_a3, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(temp_a3, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(temp_a3, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(temp_a3, s16 *, 6);
}
