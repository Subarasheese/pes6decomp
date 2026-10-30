/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
void *func_001B06F0(s32);                           /* extern */
M2C_UNK func_001B2CB0(s32, void *, s32);            /* extern */
extern s32 D_003E98E0;

void func_001B2890(void *arg0) {
    s32 var_s1;
    s32 var_s2;
    void *temp_a0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;

    temp_s0 = M2C_FIELD(arg0, void **, 0);
    temp_a0 = M2C_FIELD(temp_s0, void **, 0xC);
    if (temp_a0 != NULL) {
        func_00153FA0(temp_a0);
    }
    var_s2 = 0;
    var_s1 = 0;
    M2C_FIELD(temp_s0, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0x44);
    M2C_FIELD(temp_s0, s8 *, 1) = 2;
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8), s8 *, 0x64) = 2;
    do {
        temp_s0_2 = D_003E98E0 + var_s1;
        if (M2C_FIELD(temp_s0_2, s8 *, 0) != 0) {
            temp_v0 = func_001B06F0(M2C_FIELD(temp_s0_2, s32 *, 0xC));
            func_001B2CB0(M2C_FIELD(temp_s0_2, s32 *, 8), temp_v0, var_s2);
            func_00153FA0(temp_v0);
        }
        var_s2 += 1;
        var_s1 += 0x10;
    } while (var_s2 < 8);
}
