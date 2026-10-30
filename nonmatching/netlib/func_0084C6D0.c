/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
extern s32 func_00855170(void);
s32 func_0084CE60(s32);                             /* extern */

s32 func_0084C6D0(s32 arg0) {
    s32 temp_v0;

    if (func_002DCA50() == 0) {
        return -1;
    }
    temp_v0 = func_00855170();
    if ((temp_v0 != 0) && (temp_v0 != 1)) {
        return -1;
    }
    if (func_0084CE60(arg0 & 0xFFFF) != 0) {
        return -1;
    }
    return 0;
}
