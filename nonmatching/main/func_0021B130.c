/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001161E8(int, int, void *, int, int, void *);
extern void * func_00121430(void *);
M2C_UNK func_001C7F58(M2C_UNK *, void *, s32, void *, void *); /* extern */
extern char D_00537B60[];
extern char D_00537C00[];
extern void *D_00538200;
extern char D_00538204[];
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern char D_00538230[];
extern M2C_UNK *D_00538234;
extern char D_00538238[];
extern char D_0053823C[];
extern M2C_UNK *D_00538240;

s32 func_0021B130(void *arg0, M2C_UNK arg1, s32 arg2) {
    s16 sp5C;
    s16 sp5E;
    s16 temp_s1;
    s16 temp_s2;
    s16 temp_v1;
    s32 temp_a3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    void *var_a3;
    void *var_a4;

    var_a2 = arg2;
    var_a4 = NULL;
    temp_s2 = M2C_FIELD(arg0, s16 *, 0xE);
    temp_s1 = M2C_FIELD(arg0, s16 *, 0xC);
    sp5C = M2C_FIELD(arg0, s16 *, 0xC);
    sp5E = M2C_FIELD(arg0, s16 *, 0xE);
    if ((*(s32 *)D_00538204) > 0) {
        var_a4 = D_00538200;
    }
    var_a3 = NULL;
    var_a1 = 0;
    if (D_00538200 != NULL) {
        var_a1 = (*(s32 *)D_00538204);
    }
    if (sp5C != -1) {
        temp_v1 = sp5E;
        if (temp_v1 != -1) {
            var_a2 = 0;
            if (var_a1 > 0) {
loop_6:
                if ((M2C_FIELD(var_a4, s16 *, 2) == temp_v1) && (M2C_FIELD(var_a4, s16 *, 0) == sp5C)) {
                    var_a3 = var_a4;
                } else {
                    var_a2 += 1;
                    var_a4 += 0x10;
                    if (var_a2 >= var_a1) {

                    } else {
                        goto loop_6;
                    }
                }
            }
        }
    }
    var_a0 = 0;
    if (M2C_FIELD(var_a3, s16 *, 4) == 3) {
        var_a0 = 1;
    }
    if (var_a0 == 0) {
        func_001C7F58(((void *)D_00537B60), arg0 + 0x38, var_a2, var_a3, var_a4);
        func_00121430(((void *)D_00537B60));
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x14);
        var_v0_2 = 0;
        (*(s32 *)D_00538228) = 0;
        (*(s32 *)D_0053822C) = (s32) temp_s1;
        (*(s32 *)D_00538230) = (s32) temp_s2;
        D_00538234 = ((void *)D_00537B60);
        (*(s32 *)D_00538238) = temp_a3;
        (*(s32 *)D_0053823C) = 0x18;
        D_00538240 = ((void *)D_00537C00);
        if ((temp_s1 != -1) && (temp_s2 != -1)) {
            var_v0_2 = func_001161E8((s32) temp_s1, (s32) temp_s2, ((void *)D_00537B60), temp_a3, 0x18, ((void *)D_00537C00));
        }
        var_a0_2 = 0;
        (*(s32 *)D_00538224) = 0;
        if (var_v0_2 != 0) {

        } else {
            M2C_FIELD(arg0, s32 *, 8) = 0;
            var_a0_2 = -0x7F;
        }
        var_v0 = var_a0_2;
        M2C_FIELD(arg0, s32 *, 0x18) = 0x18;
    } else {
        var_v0 = -0x7E;
    }
    return var_v0;
}
