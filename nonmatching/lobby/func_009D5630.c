/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009D63E0();                            /* extern */
extern s8 *D_00A7DE10;

void func_009D5630(void) {
    if (D_00A7DE10 != NULL) {
        func_009D63E0();
        *D_00A7DE10 = 1;
    }
}
