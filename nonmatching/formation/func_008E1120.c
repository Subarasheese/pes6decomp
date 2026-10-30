/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB830(void *);
M2C_UNK func_008E1150(s32, s32);                    /* extern */

void func_008E1120(void *arg0, s32 arg1) {
    func_008E1150(arg1, func_002DB830(arg0));
}
