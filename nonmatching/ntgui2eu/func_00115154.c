/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005F8B48[];
extern void *D_006024A8;

void func_00115154(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        M2C_FIELD(arg0, s32 *, 0xE4) = 2;
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x1C)(arg0);
        M2C_FIELD(D_006024A8, M2C_UNK (**)(M2C_UNK *), 0xF4)(((void *)D_005F8B48));
    }
}
