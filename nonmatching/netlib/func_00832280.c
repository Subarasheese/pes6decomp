/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008AA120[];
extern char D_008AA124[];

s32 func_00832280(void) {
    if ((*(s32 *)D_008AA124) == 1) {
        (*(s32 *)D_008AA120) = 8;
    }
    if ((*(s32 *)D_008AA120) != 8) {
        return 0;
    }
    return 1;
}
