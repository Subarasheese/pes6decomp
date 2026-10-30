/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001159C0(s16, s16, void *, s16, s32, s32, void *); /* extern */
extern void *D_00538200;
extern char D_00538204[];
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern char D_00538230[];
extern void *D_00538234;

s32 func_0021B5B0(void *arg0) {
    s16 sp2C;
    s16 sp2E;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_v1;
    s32 var_a0;
    s32 var_a4;
    s32 var_a5;
    s32 var_v0;
    void *temp_a2;
    void *var_a6;

    var_a6 = NULL;
    temp_v1 = M2C_FIELD(arg0, s16 *, 0xC);
    temp_a2 = arg0 + 0x38;
    temp_a1 = M2C_FIELD(arg0, s16 *, 0xE);
    var_a4 = (*(s32 *)D_00538204);
    sp2C = M2C_FIELD(arg0, s16 *, 0xC);
    sp2E = M2C_FIELD(arg0, s16 *, 0xE);
    if (var_a4 > 0) {
        var_a6 = D_00538200;
    }
    var_a5 = 0;
    if (D_00538200 != NULL) {
        var_a5 = var_a4;
    }
    if (sp2C != -1) {
        temp_a0 = sp2E;
        if (temp_a0 != -1) {
            var_a4 = 0;
            if (var_a5 > 0) {
loop_6:
                if ((M2C_FIELD(var_a6, s16 *, 2) != temp_a0) || (M2C_FIELD(var_a6, s16 *, 0) != sp2C)) {
                    var_a4 += 1;
                    var_a6 += 0x10;
                    if (var_a4 < var_a5) {
                        goto loop_6;
                    }
                }
            }
        }
    }
    (*(s32 *)D_00538228) = 0;
    (*(s32 *)D_0053822C) = (s32) temp_v1;
    (*(s32 *)D_00538230) = (s32) temp_a1;
    D_00538234 = temp_a2;
    var_v0 = 0;
    if ((temp_v1 != -1) && (temp_a1 != -1)) {
        var_v0 = func_001159C0(temp_v1, temp_a1, temp_a2, sp2C, var_a4, var_a5, var_a6);
    }
    var_a0 = 0;
    (*(s32 *)D_00538224) = 0;
    if (var_v0 == 0) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        var_a0 = -0x7F;
    }
    return var_a0;
}
