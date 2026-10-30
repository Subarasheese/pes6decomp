/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017E3F8(void *);                      /* extern */
M2C_UNK func_00189948(void *, void *, void *, void *); /* extern */
extern M2C_UNK (*D_005C14F0)(void *);

void func_0017E818(void *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x538) != 0) {
        var_s1 = M2C_FIELD(arg0, s32 *, 0x53C) != 0;
    }
    D_005C14F0(arg0);
    if (var_s1 != 0) {
        func_00189948(arg0 + 0x540, arg0 + 0xDC0, arg0 + 0xDB0, arg0 + 0xDA0);
        func_0017E3F8(arg0);
    }
}
