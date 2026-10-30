/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_003E60A0[];
extern char D_005F4184[];

void func_00342BD0(s32 arg0) {
    M2C_UNK (*temp_v1)(s32);
    M2C_UNK *var_s1;
    s32 var_s2;

    var_s2 = 0;
    var_s1 = ((void *)D_003E60A0);
    do {
        if (var_s2 == (*(s32 *)D_005F4184)) {
            temp_v1 = M2C_FIELD(var_s1, M2C_UNK (**)(s32), 0xC);
            if (temp_v1 != NULL) {
                temp_v1(arg0);
            }
        }
        var_s2 += 1;
        var_s1 += 0x14;
    } while (var_s2 < 0xD);
}
