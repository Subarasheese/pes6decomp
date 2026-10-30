/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 *func_008472D0(u8, void *, M2C_UNK *, void *, s32, s32); /* extern */
M2C_UNK func_008581E0(s16, M2C_UNK);                /* extern */
extern char D_00591A90[];

s32 func_00852320(void *arg0) {
    M2C_UNK *var_a3;
    s32 var_a5;
    s32 var_a6;
    u8 temp_a1_2;
    u8 temp_v1;
    void *temp_a1;
    void *temp_a2;
    void *temp_v1_2;
    void *var_a4;

    var_a6 = 0;
    var_a4 = arg0;
    var_a3 = ((void *)D_00591A90);
    do {
        var_a5 = 0;
loop_2:
        temp_a2 = var_a4 + var_a5;
        temp_v1 = M2C_FIELD(temp_a2, u8 *, 4);
        temp_a1 = var_a3 + var_a5;
        var_a5 += 5;
        M2C_FIELD(temp_a1, u8 *, 0x27) = temp_v1;
        M2C_FIELD(temp_a1, u8 *, 0x28) = (u8) M2C_FIELD(temp_a2, u8 *, 5);
        M2C_FIELD(temp_a1, u8 *, 0x29) = (u8) M2C_FIELD(temp_a2, u8 *, 6);
        M2C_FIELD(temp_a1, u8 *, 0x2A) = (u8) M2C_FIELD(temp_a2, u8 *, 7);
        M2C_FIELD(temp_a1, u8 *, 0x2B) = (u8) M2C_FIELD(temp_a2, u8 *, 8);
        if (var_a5 < 6) {
            goto loop_2;
        }
        temp_v1_2 = var_a3 + var_a5;
        temp_a1_2 = M2C_FIELD((var_a4 + var_a5), u8 *, 4);
        var_a6 += 1;
        var_a4 += 0xB;
        var_a3 += 0x8B;
        M2C_FIELD(temp_v1_2, u8 *, 0x27) = temp_a1_2;
    } while (var_a6 < 2);
    if (M2C_FIELD(arg0, u8 *, 3) != 0) {
        func_008581E0(*func_008472D0(temp_a1_2, temp_a2, var_a3, var_a4, var_a5, var_a6), 3);
    }
    return 0;
}
