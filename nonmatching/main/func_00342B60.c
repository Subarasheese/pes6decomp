/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_003E60A0[];
extern char D_005F4184[];

void func_00342B60(void) {
    M2C_UNK (*temp_v1)();
    M2C_UNK *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_003E60A0);
    do {
        if (var_s1 == (*(s32 *)D_005F4184)) {
            temp_v1 = M2C_FIELD(var_s0, M2C_UNK (**)(), 0x10);
            if (temp_v1 != NULL) {
                temp_v1();
            }
        }
        var_s1 += 1;
        var_s0 += 0x14;
    } while (var_s1 < 0xD);
}
