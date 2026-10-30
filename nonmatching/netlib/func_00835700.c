/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A5F7A[];
extern char D_008A5F80[];

s32 func_00835700(void) {
    if ((*(s8 *)D_008A5F7A) != 1) {
        return 0;
    }
    return (*(s32 *)D_008A5F80);
}
