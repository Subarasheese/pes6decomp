/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E7250();                                /* extern */
s32 func_009E8F60(s32);                             /* extern */
extern char D_00A7DF38[];

s32 func_009E7090(s32 arg0) {
    if ((*(u8 *)D_00A7DF38) != 0) {
        (*(u8 *)D_00A7DF38) = 0;
        if (func_009E7250() == 0) {
            return 2;
        }
    }
    return func_009E8F60(arg0);
}
