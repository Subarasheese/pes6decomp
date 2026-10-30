/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D76B0(void *, u32);
extern void func_001F18B0(void *, s8);
void func_002E4190(void *arg0, s8 arg1) {
    s32 var_s1;
    void *temp_v1;
    void *var_s0;

    if (arg0 != NULL) {
        var_s0 = arg0;
        var_s1 = 0;
        do {
            func_001F18B0(M2C_FIELD(var_s0, void **, 0x24), arg1);
            temp_v1 = M2C_FIELD(var_s0, void **, 0x1C);
            if (temp_v1 != NULL) {
                func_001D76B0(M2C_FIELD(temp_v1, void **, 0x48), (u32) arg1);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2);
    }
}
