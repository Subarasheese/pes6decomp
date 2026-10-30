/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009AE900(void);
M2C_UNK func_009ADD30(M2C_UNK);                     /* extern */

s32 func_009ADCF0(void) {
    if (func_009AE900() != 0) {
        func_009ADD30(-1);
    }
    return 0;
}
