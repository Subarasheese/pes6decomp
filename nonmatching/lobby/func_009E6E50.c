/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E8540(s32);                             /* extern */
extern char D_00A7DF30[];

s32 func_009E6E50(void) {
    if ((*(s32 *)D_00A7DF30) == 0) {
        return 1;
    }
    return func_009E8540((*(s32 *)D_00A7DF30));
}
