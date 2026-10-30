/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019B8F8(s32, s32);                        /* extern */
extern char D_00602664[];

void func_001AFD88(s32 *arg0, s32 arg1, s32 arg2) {
    (*(s32 *)D_00602664) = 0;
    if ((func_0019B8F8(arg1, arg2) == -1) && ((*(s32 *)D_00602664) != 0)) {
        *arg0 = (*(s32 *)D_00602664);
    }
}
