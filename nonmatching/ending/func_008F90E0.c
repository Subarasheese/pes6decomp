/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008F9220(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern u8 D_003EA674;

s32 func_008F90E0(void) {
    if (D_003EA674 != 0xC) {
        return 1;
    }
    return func_008F9220(0x384, 0x446, 0xA);
}
