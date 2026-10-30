/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E2CD0();                            /* extern */
extern void *D_00A7DE98;

void func_009D6E20(void) {
    if (D_00A7DE98 != NULL) {
        func_009E2CD0();
        M2C_FIELD(D_00A7DE98, s8 *, 0x25) = 1;
    }
}
