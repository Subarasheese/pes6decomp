/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0085ADE0();                                /* extern */
s32 func_0085B2A0();                                /* extern */
s32 func_0085B520();                                /* extern */
extern s32 D_003E9D60;

s32 func_0085AB00(void) {
    switch (D_003E9D60) {                           /* irregular */
    case 0:
        return 1;
    case 1:
        return func_0085B2A0();
    case 2:
        return func_0085B520();
    case 3:
        return func_0085ADE0();
    default:
        return -1;
    }
}
