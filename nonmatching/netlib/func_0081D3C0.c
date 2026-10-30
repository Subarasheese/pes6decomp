/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A3D08[];
extern char D_008A3D10[];

s32 func_0081D3C0(void) {
    (*(s32 *)D_008A3D08) = 0;
    return (*(s32 *)D_008A3D10) == 0;
}
