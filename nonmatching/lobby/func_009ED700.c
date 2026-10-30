/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008214E0();                                /* extern */
s32 func_00821570();                                /* extern */
s32 func_009ED850();                                /* extern */
extern char D_00A7E000[];

s32 func_009ED700(void) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = (*(s32 *)D_00A7E000);
    var_s1 = 0;
    switch (var_s0) {                               /* irregular */
    case 0:
        if (func_00821570() == 1) {
            var_s0 += 1;
        case 1:
            if (func_009ED850() == 1) {
                var_s0 += 1;
            case 2:
                var_s1 = func_008214E0();
            }
        }
        break;
    }
    (*(s32 *)D_00A7E000) = var_s0;
    return var_s1;
}
