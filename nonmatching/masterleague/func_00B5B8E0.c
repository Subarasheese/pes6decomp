/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B5C010();                            /* extern */
M2C_UNK func_00B5E6D0();                            /* extern */
extern s32 D_003EAEB8;

void func_00B5B8E0(void) {
    if (D_003EAEB8 != 0) {
        func_00B5C010();
        func_00B5E6D0();
    }
}
