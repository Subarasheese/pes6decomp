/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591C09[];
extern char D_00591C0C[];
extern char D_00591C10[];

void func_00B29C10(s32 arg0) {
    s32 var_v1;

    var_v1 = 5;
    if ((*(u8 *)D_00591C09) == 5) {
        var_v1 = (*(s32 *)D_00591C0C);
    }
    if (var_v1 == 0) {
        (*(s32 *)D_00591C10) = arg0;
    }
}
