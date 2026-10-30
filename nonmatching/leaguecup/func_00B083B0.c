/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B078A0();                                /* extern */
extern s32 D_003EAD5C;

s32 func_00B083B0(void) {
    if (D_003EAD5C == 0) {
        return 2;
    }
    return func_00B078A0() & 0xFF;
}
