/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001E0110(void *);
extern void func_00153FA0(void *);
void func_001E50C0(void *arg0) {
    void *temp_s0;
    void *var_s1;

    var_s1 = M2C_FIELD(arg0, void **, 8);
    if (var_s1 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_s1, void **, 0);
            func_001E0110(M2C_FIELD(var_s1, void **, 4));
            func_00153FA0(var_s1);
            var_s1 = temp_s0;
        } while (temp_s0 != NULL);
        M2C_FIELD(arg0, void **, 8) = NULL;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        M2C_FIELD(arg0, s16 *, 0x44) = 0;
    }
}
