/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00305E70(s32);
extern char D_00591DB7[];

u8 func_00303710(void) {
    if (func_00305E70(0x26) != 0) {
        return 0U;
    }
    return (*(u8 *)D_00591DB7);
}
