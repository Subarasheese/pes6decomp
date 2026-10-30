/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024A8;

void func_00112A90(void *arg0, void *arg1, s32 arg2) {
    s16 temp_s3;
    s16 temp_v0;

    temp_s3 = M2C_FIELD(D_006024A8, s16 (**)(M2C_UNK), 0xE8)(0xD);
    temp_v0 = M2C_FIELD(D_006024A8, s16 (**)(M2C_UNK), 0xE4)(0xD);
    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - arg2);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - arg2);
    M2C_FIELD(arg1, s16 *, 0xC) = temp_s3;
    M2C_FIELD(arg1, s16 *, 0xE) = temp_v0;
    M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) (((M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, u16 *, 0xC)) - temp_s3) + arg2);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 4) - arg2);
    M2C_FIELD(arg1, s16 *, 0x1C) = temp_s3;
    M2C_FIELD(arg1, s16 *, 0x1E) = temp_v0;
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0) - arg2);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) (((M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, u16 *, 0xE)) - temp_v0) + arg2);
    M2C_FIELD(arg1, s16 *, 0x2C) = temp_s3;
    M2C_FIELD(arg1, s16 *, 0x2E) = temp_v0;
    M2C_FIELD(arg1, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 0x30) = (s32) (((M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, u16 *, 0xC)) - temp_s3) + arg2);
    M2C_FIELD(arg1, s32 *, 0x34) = (s32) (((M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, u16 *, 0xE)) - temp_v0) + arg2);
    M2C_FIELD(arg1, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, s16 *, 0x3C) = temp_s3;
    M2C_FIELD(arg1, s16 *, 0x3E) = temp_v0;
}
