/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B895E0(void **);                     /* extern */

void func_00B88AB0(void **arg0) {
    func_00B2ACF0();
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
        func_00B895E0(arg0);
    }
}
