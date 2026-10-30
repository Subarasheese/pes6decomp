/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_009812C0();                                /* extern */

s32 func_00981280(void) {
    s32 temp_v0;

    temp_v0 = func_009812C0();
    if (temp_v0 != 0) {
        func_001C48E8(temp_v0, 0, 0x141EC);
    }
    return 1;
}
