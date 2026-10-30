/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B0AA8(M2C_UNK *);                       /* extern */
extern char D_005FBBC8[];

void func_0013D090(s8 *arg0) {
    if (func_001B0AA8(((void *)D_005FBBC8)) != 0) {
        *arg0 = 0;
    }
}
