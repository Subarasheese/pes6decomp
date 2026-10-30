/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_008FC8C0(void);
extern char D_0058D7AA[];

s32 func_00917860(void) {
    if ((*(s8 *)D_0058D7AA) != 0) {
        return 0;
    }
    return (func_008FC8C0() & 0xFFFF) > 0;
}
