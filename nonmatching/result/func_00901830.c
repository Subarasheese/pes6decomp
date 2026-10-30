/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C99A90(s32);                         /* extern */
extern char D_0092423C[];

void func_00901830(void) {
    func_00C99A90((*(s32 *)D_0092423C));
    (*(s32 *)D_0092423C) = 0;
}
