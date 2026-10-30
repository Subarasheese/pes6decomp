/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s16 func_009E76E0();                                /* extern */
s32 func_009E76F0();                                /* extern */
s32 func_009E7700(s32 *);                           /* extern */
s32 func_009E7740(s32 *);                           /* extern */
s32 func_009E7810(s16, M2C_UNK);                    /* extern */
extern char D_00A7DF20[];
extern char D_00A7DF22[];
extern char D_00A7DF24[];

s32 func_009E6C70(s32 *arg0) {
    s16 temp_v0;
    s32 *var_a0;
    s32 temp_s2;
    s32 var_s1;
    s8 var_s0;

    var_a0 = arg0;
    var_s0 = (*(s8 *)D_00A7DF20);
    var_s1 = 0;
    switch (var_s0) {                               /* irregular */
    case 0:
        if (func_009E7810((*(s16 *)D_00A7DF22), 0) == 1) {
            var_s0 += 1;
        case 1:
            if (func_009E7740(var_a0) == 1) {
                temp_s2 = func_009E76F0();
                temp_v0 = func_009E76E0();
                var_a0 = ((void *)D_00A7DF24);
                (*(s32 *)D_00A7DF24) = temp_s2;
                var_s0 += 1;
                (*(s16 *)D_00A7DF22) = temp_v0;
            case 2:
                if (func_009E7700(var_a0) == 1) {
                    var_s0 += 1;
                case 3:
                    var_s1 = (*(s32 *)D_00A7DF24);
                }
            }
        }
        break;
    }
    (*(s8 *)D_00A7DF20) = var_s0;
    return var_s1;
}
