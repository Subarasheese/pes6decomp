/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591C09[];
extern char D_00591C0C[];
extern char D_00591C14[];

void func_00B29A40(s32 arg0) {
    s32 var_a1;

    var_a1 = 5;
    if ((*(u8 *)D_00591C09) == 5) {
        var_a1 = (*(s32 *)D_00591C0C);
    }
    if (var_a1 == 1) {
        (*(s32 *)D_00591C14) = arg0;
    }
}
