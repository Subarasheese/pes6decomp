/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0017D4E0(void *arg0) {
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1260);
    temp_t1 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_a3 = temp_v0 * 6;
    temp_v1 = temp_v0 * 3;
    temp_a6 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_t1;
    temp_a5 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_t1;
    temp_a2 = (s32) ((temp_v1 > -1) ? temp_v1 : (temp_v1 + 3)) >> 2;
    temp_v0_2 = (s32) ((temp_a3 > -1) ? temp_a3 : (temp_a3 + 3)) >> 2;
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (temp_a6 + M2C_FIELD(arg0, s32 *, 0x5B0) + temp_v0_2);
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (temp_a5 - temp_a2);
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) (temp_a6 - temp_a2);
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) (temp_a5 + M2C_FIELD(arg0, s32 *, 0x5AC) + temp_v0_2);
}
