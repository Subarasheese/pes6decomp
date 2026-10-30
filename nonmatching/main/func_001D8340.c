/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
void func_001D8340(void *arg0) {
    s32 var_s1;
    void *temp_a0;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x28);
    if (var_s0 != NULL) {
        var_s1 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x24) > 0) {
            do {
                temp_a0 = M2C_FIELD(var_s0, void **, 0);
                if (temp_a0 != NULL) {
                    func_00153FA0(temp_a0);
                    M2C_FIELD(var_s0, void **, 0) = NULL;
                }
                M2C_FIELD(var_s0, s32 *, 4) = 0;
                M2C_FIELD(var_s0, s32 *, 8) = 0;
                var_s1 += 1;
                M2C_FIELD(var_s0, s32 *, 0xC) = 0;
                M2C_FIELD(var_s0, s16 *, 0x10) = 0;
                M2C_FIELD(var_s0, s8 *, 0x12) = 0;
                var_s0 += 0x14;
            } while (var_s1 < M2C_FIELD(arg0, s32 *, 0x24));
        }
        func_00153FA0(M2C_FIELD(arg0, void **, 0x28));
        M2C_FIELD(arg0, void **, 0x28) = NULL;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
}
