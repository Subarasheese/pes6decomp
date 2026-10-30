/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
extern void func_001D7C00(void *, s8);
extern void func_001D7C20(void *, s32);
M2C_UNK func_009CF0B0(M2C_UNK);                     /* extern */
extern void *D_00A7DDF8;

s32 func_009D0710(void) {
    void *temp_s0;

    if (D_00A7DDF8 != NULL) {
        temp_s0 = M2C_FIELD(D_00A7DDF8, void **, 0x7EC);
        func_001D7D80(temp_s0, 0);
        func_001D7C00(temp_s0, 0);
        func_001D7C20(temp_s0, 2);
        func_001D7D60(temp_s0, 1);
        func_009CF0B0(0);
        M2C_FIELD(D_00A7DDF8, s8 *, 0) = 2;
        return 1;
    }
    return 0;
}
