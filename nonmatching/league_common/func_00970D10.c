/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002F2ED0(s32);                         /* extern */
s32 func_002F3850(s32);                             /* extern */
extern s32 *D_003EA94C;

s32 func_00970D10(void) {
    s32 *temp_s0;

    temp_s0 = D_003EA94C;
    if (temp_s0 != NULL) {
        func_002F2ED0(*temp_s0);
        return func_002F3850(*temp_s0) == 4;
    }
    return 0;
}
