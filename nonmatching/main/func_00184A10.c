/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002562B0(M2C_UNK);                     /* extern */
extern void *D_0051FFB8;

void func_00184A10(void) {
    if (D_0051FFB8 != NULL) {
        if (M2C_FIELD(D_0051FFB8, u8 *, 2) == 0) {
            return;
        }
        func_002562B0(8);
        M2C_FIELD(D_0051FFB8, u8 *, 2) = 0U;
    }
}
