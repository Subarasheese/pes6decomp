/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0099C730(s32);                         /* extern */
s32 func_009E80E0(s32);                             /* extern */
M2C_UNK func_009E84C0(s32);                         /* extern */
M2C_UNK func_009E84E0(s32);                         /* extern */
s32 func_009E8540(s32);                             /* extern */
extern char D_00A7DF72[];
extern char D_00A7DF74[];
extern char D_00A7DF80[];
extern char D_00A7DF84[];

s32 func_009E7FC0(s32 arg0) {
    s16 var_s0;
    s32 temp_s2;
    s32 var_s1;
    s32 var_v0;

    var_s0 = (*(s16 *)D_00A7DF72);
    var_s1 = 0;
    if (var_s0 != 2) {
        var_v0 = 1;
        switch (var_s0) {                           /* irregular */
        case 0:
            if (func_009E80E0((*(s32 *)D_00A7DF74)) == 1) {
                var_s0 += 1;
            }
            break;
        case 1:
            temp_s2 = (*(s32 *)D_00A7DF80);
            if (temp_s2 == 0) {

            } else {
                if (arg0 != 0) {
                    func_009E84C0(temp_s2);
                }
                var_v0 = func_009E8540(temp_s2);
            }
            if (var_v0 == 1) {
                var_s0 += 1;
            }
            break;
        }
    } else {
        if ((*(s32 *)D_00A7DF80) == 0) {

        } else {
            func_009E84E0((*(s32 *)D_00A7DF80));
            (*(s32 *)D_00A7DF80) = 0;
            func_0099C730((*(s32 *)D_00A7DF84));
        }
        if (1 != 0) {
            var_s1 = 1;
        }
    }
    (*(s16 *)D_00A7DF72) = var_s0;
    return var_s1;
}
