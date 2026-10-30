/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154450(s32, s32);
s32 func_0081E780();                                /* extern */
extern char D_008A4250[];

s32 func_0081E5C0(s32 arg0) {
    s32 var_v1;

    if ((*(s32 *)D_008A4250) != 1) {
        return 0;
    }
    var_v1 = 1;
    if (func_0081E780() != 1) {
        var_v1 = func_00154450(0, arg0);
    }
    return var_v1;
}
