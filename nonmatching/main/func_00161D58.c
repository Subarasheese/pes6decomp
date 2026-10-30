/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00177A18(void *);
extern int func_00158598(void *);
s32 func_001585B0(void *);                          /* extern */

void func_00161D58(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    M2C_UNK (*temp_a4)(void **, M2C_UNK, M2C_UNK, s32, M2C_UNK);
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    void ***var_s0;
    void **temp_v0_2;
    void *temp_s4;

    var_s3 = 0;
    var_s1 = arg0 + 0x1C;
    var_s0 = arg0 + 0xC;
    temp_s4 = M2C_FIELD(arg0, void **, 0xC);
loop_3:
    temp_v0 = var_s3 < func_001585B0(M2C_FIELD(arg0, void **, 4));
    var_s3 += 1;
    temp_a3 = var_s1;
    var_s1 += 8;
    if (temp_v0 != 0) {
        temp_v0_2 = *var_s0;
        var_s0 += 4;
        temp_a4 = M2C_FIELD(*temp_v0_2, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, s32, M2C_UNK), 0x18);
        temp_a4(temp_v0_2, 0, 0x4000, temp_a3, temp_a4);
        goto loop_3;
    }
    *arg1 = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - func_00177A18(temp_s4)) / 2;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x38);
    temp_v0_3 = (s32) M2C_FIELD(arg0, s32 *, 0x20) / 2;
    *arg2 = (temp_v0_3 < temp_a0) ? temp_v0_3 : temp_a0;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_v1 < 0) {
        var_v0 = 0x1FFFFFFF;
    } else {
        var_v0 = temp_v1 - M2C_FIELD(arg0, s32 *, 0x40);
    }
    *arg3 = var_v0;
    func_00158598(M2C_FIELD(arg0, void **, 4));
}
