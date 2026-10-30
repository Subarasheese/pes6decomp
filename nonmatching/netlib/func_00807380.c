/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0088ADB0[];

s32 func_00807380(void) {
    if (((void *)D_0088ADB0) != NULL) {
        (*(s8 *)D_0088ADB0) = 1;
        return 1;
    }
    return 0;
}
