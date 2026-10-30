/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_003E64AC[];
extern char D_0061C734[];

void func_00359F60(void) {
    M2C_UNK (*temp_v1_2)();
    M2C_UNK *var_s1;
    s32 (*temp_v1)(s32);
    s32 temp_a0;
    s32 temp_s0;
    s32 var_s2;

    var_s2 = 1;
    var_s1 = ((void *)D_003E64AC);
    do {
        temp_a0 = 1 << var_s2;
        if ((*(s32 *)D_0061C734) & temp_a0) {
            temp_v1 = M2C_FIELD(var_s1, s32 (**)(s32), 4);
            if ((temp_v1 != NULL) && (temp_v1(temp_a0) == 1)) {
                temp_s0 = 1 << var_s2;
                if ((*(s32 *)D_0061C734) & temp_s0) {
                    temp_v1_2 = M2C_FIELD(var_s1, M2C_UNK (**)(), 8);
                    if (temp_v1_2 != NULL) {
                        temp_v1_2();
                    }
                    (*(s32 *)D_0061C734) = ((*(s32 *)D_0061C734) | temp_s0) ^ temp_s0;
                }
            }
        }
        var_s2 += 1;
        var_s1 += 0xC;
    } while (var_s2 < 0x10);
}
