/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00BA8570(void **);                     /* extern */

void func_00BB8630(void **arg0) {
    func_00B2ACF0();
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
        func_00BA8570(arg0);
        M2C_FIELD(*arg0, s16 *, 0x18) = 0x76;
    }
}
