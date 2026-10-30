/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A5F70[];
extern char D_008AA0E8[];

s32 func_00824380(void) {
    s16 var_v0;

    if ((*(s32 *)D_008A4398) == 0) {
        var_v0 = -1;
    } else if (((void *)D_008A5F70) == NULL) {
        var_v0 = -1;
    } else {
        var_v0 = (*(s16 *)D_008AA0E8);
    }
    return var_v0 & 0xFF;
}
