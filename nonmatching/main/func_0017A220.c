/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001795B0(void);
extern int func_001795C8(void);
extern s32 (*D_00510FB8)();

s32 func_0017A220(s32 *arg0) {
    s32 temp_v0;
    s32 var_s0;

    if (D_00510FB8 != NULL) {
        var_s0 = D_00510FB8();
    } else {
        func_001795B0();
        temp_v0 = *arg0;
        *arg0 = 1;
        var_s0 = temp_v0 != 1;
        func_001795C8();
    }
    return var_s0;
}
