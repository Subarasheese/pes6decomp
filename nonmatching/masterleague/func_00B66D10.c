/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B66E20();                                /* extern */
extern s32 D_003EAEE0;

s32 func_00B66D10(void) {
    if (D_003EAEE0 == 0) {
        return 1;
    }
    return func_00B66E20();
}
