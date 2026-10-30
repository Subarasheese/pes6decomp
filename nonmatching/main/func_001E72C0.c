/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017F9A0(M2C_UNK *, void *, M2C_UNK, s8 *, void *); /* extern */
extern void *D_0052B140;
extern M2C_UNK func_001E77F0;

void func_001E72C0(s32 arg0, void *arg1) {
    s8 sp10;
    s32 sp1C;
    s32 sp20;
    s32 var_v1;
    s8 *var_a1;
    void *var_a1_2;

    var_a1 = &sp10;
    var_v1 = 0x14;
    if (var_a1 != NULL) {
        do {
            *var_a1 = 0;
            var_v1 -= 1;
            var_a1 += 1;
        } while (var_v1 != 0);
    }
    var_a1_2 = D_0052B140;
    if (var_a1_2 != NULL) {
loop_3:
        if (M2C_FIELD(var_a1_2, s32 *, 8) != arg0) {
            var_a1_2 = M2C_FIELD(var_a1_2, void **, 4);
            if (var_a1_2 == NULL) {
                goto block_8;
            }
            goto loop_3;
        }
    } else {
block_8:
        var_a1_2 = NULL;
    }
    if (var_a1_2 == NULL) {
        sp1C = M2C_FIELD(arg1, s32 *, 0);
        sp20 = M2C_FIELD(arg1, s32 *, 4);
        func_0017F9A0(&func_001E77F0, arg1 + 4, 4, &sp10, arg1);
    }
}
