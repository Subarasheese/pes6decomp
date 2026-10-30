/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011FEEC1[];
extern char D_011FEF01[];

s32 func_001987D8(void) {
    return (((*(u8 *)D_011FEF01) ^ (*(u8 *)D_011FEEC1)) == 0) ? 0 : -1;
}
