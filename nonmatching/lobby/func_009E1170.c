/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E09D0(M2C_UNK);                     /* extern */
extern void *D_00A7DEF0;

void func_009E1170(void) {
    if (D_00A7DEF0 != NULL) {
        M2C_FIELD(D_00A7DEF0, s8 *, 0) = 0;
        M2C_FIELD(D_00A7DEF0, s8 *, 1) = 0;
        func_009E09D0(1);
    }
}
