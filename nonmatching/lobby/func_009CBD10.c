/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E4370();                            /* extern */
M2C_UNK func_009E5950();                            /* extern */
extern u8 *D_00A7DDA8;

void func_009CBD10(void) {
    if (*D_00A7DDA8 == 2) {
        func_009E5950();
        return;
    }
    func_009E4370();
}
