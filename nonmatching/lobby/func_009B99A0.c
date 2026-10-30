/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B8390();                                /* extern */
M2C_UNK func_009B9A00(s32);                         /* extern */
extern char D_00A7DC20[];

s32 func_009B99A0(void) {
    if ((*(s32 *)D_00A7DC20) != 0) {
        return 1;
    }
    func_009B9A00(func_009B8390());
    return 0;
}
