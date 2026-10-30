/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0095C510(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0096DA00(void *);                      /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_0098A0F0(s32, s32, s32, s32, void *, s32); /* extern */
M2C_UNK func_0098A5F0(s32, s32, void *);            /* extern */
M2C_UNK func_0098A8F0(s32, s32, void *);            /* extern */
M2C_UNK func_0098AC90(s32, s32, s32, s32, void *);  /* extern */

void func_0098B130(s32 arg0, s32 arg1) {
    s32 temp_s3;
    s32 temp_v0;
    s32 var_a2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s2;
    s32 var_s5;
    void *temp_s1;
    void *var_a0;
    void *var_a1;

    var_s5 = arg0;
    temp_s1 = func_0096DB90(0xB7C0);
    if ((var_s5 % 2) == 0) {
        var_s0 = 0;
    } else {
        var_s0 = var_s5;
        var_s5 += 1;
    }
    var_s2 = var_s5 >> 1;
    if (var_s5 < 0) {
        var_s2 = (s32) (var_s5 + 1) >> 1;
    }
    temp_v0 = func_0095C510(var_s5, 2);
    var_a3 = 0;
    var_a1 = temp_s1;
    temp_s3 = temp_v0 / var_s2;
    do {
        var_a2 = 0;
        var_a0 = var_a1;
loop_8:
        M2C_FIELD(var_a0, s32 *, 0) = 0;
        M2C_FIELD(var_a0, s32 *, 4) = 0;
        var_a2 += 5;
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        M2C_FIELD(var_a0, s32 *, 0xC) = 0;
        M2C_FIELD(var_a0, s32 *, 0x10) = 0;
        var_a0 += 0x14;
        if (var_a2 < 0x14) {
            goto loop_8;
        }
        var_a3 += 1;
        var_a1 += 0x50;
    } while (var_a3 < 0x24C);
    func_0098AC90(temp_s3, var_s2, temp_v0, var_s5, temp_s1);
    func_0098A8F0(temp_s3, var_s2, temp_s1);
    func_0098A5F0(temp_s3, var_s2, temp_s1);
    func_0098A0F0(temp_s3, var_s2, var_s5, var_s0, temp_s1, arg1);
    func_0096DA00(temp_s1);
}
