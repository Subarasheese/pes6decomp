/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CFF484[];
extern char D_00CFF4B0[];

s32 func_00CE4CF0(void) {
    if ((*(s32 *)D_00CFF484) != 0) {
        return 0;
    }
    return (*(s32 *)D_00CFF4B0);
}
