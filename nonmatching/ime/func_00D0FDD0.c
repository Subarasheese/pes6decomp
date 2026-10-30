/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00842950(M2C_UNK);                     /* extern */
M2C_UNK func_00D11550(s32, s32);                    /* extern */
extern char D_00D376E8[];
extern char D_00D376F0[];

s32 func_00D0FDD0(void) {
    s32 var_s0;

    if ((*(s32 *)D_00D376E8) != 0) {
        var_s0 = 0;
        do {
            if ((*(s32 *)D_00D376E8) != 0) {
                func_00D11550((*(s32 *)D_00D376F0), var_s0);
                func_00842950(1);
            }
            var_s0 += 1;
        } while (var_s0 < 0xA);
        return 1;
    }
    return 0;
}
