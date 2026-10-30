/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 *D_00A7DE08;

s32 func_009D36C0(void) {
    if (D_00A7DE08 != NULL) {
        return *D_00A7DE08 == 3;
    }
    return 1;
}
