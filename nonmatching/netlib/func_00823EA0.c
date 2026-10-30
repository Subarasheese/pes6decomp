/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008AA0EB[];
extern char D_008AA104[];
extern char D_008AA108[];

s32 func_00823EA0(void) {
    (*(s8 *)D_008AA0EB) = 0x13;
    (*(s32 *)D_008AA104) = 0;
    (*(s32 *)D_008AA108) = 0;
    return 1;
}
