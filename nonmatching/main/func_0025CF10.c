/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001EDAE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_001EF900(s32, M2C_UNK);                /* extern */
M2C_UNK func_0025DA90();                            /* extern */
extern char D_0058CFE0[];
extern char D_0058D148[];

void func_0025CF10(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1_2;
    s32 temp_a0;
    s32 var_s0_2;
    s32 var_s1;

    if ((*(u8 *)D_0058D148) != 0) {
        var_s1 = 0;
        var_s0 = ((void *)D_0058CFE0);
        do {
            func_001EDAE0(M2C_FIELD(var_s0, s32 *, 0x10), 1);
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 3);
        var_s0_2 = 0;
        var_s1_2 = ((void *)D_0058CFE0);
        do {
            temp_a0 = M2C_FIELD(var_s1_2, s32 *, 0x1C);
            if (var_s0_2 == 3) {
                func_001EF900(temp_a0, 0);
            } else {
                func_001EF900(temp_a0, 1);
            }
            var_s0_2 += 1;
            var_s1_2 += 0x3C;
        } while (var_s0_2 < 5);
        func_0025DA90();
    }
}
