/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A3D18[];
extern char D_008A3D20[];
extern char D_008A3D28[];
extern char D_008A3D30[];

s32 func_0081CA90(void) {
    if ((*(s32 *)D_008A3D18) == 0) {
        return 0;
    }
    (*(s8 *)D_008A3D20) = 0;
    (*(s32 *)D_008A3D28) = 0;
    (*(s32 *)D_008A3D30) = 0;
    return 1;
}
