/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E4560();                            /* extern */
M2C_UNK func_009E5AE0();                            /* extern */
extern void *D_00A7DDA8;

void func_009CC530(s8 arg0) {
    if (D_00A7DDA8 != NULL) {
        M2C_FIELD(D_00A7DDA8, s8 *, 7) = arg0;
        if (M2C_FIELD(D_00A7DDA8, u8 *, 0) == 2) {
            func_009E5AE0();
            return;
        }
        func_009E4560();
    }
}
