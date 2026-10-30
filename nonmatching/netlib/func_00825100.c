/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4A60[];
extern char D_008A5540[];
extern char D_008A5B20[];

s32 func_00825100(void) {
    (*(s32 *)D_008A4A60) = 0;
    (*(s32 *)D_008A5B20) = 0;
    (*(s32 *)D_008A5540) = 0;
    return 4;
}
