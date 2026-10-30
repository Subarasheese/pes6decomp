/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00105370(s32);                             /* extern */
M2C_UNK func_00146C70(M2C_UNK *, s32);              /* extern */
extern char D_003DC560[];
extern s32 D_003E9DD8;

s32 func_002DEA90(void) {
    s32 temp_s0;

    temp_s0 = func_00105370(D_003E9DD8);
    func_00146C70(((void *)D_003DC560), D_003E9DD8);
    return temp_s0;
}
