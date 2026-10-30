/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009DE650();                                /* extern */
extern char D_00A7DEC8[];

s32 func_009DDF80(void) {
    if ((*(s32 *)D_00A7DEC8) == 0) {
        return 0;
    }
    return func_009DE650();
}
