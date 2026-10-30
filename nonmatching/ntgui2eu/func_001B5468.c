/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B2D08(void *, void *);              /* extern */
M2C_UNK func_001B54E0(void *, void *, s32, s32);    /* extern */
extern void *D_005CC508;

void func_001B5468(void *arg0, s32 arg1, s32 arg2) {
    void *var_a0;

    var_a0 = M2C_FIELD(arg0, void **, 0x54);
    if (var_a0 == NULL) {
        M2C_FIELD(arg0, void **, 0x54) = (void *) D_005CC508;
        var_a0 = D_005CC508;
    }
    if (M2C_FIELD(var_a0, s32 *, 0x38) == 0) {
        func_001B2D08(var_a0, arg0);
        var_a0 = M2C_FIELD(arg0, void **, 0x54);
    }
    func_001B54E0(var_a0, arg0, arg1, arg2);
}
