/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00862410(s32);                         /* extern */
extern char D_008A4398[];
extern char D_008A43B0[];

s32 func_0082BE50(void) {
    (*(s8 *)D_008A43B0) = 0;
    if ((*(s32 *)D_008A4398) != 0) {
        func_00862410((*(s32 *)D_008A4398));
    }
    return 4;
}
