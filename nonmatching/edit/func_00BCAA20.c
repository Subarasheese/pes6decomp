/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE5354[];
extern char D_00CE5355[];

s32 func_00BCAA20(void) {
    return (*(u8 *)D_00CE5355) | (*(u8 *)D_00CE5354);
}
