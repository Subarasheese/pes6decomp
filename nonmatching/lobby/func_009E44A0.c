/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern s32 func_001F08B0(s32);
M2C_UNK sprintf(s8 *, s32, s32);              /* extern */
M2C_UNK func_009E47D0(u8);                          /* extern */
extern char D_00A03220[];
extern void *D_00A7DF08;

s32 func_009E44A0(s32 arg0) {
    s8 sp30;
    s32 var_a0;
    s32 var_s0;
    s8 *var_a1;
    void *temp_s1;

    var_a0 = arg0;
    if (D_00A7DF08 != NULL) {
        temp_s1 = M2C_FIELD(D_00A7DF08, void **, 0x4C);
        if (var_a0 >= 0x64) {
            var_s0 = 0x63;
        } else {
            if (var_a0 < 0) {
                var_a0 = 0;
            }
            var_s0 = var_a0;
        }
        sprintf(&sp30, func_001F08B0(0x02040025), var_s0);
        var_a1 = &sp30;
        if (temp_s1 != NULL) {
            if ((var_a1 == NULL) || (sp30 == 0)) {
                var_a1 = ((void *)D_00A03220);
            }
            func_001DF820(M2C_FIELD(temp_s1, void **, 0xC), (s32) var_a1);
        }
        func_009E47D0(M2C_FIELD(D_00A7DF08, u8 *, 0x11C));
        return 1;
    }
    return 0;
}
