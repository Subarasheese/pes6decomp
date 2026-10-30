/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_00C89850(s32);                         /* extern */
extern void *D_003EA8B4;

void func_00C93C70(void) {
    s32 var_s1;
    void *temp_s0;

    temp_s0 = D_003EA8B4;
    if (temp_s0 != NULL) {
        var_s1 = 0;
        if (M2C_FIELD(temp_s0, s32 *, 4) > 0) {
            do {
                func_00C89850(M2C_FIELD(temp_s0, s32 *, 0) + var_s1);
                var_s1 += 1;
            } while (var_s1 < M2C_FIELD(temp_s0, s32 *, 4));
        }
        func_00153FA0(M2C_FIELD(temp_s0, void **, 0xC));
        func_00153FA0(M2C_FIELD(temp_s0, void **, 0x14));
        func_00153FA0(temp_s0);
    }
    D_003EA8B4 = NULL;
}
