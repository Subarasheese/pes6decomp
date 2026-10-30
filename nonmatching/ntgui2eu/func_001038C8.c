/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001031C0(void *, M2C_UNK *, M2C_UNK);  /* extern */
extern s32 D_006025AC;
extern s32 D_006025B0;
extern s32 D_006025B4;
extern char D_011ABAF8[];

void func_001038C8(s32 arg0, void **arg1, s32 arg2) {
    M2C_UNK *temp_a1;
    M2C_UNK *var_s2;
    s32 var_s1;
    s32 var_s4;
    void **var_s0;
    void *var_v1;

    var_s1 = 0;
    var_s4 = 0;
    if (arg2 > 0) {
        var_s0 = arg1;
        var_s2 = ((void *)D_011ABAF8);
        var_v1 = *var_s0;
loop_2:
        var_s0 += 4;
        if ((M2C_FIELD(var_v1, s8 *, 0) < 0) || (M2C_FIELD(var_v1, u8 *, 1) == 0)) {
            temp_a1 = var_s2;
            var_s2 += 0x28;
            var_s4 += 1;
            func_001031C0(var_v1, temp_a1, 0xA);
        }
        var_s1 += 1;
        if (var_s1 < arg2) {
            if (var_s1 < 0x12C) {
                var_v1 = *var_s0;
                goto loop_2;
            }
        }
    }
    D_006025AC = arg0;
    D_006025B0 = var_s4;
    D_006025B4 = 0;
}
