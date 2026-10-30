/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005F8B30[];
extern void *D_006024A8;

void func_001150F4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(), 0x38)();
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x18)(arg0);
    M2C_FIELD(arg0, M2C_UNK (**)(void *, M2C_UNK), 0x3C)(arg0, 0);
    M2C_FIELD(D_006024A8, M2C_UNK (**)(M2C_UNK *), 0xF4)(((void *)D_005F8B30));
}
