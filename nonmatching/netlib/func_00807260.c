/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0088ADB0[];

s32 func_00807260(void) {
    if (((void *)D_0088ADB0) == NULL) {
        return 0;
    }
    if (((void *)D_0088ADB0) != NULL) {
        M2C_FIELD(((void *)D_0088ADB0), s32 *, 0x6C) = 2;
    }
    return 1;
}
