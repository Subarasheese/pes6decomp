/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE57F0[];

u16 func_00BDCFC0(s32 arg0) {
    return M2C_FIELD(((arg0 * 2) + (*(s32 *)D_00CE57F0)), u16 *, 0x4A478);
}
