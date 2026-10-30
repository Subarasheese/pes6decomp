/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009F4AF0();                                /* extern */

void *func_009F4C70(s32 *arg0) {
    if (arg0 == NULL) {
        return NULL;
    }
    if (func_009F4AF0() != 1) {
        if (*arg0 == 3) {
            return arg0 + 4;
        }
        return NULL;
    }
    return NULL;
}
