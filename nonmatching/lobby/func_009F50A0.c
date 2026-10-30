/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009F4B10();                                /* extern */

void *func_009F50A0(s32 *arg0) {
    if (arg0 == NULL) {
        return NULL;
    }
    if (func_009F4B10() != 0) {
        if (*arg0 == 6) {
            return arg0 + 0xC024;
        }
        return NULL;
    }
    return NULL;
}
