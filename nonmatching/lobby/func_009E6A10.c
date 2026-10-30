/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_009E7300(s32);                             /* extern */
s32 func_009E74C0();                                /* extern */
s32 func_009E74D0();                                /* extern */
extern char D_00A7DF20[];
extern char D_00A7DF24[];

s32 func_009E6A10(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;
    s8 var_s0;

    var_s0 = (*(s8 *)D_00A7DF20);
    var_s1 = 0;
    switch (var_s0) {                               /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (func_009E74D0() == 1) {
            var_s0 += 1;
        case 1:                                     /* switch 1 */
            temp_v0 = func_009E7300(arg0);
            switch (temp_v0) {                      /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                break;
            case 1:                                 /* switch 2 */
                (*(s32 *)D_00A7DF24) = 2;
                var_s0 += 1;
                break;
            default:                                /* switch 2 */
                (*(s32 *)D_00A7DF24) = 6;
                var_s0 += 1;
                break;
            }
        }
        break;
    case 2:                                         /* switch 1 */
        if (func_009E74C0() == 1) {
            var_s0 += 1;
        case 3:                                     /* switch 1 */
            var_s1 = (*(s32 *)D_00A7DF24);
        }
        break;
    }
    (*(s8 *)D_00A7DF20) = var_s0;
    return var_s1;
}
