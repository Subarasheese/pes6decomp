/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082B610();                                /* extern */
s32 func_0082B6B0();                                /* extern */
s32 func_0082B810();                                /* extern */
extern char D_008A5F70[];

s32 func_00932070(void) {
    switch ((*(s16 *)D_008A5F70)) {                           /* irregular */
    case 24:
        return func_0082B810();
    case 19:
        return func_0082B610();
    case 39:
    case 38:
        return func_0082B6B0();
    default:
        return 1;
    }
}
