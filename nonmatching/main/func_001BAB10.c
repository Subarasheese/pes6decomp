/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001BB370(int);
extern int func_001BB430(int);
extern int func_001BB4D0(int);
M2C_UNK func_001BB080(s32);                         /* extern */
extern s32 D_003E9918;
extern char D_00524A50[];

s16 func_001BAB10(s16 arg0, s32 arg1, s32 arg2) {
    s16 var_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_s0;
    void *var_s1;

    var_s2 = -1;
    temp_v0 = func_001BB4D0(D_003E9918);
    if (temp_v0 != 0) {
        func_001BB080(temp_v0);
        temp_v0_2 = func_001BB370(temp_v0);
        if (temp_v0_2 != 0) {
            M2C_FIELD(temp_v0_2, s16 *, 4) = 0;
            M2C_FIELD(temp_v0_2, s32 *, 8) = 0;
            M2C_FIELD(temp_v0_2, s32 *, 0xC) = 0;
            M2C_FIELD(temp_v0_2, s8 *, 2) = 0;
            M2C_FIELD(temp_v0_2, s8 *, 3) = 0;
        }
        var_s2 = M2C_FIELD(temp_v0_2, s16 *, 0);
    }
    if ((var_s2 > 0) && ((u32) var_s2 < 0x281U)) {
        var_s1 = NULL;
        if ((var_s2 > 0) && ((u32) var_s2 < 0x281U)) {
            temp_s0 = ((void *)D_00524A50) + ((var_s2 - 1) << 5);
            if (func_001BB430((s32) (temp_s0 + 0x10)) != D_003E9918) {
                var_s1 = temp_s0;
            }
        }
        if (var_s1 != NULL) {
            M2C_FIELD(var_s1, s16 *, 4) = arg0;
            M2C_FIELD(var_s1, s32 *, 8) = arg2;
            M2C_FIELD(var_s1, s32 *, 0xC) = arg1;
            M2C_FIELD(var_s1, s8 *, 2) = 0;
            M2C_FIELD(var_s1, s8 *, 3) = 0;
        }
    }
    return var_s2;
}
