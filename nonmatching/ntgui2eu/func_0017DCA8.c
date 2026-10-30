/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017D848(void *);                      /* extern */
M2C_UNK func_00189948(void *, void *, void *, void *); /* extern */
extern M2C_UNK (*D_005C14F0)(void *);

void func_0017DCA8(void *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x538) != 0) {
        var_s1 = M2C_FIELD(arg0, s32 *, 0x53C) != 0;
    }
    D_005C14F0(arg0);
    if (var_s1 != 0) {
        func_00189948(arg0 + 0x540, arg0 + 0x1250, arg0 + 0x1240, arg0 + 0x1230);
        func_0017D848(arg0);
    }
}
