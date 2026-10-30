/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00333FC0(void *arg0, void *arg1, s32 arg2, s16 arg3) {
    s32 temp_v1;
    void *temp_a2;

    temp_a2 = ((arg2 & 0xFF) * 4) + arg0;
    temp_v1 = M2C_FIELD(temp_a2, s32 *, 0x10);
    switch (temp_v1) {                              /* irregular */
    case 16:
        if (M2C_FIELD(temp_a2, s32 *, 0) != 0xF) {
            M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0);
            M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg1, s16 *, 2);
block_10:
            M2C_FIELD(arg0, s16 *, 0x42) = arg3;
        }
        break;
    case 15:
        M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0);
        M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg1, s16 *, 2);
        goto block_10;
    }
    return 1;
}
