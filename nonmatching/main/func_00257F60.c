/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0025E080(M2C_UNK);                     /* extern */
extern char D_0058CF20[];

void func_00257F60(void) {
    switch ((*(s32 *)D_0058CF20)) {                           /* irregular */
    case 1:
        (*(s32 *)D_0058CF20) -= 1;
    case 2:
        return;
    case 0:
        func_0025E080(3);
        return;
    }
}
