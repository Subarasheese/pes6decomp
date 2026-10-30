/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B00D40(void);
extern s32 D_003EAD54;

s32 func_00B00EB0(s32 arg0) {
    if (D_003EAD54 == 0) {
        return 0;
    }
    return arg0 < (func_00B00D40() & 0xFF);
}
