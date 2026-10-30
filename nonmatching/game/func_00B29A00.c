/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591C09[];
extern char D_00591C0C[];
extern char D_00591C14[];

s32 func_00B29A00(void) {
    s32 var_v1;

    var_v1 = 5;
    if ((*(u8 *)D_00591C09) == 5) {
        var_v1 = (*(s32 *)D_00591C0C);
    }
    if (var_v1 != 1) {
        return 0;
    }
    return (*(s32 *)D_00591C14);
}
