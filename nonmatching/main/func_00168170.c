/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00166600(void *, s32);
extern s16 func_00166740(void *);
M2C_UNK func_001664A0(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_00166680(M2C_UNK *, s16);              /* extern */
extern char D_0037AC98[];
extern char D_0037ACA8[];

void func_00168170(s32 arg0) {
    M2C_UNK *var_s1;
    s32 temp_a1;
    s32 var_a1;
    s32 var_s0;
    s32 var_s2;

    (*(s32 *)D_0037AC98) = arg0;
    var_s1 = ((void *)D_0037ACA8);
    var_s2 = 0xF;
    do {
        if (M2C_FIELD(var_s1, s8 *, 0) == 1) {
            var_s0 = 0;
            if (M2C_FIELD(var_s1, s8 *, 3) > 0) {
                var_a1 = 0;
                do {
                    temp_a1 = var_s0;
                    var_s0 += 1;
                    func_001664A0(var_s1, temp_a1, func_00166600(var_s1, var_a1));
                    var_a1 = var_s0;
                } while (var_s0 < M2C_FIELD(var_s1, s8 *, 3));
            }
            func_00166680(var_s1, func_00166740(var_s1));
        }
        var_s2 -= 1;
        var_s1 += 0xC8;
    } while (var_s2 >= 0);
}
