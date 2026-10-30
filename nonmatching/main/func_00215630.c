/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001161E8(int, int, void *, int, int, void *);
extern void * func_00121430(void *);
M2C_UNK func_001C7F58(M2C_UNK *, void *);           /* extern */
s32 func_001C80F0(void *);                          /* extern */
extern char D_00537B60[];
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern char D_00538230[];
extern M2C_UNK *D_00538234;
extern char D_00538238[];
extern char D_0053823C[];
extern void *D_00538240;

s32 func_00215630(void *arg0) {
    s16 temp_s2;
    s16 temp_s3;
    s32 temp_s0;
    s32 temp_s6;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_s1;

    temp_s3 = M2C_FIELD(arg0, s16 *, 0xE);
    temp_s2 = M2C_FIELD(arg0, s16 *, 0xC);
    temp_s1 = M2C_FIELD(arg0, void **, 0xBC);
    temp_s0 = M2C_FIELD(arg0, s32 *, 0xC0);
    temp_s6 = M2C_FIELD(arg0, s32 *, 0x14);
    if (func_001C80F0(arg0 + 0x38) != 0) {
        func_001C7F58(((void *)D_00537B60), arg0 + 0x38);
        func_00121430(((void *)D_00537B60));
        (*(s32 *)D_00538228) = 0;
        (*(s32 *)D_0053822C) = (s32) temp_s2;
        (*(s32 *)D_00538230) = (s32) temp_s3;
        D_00538234 = ((void *)D_00537B60);
        (*(s32 *)D_00538238) = temp_s6;
        (*(s32 *)D_0053823C) = temp_s0;
        D_00538240 = temp_s1;
        var_v0_2 = 0;
        if ((temp_s2 != -1) && (temp_s3 != -1)) {
            var_v0_2 = func_001161E8((s32) temp_s2, (s32) temp_s3, ((void *)D_00537B60), temp_s6, temp_s0, temp_s1);
        }
        var_a0 = 0;
        (*(s32 *)D_00538224) = 0;
        if (var_v0_2 != 0) {

        } else {
            M2C_FIELD(arg0, s32 *, 8) = 0;
            var_a0 = -0x7F;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = temp_s0;
        var_v0 = var_a0;
    } else {
        var_v0 = -0x7E;
    }
    return var_v0;
}
