/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002631B0();                                /* extern */
s32 func_00CEE880();                                /* extern */
s32 func_00CF0CA0();                                /* extern */
extern s32 D_003EB324;

s32 func_00CEFE60(void) {
    if (func_002631B0() == 9) {
        if (D_003EB324 == 0) {
            return func_00CEE880();
        }
        return func_00CF0CA0();
    }
    return 0;
}
