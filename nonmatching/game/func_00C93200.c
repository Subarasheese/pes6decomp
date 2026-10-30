/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00186550(M2C_UNK);                     /* extern */
extern s32 D_003EA8B0;

void func_00C93200(void) {
    if (D_003EA8B0 != 0) {
        func_00186550(0x8000);
        D_003EA8B0 = 0;
    }
}
