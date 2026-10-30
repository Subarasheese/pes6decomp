/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00259C10(void *, void *);
M2C_UNK func_001C4730(s16 *, s32, M2C_UNK, s16, s16, s16); /* extern */

s32 func_00BB6630(void *arg0) {
    s16 sp28;
    s16 sp2A;
    s16 sp2C;
    s16 sp2E;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a3;
    s16 temp_a4;
    s16 temp_a5;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s64 temp_a0;
    s64 temp_a0_2;
    s64 temp_a0_3;
    s64 temp_a2_3;
    s64 temp_a3_2;
    s64 temp_v1;

    func_00259C10(&sp28, &sp2C);
    temp_a4 = sp2C;
    temp_a5 = M2C_FIELD(arg0, s16 *, 0x74);
    temp_a3 = temp_a5 + (temp_a4 - sp28);
    sp2C = temp_a3;
    sp2E = M2C_FIELD(arg0, s16 *, 0x76) + (sp2E - sp2A);
    func_001C4730(&sp28, arg0 + 0x74, 4, temp_a3, temp_a4, temp_a5);
    temp_a2 = M2C_FIELD(arg0, s16 *, 0x78);
    temp_a0 = sp28 + temp_a2;
    sp28 = (s16) temp_a0;
    temp_a0_2 = sp2C + temp_a2;
    temp_a2_2 = M2C_FIELD(arg0, s16 *, 0x7A);
    temp_a3_2 = (s64) (temp_a0 << 0x30) >> 0x30;
    sp2C = (s16) temp_a0_2;
    temp_a0_3 = sp2A + temp_a2_2;
    temp_v1 = sp2E + temp_a2_2;
    sp2A = (s16) temp_a0_3;
    sp2E = (s16) temp_v1;
    temp_a2_3 = (s64) (temp_a0_3 << 0x30) >> 0x30;
    temp_v1_2 = M2C_FIELD(arg0, s16 *, 0x70);
    if ((temp_v1_2 >= temp_a3_2) && (temp_v1_2 < (temp_a3_2 + ((s64) (((s64) (((((s64) (temp_a0_2 << 0x30) >> 0x30) - temp_a3_2) + 1) << 0x30) >> 0x30) << 0x30) >> 0x30)))) {
        temp_v1_3 = M2C_FIELD(arg0, s16 *, 0x72);
        if ((temp_v1_3 >= temp_a2_3) && (temp_v1_3 < (temp_a2_3 + ((s64) (((s64) (((((s64) (temp_v1 << 0x30) >> 0x30) - temp_a2_3) + 1) << 0x30) >> 0x30) << 0x30) >> 0x30)))) {
            return 1;
        }
    }
    return 0;
}
