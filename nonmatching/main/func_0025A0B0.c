/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0025E130(M2C_UNK, M2C_UNK);            /* extern */
extern char D_0058CF80[];

void func_0025A0B0(void) {
    M2C_UNK *var_s0;
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_0058CF80);
    do {
        temp_a0 = M2C_FIELD(var_s0, s32 *, 0x28);
        if (temp_a0 != 0) {
            func_00153FA0(temp_a0);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    func_001C48E8(((void *)D_0058CF80), 0, 0x38);
    func_0025E130(5, 0);
}
