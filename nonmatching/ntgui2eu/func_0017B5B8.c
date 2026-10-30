/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017BCB0(void *);
extern M2C_UNK (*D_005C3E10)(void *);

void func_0017B5B8(void *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x538) != 0) {
        var_s1 = M2C_FIELD(arg0, s32 *, 0x53C) != 0;
    }
    D_005C3E10(arg0);
    if (var_s1 != 0) {
        func_0017BCB0(arg0);
    }
}
