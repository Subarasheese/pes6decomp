/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A5F84[];

s32 func_00825610(void) {
    if ((*(s32 *)D_008A4398) == 0) {
        return 9;
    }
    return (*(s32 *)D_008A5F84);
}
