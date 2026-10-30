/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s8 *D_00A68D60;

void func_00978C20(void) {
    if (D_00A68D60 != NULL) {
        *D_00A68D60 = 1;
    }
}
