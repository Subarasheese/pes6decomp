/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226940(void);
extern char D_00591C09[];

s32 func_0093DAA0(void) {
    if ((*(u8 *)D_00591C09) != 4) {
        return 3;
    }
    return func_00226940() & 0xFF;
}
