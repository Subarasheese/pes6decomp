/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CFFE90[];
extern char D_00CFFE94[];
extern char D_00CFFE98[];

s32 func_00CEE850(void) {
    return (*(s32 *)D_00CFFE98) + (((*(s32 *)D_00CFFE90) * 8) + ((*(s32 *)D_00CFFE94) * 4));
}
