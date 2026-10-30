/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A5F70[];
extern char D_008A9BD8[];

s32 func_008226A0(void) {
    if ((*(s32 *)D_008A4398) == 0) {
        return 0;
    }
    if (((void *)D_008A5F70) == NULL) {
        return 0;
    }
    (*(s32 *)D_008A9BD8) = 0;
    return 1;
}
