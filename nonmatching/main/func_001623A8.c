/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00158A60(void *);
extern int func_00158A58(void *);
extern int func_00158658(void *);
void func_001623A8(void *arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s3;
    s32 temp_v0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 4);
    temp_s0 = func_00158658(temp_s1);
    temp_s3 = func_00158A58(temp_s1);
    temp_v0 = func_00158A60(temp_s1);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_s0_2 = temp_s0 - temp_a0;
    temp_s0_3 = (temp_v0 < temp_s0_2) ? temp_v0 : temp_s0_2;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_a0 + temp_s0_3);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + temp_s0_3);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + temp_s3);
}
