/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00817C00(void *);                      /* extern */
extern void *D_00A7DEF0;

void func_009E14A0(void) {
    if (D_00A7DEF0 != NULL) {
        M2C_FIELD(D_00A7DEF0, s8 *, 0) = 2;
        M2C_FIELD(D_00A7DEF0, s8 *, 1) = 1;
        func_00817C00(D_00A7DEF0);
    }
}
