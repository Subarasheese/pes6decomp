/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern char D_008B144E[];

s32 func_00C76410(s32 arg0) {
    s32 var_v0;

    var_v0 = func_002DCA30() != 0;
    if (var_v0 != 0) {
        var_v0 = ((*(s8 *)D_008B144E) & 1) != arg0;
    }
    return var_v0;
}
