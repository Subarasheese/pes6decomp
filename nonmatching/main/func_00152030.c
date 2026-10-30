/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0050D480[];
extern char D_0050D484[];

s32 func_00152030(void) {
    switch ((*(s32 *)D_0050D480)) {                           /* irregular */
    case 0:
        if ((u32) (*(u32 *)D_0050D484) < 2U) {
block_6:
            return 0;
        }
block_4:
    default:
        return 1;
    case 1:
        if ((u32) ((*(u32 *)D_0050D484) - 1) < 2U) {
            goto block_6;
        }
        goto block_4;
    }
}
