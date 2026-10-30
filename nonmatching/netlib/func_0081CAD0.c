/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A3D18[];
extern char D_008A3D20[];

s8 func_0081CAD0(void) {
    if ((*(s32 *)D_008A3D18) == 0) {
        return 0;
    }
    return (*(s8 *)D_008A3D20);
}
