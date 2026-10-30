/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00189778(void *);
extern M2C_UNK (*D_005C2568)();

void func_0017F010(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x918);
    D_005C2568();
    if (temp_s0 != M2C_FIELD(arg0, s32 *, 0x918)) {
        M2C_FIELD(arg0, s32 *, 0x988) = 1;
        func_00189778(arg0 + 0x990);
    }
}
