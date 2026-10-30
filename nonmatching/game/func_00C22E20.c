/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_00CB52A0[];

void func_00C22E20(void) {
    M2C_UNK *var_s0;
    s32 temp_v1;
    s32 var_s1;
    void *temp_a0;

    var_s1 = 0;
    var_s0 = ((void *)D_00CB52A0);
    do {
        temp_a0 = var_s0 + 0x6BC;
        if (M2C_FIELD(var_s0, s32 *, 0x6BC) != 0) {
            temp_v1 = M2C_FIELD(temp_a0, s32 *, 8);
            if (temp_v1 != 0) {
                M2C_FIELD(temp_a0, s32 *, 8) = (s32) (temp_v1 - 1);
            }
            M2C_FIELD(temp_a0, s32 *, 4) = (s32) (M2C_FIELD(temp_a0, s32 *, 4) + 1);
            if (M2C_FIELD(temp_a0, s32 *, 8) == 0) {
                func_001C48E8(temp_a0, 0, 0x40);
            }
        }
        var_s1 += 1;
        var_s0 += 0x40;
    } while (var_s1 < 0x16);
}
