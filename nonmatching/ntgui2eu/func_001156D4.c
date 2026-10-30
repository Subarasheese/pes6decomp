/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005F8B70[];
extern void *D_006024A8;

void func_001156D4(void *arg0, u32 arg1, s32 arg2) {
    s32 temp_a2;

    temp_a2 = arg2 & 0xFF;
    if (arg1 >= 5U) {
        M2C_FIELD(D_006024A8, M2C_UNK (**)(M2C_UNK *, s32), 0xF4)(((void *)D_005F8B70), temp_a2);
        return;
    }
    M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x34)(temp_a2);
}
