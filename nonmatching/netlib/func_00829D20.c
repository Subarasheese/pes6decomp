/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4B60[];
extern char D_008A5664[];
extern char D_008A5C44[];

s32 func_00829D20(void) {
    (*(s32 *)D_008A4B60) = 0;
    (*(s32 *)D_008A5C44) = 0;
    (*(s32 *)D_008A5664) = 0;
    return 4;
}
