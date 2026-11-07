/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D76B0(s32, u8);                     /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
extern char D_003B3210[];
extern char D_003B3214[];
extern char D_003B3218[];
extern char D_003B321C[];
extern char D_003B3220[];

s32 func_002DC7A0(void) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s1;

    temp_s0 = (*(s32 *)D_003B3218);
    var_s1 = 0;
    if (temp_s0 == 0) {
        var_s1 = 1;
    } else {
        switch ((*(s32 *)D_003B3220)) {                       /* irregular */
        case 2:
            (*(s32 *)D_003B3220) += 1;
        case 3:
            temp_v1 = (*(s32 *)D_003B321C) - (0xFF / (s32) (*(s32 *)D_003B3214));
            (*(s32 *)D_003B321C) = temp_v1;
            if (temp_v1 <= 0) {
                func_001D7D60(temp_s0, 0);
                (*(s32 *)D_003B321C) = 0;
                (*(s32 *)D_003B3220) += 1;
            }
            func_001D76B0(temp_s0, (u8) (*(s32 *)D_003B321C));
            break;
        default:
            var_s1 = 1;
            break;
        }
    }
    if (var_s1 == 1) {
        (*(s32 *)D_003B3210) = 4;
        (*(s32 *)D_003B3218) = 0;
        (*(s32 *)D_003B3220) = 0;
    }
    return var_s1;
}
