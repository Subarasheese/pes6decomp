/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_00145590(void *);                      /* extern */
extern u8 D_003E98C8;

void func_001A9450(void *arg0) {
    s32 var_s2;
    void *temp_a0;
    void *temp_a0_2;
    void *var_s1;

    var_s2 = 0;
    var_s1 = arg0;
    do {
        temp_a0 = M2C_FIELD(var_s1, void **, 0x10);
        if (temp_a0 != NULL) {
            func_00145590(temp_a0);
            if (var_s2 != 0) {
                func_00153FA0(M2C_FIELD(var_s1, void **, 0x10));
            }
            M2C_FIELD(var_s1, void **, 0x10) = NULL;
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 2);
    if ((s32) M2C_FIELD(arg0, u8 *, 0xA) >= 0x17) {
        temp_a0_2 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_a0_2 != NULL) {
            func_00153FA0(temp_a0_2);
        }
    }
    M2C_FIELD(arg0, void **, 0xC) = NULL;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 9) = 0;
    D_003E98C8 = M2C_FIELD(arg0, u8 *, 0xA);
}
