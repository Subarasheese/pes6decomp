/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00180B40(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    s32 var_a7;

    var_a7 = M2C_FIELD(arg0, s32 *, 0x5EB0);
    var_a5 = M2C_FIELD(arg0, s32 *, 0x5EB4);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x5ED0) * 3;
    temp_t1 = M2C_FIELD(arg0, s32 *, 0x5AC);
    temp_a1 = (var_a7 + var_a5) * 2;
    temp_t2 = M2C_FIELD(arg0, s32 *, 0x5B0);
    temp_t0 = (s32) ((temp_v0 > -1) ? temp_v0 : (temp_v0 + 3)) >> 2;
    var_a4 = M2C_FIELD(arg0, s32 *, 0x5EB8);
    var_a3 = M2C_FIELD(arg0, s32 *, 0x5EBC);
    if (temp_t1 < temp_a1) {
        temp_lo = (s32) (var_a5 * temp_t1) / (s32) ((var_a7 + var_a5) * 2);
        var_a7 = (s32) (var_a7 * temp_t1) / temp_a1;
        var_a5 = temp_lo;
    }
    temp_a1_2 = (var_a4 + var_a3) * 2;
    if (temp_t2 < temp_a1_2) {
        temp_lo_2 = (s32) (var_a3 * temp_t2) / (s32) ((var_a4 + var_a3) * 2);
        var_a4 = (s32) (var_a4 * temp_t2) / temp_a1_2;
        var_a3 = temp_lo_2;
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_a0;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_a0;
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (((temp_v1 + temp_t2) - var_a3) + temp_t0);
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) ((temp_v0_2 + var_a7) - temp_t0);
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) ((temp_v1 + var_a4) - temp_t0);
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) (((temp_v0_2 + temp_t1) - var_a5) + temp_t0);
}
