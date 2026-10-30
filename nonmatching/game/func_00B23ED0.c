/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF20[];

s32 func_00B23ED0(s32 arg0) {
    return ((*(u8 *)D_00CBBF20) & 0xF & (1 << arg0)) != 0;
}
