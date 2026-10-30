/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB8A0(void *);
s32 func_0063A830();                                /* extern */
extern void *D_0065C88C;

s32 func_0062E500(void) {
    if (func_0063A830() == 0) {
        return 0;
    }
    return func_002DB8A0(D_0065C88C);
}
