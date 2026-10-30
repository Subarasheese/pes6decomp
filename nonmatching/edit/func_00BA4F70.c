/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E9370(int);
s32 func_002EE490();                                /* extern */

s32 func_00BA4F70(s32 arg0) {
    if (func_002EE490() != 0) {
        if (arg0 != 0x1BA) {
            func_002E9370(0x80000);
        }
        return 1;
    }
    return 0;
}
