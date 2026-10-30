/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024A8;

void func_00111454(M2C_UNK arg0, s32 arg1) {
    M2C_FIELD(D_006024A8, M2C_UNK (**)(), 0x108)();
    M2C_FIELD(D_006024A8, M2C_UNK (**)(M2C_UNK, s32), 0x104)(0x10, arg1);
}
