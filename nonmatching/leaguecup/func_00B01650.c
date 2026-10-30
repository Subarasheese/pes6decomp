/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B01540();                                /* extern */
extern s32 D_003EAD54;

s32 func_00B01650(M2C_UNK arg0, s32 arg1) {
    if (D_003EAD54 == 0) {
        return 1;
    }
    return (arg1 & 0xFF) < func_00B01540();
}
