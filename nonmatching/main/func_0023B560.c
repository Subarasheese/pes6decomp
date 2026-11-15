/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 Pes6Team_GetHomeStadium(s32, M2C_UNK);                    /* extern */
extern char Pes6StadiumTable[];

s32 func_0023B560(s32 arg0) {
    M2C_UNK *var_s1;
    s32 var_s2;
    u8 temp_s0;

    var_s2 = 0;
    var_s1 = ((void *)Pes6StadiumTable);
loop_1:
    temp_s0 = M2C_FIELD(var_s1, u8 *, 1);
    if (temp_s0 != (Pes6Team_GetHomeStadium(arg0, 0) & 0xFF)) {
        var_s2 += 1;
        var_s1 += 0x14;
        if (var_s2 >= 0x24) {
            return 0;
        }
        goto loop_1;
    }
    return var_s2;
}
