/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00158D28(s32, s32, s32, s32);
extern int func_0016A168(void *);
M2C_UNK ADXB_CopyExtraBufSte(s32, s32, s32, s32);          /* extern */

void func_00158D48(void *arg0) {
    s32 sp0;
    s32 temp_fp;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_s5_3;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_s4;

    temp_s4 = arg0 + 0x48;
    temp_s1 = M2C_FIELD(temp_s4, s32 *, 0x10);
    temp_s2 = (M2C_FIELD(temp_s4, s32 *, 0x28) + temp_s1) - 1;
    temp_s7 = M2C_FIELD(arg0, s32 *, 0x40);
    temp_fp = M2C_FIELD(temp_s4, s32 *, 0x14);
    sp0 = M2C_FIELD(arg0, s32 *, 0x44);
    temp_s3 = M2C_FIELD(temp_s4, s32 *, 0xC);
    temp_s0 = temp_s2 % temp_s1;
    temp_s2_2 = temp_s2 / temp_s1;
    temp_s5 = M2C_FIELD(temp_s4, s32 *, 0x20);
    temp_v0 = func_0016A168(M2C_FIELD(arg0, void **, 8));
    temp_v1 = M2C_FIELD(temp_s4, s32 *, 8);
    temp_lo = (s32) (temp_v0 * temp_s1) / temp_v1;
    M2C_FIELD(arg0, s32 *, 0x94) = (s32) (temp_v0 * temp_s3);
    temp_s0_2 = (temp_v0 < (temp_s2_2 * temp_v1)) ? temp_lo : (temp_lo - ((temp_s1 - temp_s0) - 1));
    temp_s5_2 = temp_s5 + temp_s0_2;
    M2C_FIELD(arg0, s32 *, 0x90) = temp_s0_2;
    temp_s5_3 = temp_s5_2 - temp_s7;
    if (temp_s5_2 >= temp_s7) {
        if ((temp_v1 == 2) || (M2C_FIELD(arg0, s32 *, 0xE8) != 0)) {
            ADXB_CopyExtraBufSte(temp_fp, temp_s7, sp0, temp_s5_3);
            return;
        }
        func_00158D28(temp_fp, temp_s7, sp0, temp_s5_3);
    }
}
