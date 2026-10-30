/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00154160(s32, s32);
extern char D_008A4250[];

u8 func_0081E4D0(void) {
    if ((*(s32 *)D_008A4250) == 1) {
        return func_00154160(0, 0x13);
    }
    return 0U;
}
