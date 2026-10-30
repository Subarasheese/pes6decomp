/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00533038[];
extern char D_0053303C[];

s32 func_001FCCE0(s32 arg0) {
    s32 var_v0;

    if (((*(s32 *)D_00533038) != 0) && ((*(s32 *)D_0053303C) != 0)) {
        if (arg0 < (*(s32 *)D_0053303C)) {
            var_v0 = (*(s32 *)D_00533038) + (arg0 * 8);
        } else {
            var_v0 = 0;
        }
        return var_v0;
    }
    return 0;
}
