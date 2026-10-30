/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00158A80(void *, s32);
extern void func_00158AD0(void *, s32);
extern void func_00158B28(void *, s32);
void func_00158B80(void *arg0) {
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_a6_2;
    s32 temp_a6_3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_t0;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_v1;
    s32 var_a7;
    void *temp_a1;

    temp_a1 = arg0 + 0x48;
    temp_t2 = M2C_FIELD(temp_a1, s32 *, 8);
    temp_t3 = M2C_FIELD(temp_a1, s32 *, 0x18);
    temp_lo = (s32) M2C_FIELD(temp_a1, s32 *, 4) / temp_t2;
    temp_a4 = M2C_FIELD(temp_a1, s32 *, 0x20);
    temp_a5 = M2C_FIELD(temp_a1, s32 *, 0x10);
    temp_a3 = M2C_FIELD(temp_a1, s32 *, 0x28);
    temp_v1 = (temp_a3 + temp_a5) - 1;
    temp_t0 = M2C_FIELD(temp_a1, s32 *, 0x24);
    temp_lo_2 = temp_v1 / temp_a5;
    var_a7 = (s32) (((temp_t3 - temp_a4) + temp_a5) - 1) / temp_a5;
    temp_a1_2 = (temp_a5 - (temp_v1 % temp_a5)) - 1;
    if (temp_lo_2 < var_a7) {
        var_a7 += ((temp_a4 + (var_a7 * temp_a5)) - temp_a1_2) < temp_t3;
    }
    temp_lo_3 = (s32) (((temp_a3 < temp_t0) * temp_a1_2) + temp_t0) / temp_a5;
    temp_a6 = (temp_lo_3 < temp_lo) ? temp_lo_3 : temp_lo;
    temp_a6_2 = (temp_lo_2 < temp_a6) ? temp_lo_2 : temp_a6;
    temp_a6_3 = (var_a7 < temp_a6_2) ? var_a7 : temp_a6_2;
    if (temp_t2 == 2) {
        func_00158AD0(arg0, temp_a6_3);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xE8) != 0) {
        func_00158B28(arg0, temp_a6_3);
        return;
    }
    func_00158A80(arg0, temp_a6_3);
}
