/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009D6E20();                            /* extern */
extern void *D_00A7DEA8;

void func_009D8DE0(void) {
    if (D_00A7DEA8 != NULL) {
        func_009D6E20();
        M2C_FIELD(D_00A7DEA8, s8 *, 1) = 1;
    }
}
