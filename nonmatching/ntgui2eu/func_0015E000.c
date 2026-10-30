/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00134328();                                /* extern */
extern char D_005BEE08[];

void func_0015E000(void) {
    (*(s32 *)D_005BEE08) = func_00134328();
}
