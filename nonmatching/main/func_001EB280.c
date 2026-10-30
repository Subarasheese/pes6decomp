/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001E62C0(void);
extern void func_001E53B0(void);
M2C_UNK func_001E5460(s32);                         /* extern */
extern void *D_0052B148;

void func_001EB280(void) {
    s32 temp_a0;
    void *var_s0;

    var_s0 = D_0052B148;
    temp_a0 = func_001E62C0() & 1;
    if (temp_a0 == 1) {
        if (var_s0 != NULL) {
            func_001E5460(temp_a0);
            do {
                M2C_FIELD(var_s0, M2C_UNK (**)(s32), 4)(M2C_FIELD(var_s0, s32 *, 0));
                var_s0 = M2C_FIELD(var_s0, void **, 0xC);
            } while (var_s0 != NULL);
        }
        func_001E53B0();
    }
}
