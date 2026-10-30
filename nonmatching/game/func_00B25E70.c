/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBECC[];

u64 func_00B25E70(void) {
    return (u64) ((s64) (*(u8 *)D_00CBBECC) << 0x3D) >> 0x3F;
}
