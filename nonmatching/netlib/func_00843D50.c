/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002DCA60();                                /* extern */
M2C_UNK func_002DDD10(s32);                         /* extern */

void func_00843D50(s32 arg0) {
    if (func_002DCA60() == -1) {
        func_002DDD10(arg0);
    }
}
