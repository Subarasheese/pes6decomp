/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_0030E540(s32);
extern s32 func_0030DC60(void *, s32);
extern s32 func_0030DC00(void *, s32);
extern s32 func_003394B0(void *, s32, s32, void *);
extern int func_003395B0(void *);
extern s32 func_00340C80(f32);
s32 func_00340980(f32, f32);                        /* extern */

s32 func_0032CAA0(void *arg0) {
    f32 sp64;
    f32 sp68;
    s32 sp6C;
    M2C_UNK (*temp_v0)(void *, void *);
    M2C_UNK (*temp_v0_2)(void *, void *);
    s32 temp_s0;
    s32 temp_s4;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;

    temp_s3 = M2C_FIELD(arg0, void **, 0);
    temp_s1 = M2C_FIELD(arg0, void **, 4);
    temp_s2 = M2C_FIELD(arg0, void **, 8);
    temp_s0 = func_003395B0(temp_s2);
    temp_s4 = func_0030E540(0) & 0xFF;
    func_0030DC60(&sp68, temp_s4);
    func_0030DC00(&sp64, temp_s4);
    if (func_00340980(sp68, sp64) == 0) {
        M2C_FIELD(temp_s3, s32 *, 0x68) = 0;
    } else {
        M2C_FIELD(temp_s3, s32 *, 0x68) = 1;
    }
    temp_v0 = M2C_FIELD(temp_s3, M2C_UNK (**)(void *, void *), 0x70);
    if (temp_v0 != NULL) {
        temp_v0(temp_s3, temp_s2);
    }
    temp_v0_2 = M2C_FIELD(temp_s3, M2C_UNK (**)(void *, void *), 0x74);
    if (temp_v0_2 != NULL) {
        temp_v0_2(temp_s3, temp_s1);
    }
    func_003394B0(temp_s2, 0, (s32) M2C_FIELD(temp_s1, u8 *, 0x60), &sp6C);
    if ((sp6C + func_00340C80(20.0f)) >= temp_s0) {
        return 1;
    }
    M2C_FIELD(temp_s3, M2C_UNK (**)(void *, void *), 0x74) = NULL;
    M2C_FIELD(temp_s3, M2C_UNK (**)(void *, void *), 0x70) = NULL;
    M2C_FIELD(temp_s3, s32 *, 0x64) = 0;
    M2C_FIELD(temp_s3, s32 *, 0x6C) = 0;
    M2C_FIELD(temp_s3, s32 *, 0xC) = 0;
    return 0;
}
