/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009D45B0();                            /* extern */
extern s8 *D_00A7DE90;

void func_009D63E0(void) {
    func_009D45B0();
    if (D_00A7DE90 != NULL) {
        *D_00A7DE90 = 1;
    }
}
