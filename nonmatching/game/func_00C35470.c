/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCB654[];
extern char D_00CCB656[];

s32 func_00C35470(void) {
    return (*(u16 *)D_00CCB656) - (*(u16 *)D_00CCB654);
}
