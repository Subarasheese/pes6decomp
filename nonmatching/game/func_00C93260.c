/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00186550(M2C_UNK);                     /* extern */
M2C_UNK func_00C88E50(M2C_UNK);                     /* extern */
s32 func_00C93340();                                /* extern */
extern s32 D_003EA8B0;

void func_00C93260(void) {
    if ((D_003EA8B0 != 0) && (func_00C93340() == 1)) {
        func_00C88E50(0x15);
        if (D_003EA8B0 != 0) {
            func_00186550(0x8000);
            D_003EA8B0 = 0;
        }
    }
}
