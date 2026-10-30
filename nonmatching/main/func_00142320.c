/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00103BB8(s32, s32, void *);            /* extern */
extern void *D_003E97FC;

void func_00142320(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s2;
    s32 var_s5;
    void *var_s3;
    void *var_s4;

    var_s5 = 0;
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_s0 = M2C_FIELD(D_003E97FC, s32 *, 0);
    var_s2 = M2C_FIELD(D_003E97FC, s32 *, 4);
    var_s4 = arg0 + M2C_FIELD(arg0, s32 *, 0x1C);
    var_s3 = arg0 + M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_s1 > 0) {
        do {
            func_00103BB8(var_s2, temp_s0 + (M2C_FIELD(var_s3, s16 *, 2) << 6), var_s4);
            var_s5 += 1;
            var_s4 += 0x40;
            var_s3 += 4;
            var_s2 += 0x40;
        } while (var_s5 < temp_s1);
    }
}
