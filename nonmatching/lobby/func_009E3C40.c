/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern s32 func_001F08B0(s32);
M2C_UNK sprintf(s8 *, s32, s32);              /* extern */
extern char D_00A03220[];

s32 func_009E3C40(void *arg0, s32 arg1) {
    s8 sp30;
    s32 var_a1;
    s32 var_s0;
    s8 *var_a1_2;

    var_a1 = arg1;
    if (var_a1 >= 0xA) {
        var_s0 = 9;
    } else {
        if (var_a1 < 0) {
            var_a1 = 0;
        }
        var_s0 = var_a1;
    }
    sprintf(&sp30, func_001F08B0(0x02040034), var_s0);
    var_a1_2 = &sp30;
    if (arg0 == NULL) {
        return 0;
    }
    if ((var_a1_2 == NULL) || (sp30 == 0)) {
        var_a1_2 = ((void *)D_00A03220);
    }
    func_001DF820(M2C_FIELD(arg0, void **, 0xC), (s32) var_a1_2);
    return 1;
}
