/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001D7A20(s32, s32, M2C_UNK);               /* extern */
extern s32 *D_00A7DED0;

s32 func_009DE770(s32 arg0) {
    if (D_00A7DED0 == NULL) {
        return 0;
    }
    return func_001D7A20(*D_00A7DED0, arg0, 2);
}
