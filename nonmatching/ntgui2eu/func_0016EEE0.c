/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016EEE0(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_a7;
    void *temp_a4;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_a4 = arg0 + 0x910;
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x924);
    temp_a7 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_a1;
    M2C_FIELD(arg0, s32 *, 0x910) = 0;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_a1;
    switch (temp_a3) {                              /* irregular */
    case 1:
        M2C_FIELD(temp_a4, s32 *, 4) = (s32) (temp_a7 + ((s32) M2C_FIELD(arg0, s32 *, 0x5AC) >> 1));
        M2C_FIELD(temp_a4, s32 *, 8) = (s32) (temp_a0 + ((s32) M2C_FIELD(arg0, s32 *, 0x5B0) >> 1));
        /* fallthrough */
    case 0:
    case 2:
        M2C_FIELD(temp_a4, s32 *, 8) = temp_a0;
        M2C_FIELD(temp_a4, s32 *, 4) = temp_a7;
        return;
    }
}
