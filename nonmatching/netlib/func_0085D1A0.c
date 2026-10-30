/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
M2C_UNK func_00852110(s32);                         /* extern */

s32 func_0085D1A0(M2C_UNK arg0, s32 arg1) {
    if (func_002DCA50() == 0) {
        func_00852110(arg1);
        return 0;
    }
    return -1;
}
