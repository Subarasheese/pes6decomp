/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591C09[];
extern char D_00591C0C[];
extern char D_00591C10[];

s32 func_00B29B10(void) {
    s32 var_v0;
    s32 var_v0_2;

    var_v0_2 = 5;
    if ((*(u8 *)D_00591C09) == 5) {
        var_v0_2 = (*(s32 *)D_00591C0C);
    }
    if (var_v0_2 != 0) {
        var_v0 = 5;
    } else {
        var_v0 = (*(s32 *)D_00591C10);
    }
    return var_v0 == 2;
}
