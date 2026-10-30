/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B2310[];

void func_00859A30(s32 arg0) {
    (*(s32 *)D_008B2310) |= arg0 & 7;
}
