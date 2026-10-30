/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D0F680(M2C_UNK);                     /* extern */
extern char D_0058D7A8[];
extern char D_00591DB7[];

s32 func_00880450(void) {
    (*(s8 *)D_0058D7A8) = 1;
    func_00D0F680(0);
    return (*(u8 *)D_00591DB7) == 0;
}
