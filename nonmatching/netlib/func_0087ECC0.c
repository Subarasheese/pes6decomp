/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0081D240(M2C_UNK);                     /* extern */
extern char D_008B2434[];
extern char D_008B2435[];

s32 func_0087ECC0(void) {
    if ((*(u8 *)D_008B2434) == 0) {
        (*(u8 *)D_008B2434) = 1;
        func_0081D240(0);
    }
    if ((*(u8 *)D_008B2435) != 0) {
        return 1;
    }
    return 0;
}
