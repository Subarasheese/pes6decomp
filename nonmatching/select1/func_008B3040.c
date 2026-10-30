/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E7100(s32);
extern s32 func_0021E000(u32);
extern void func_00153FA0(void *);
M2C_UNK func_001E6ED0(void *, s32);                 /* extern */
extern void *D_003EA3F4;

void func_008B3040(void) {
    void *temp_a0;
    void *var_s0;

    var_s0 = D_003EA3F4;
    if (var_s0 != NULL) {
        do {
            func_001E6ED0(func_001E7100(func_0021E000(M2C_FIELD(var_s0, u32 *, 0))), M2C_FIELD(var_s0, s32 *, 4));
            temp_a0 = var_s0;
            var_s0 = M2C_FIELD(var_s0, void **, 8);
            func_00153FA0(temp_a0);
        } while (var_s0 != NULL);
    }
    D_003EA3F4 = NULL;
}
