/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00C1B4D0();                            /* extern */
M2C_UNK func_00C1B500();                            /* extern */

s32 func_00BC40A0(void) {
    if (func_00BCF3A0(0x8000) != 1) {
        if (func_00BCF3A0(0x40000) != 1) {
            return 0;
        }
        func_00C1B500();
        func_0026E840(0x8400F803);
        goto block_8;
    }
    func_00C1B4D0();
    func_0026E840(0x8400F803);
block_8:
    return 1;
}
