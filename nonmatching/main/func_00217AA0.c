/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00121430(void *);
extern int func_00115898(int, int, void *, int);
s32 func_001C7E10(void *, M2C_UNK *);               /* extern */
M2C_UNK func_001C7F58(M2C_UNK *, s32);              /* extern */
extern char D_003A9190[];
extern char D_003A91B0[];
extern char D_003A91B4[];
extern char D_003A91B6[];
extern char D_00537B60[];
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern char D_00538230[];
extern M2C_UNK *D_00538234;
extern char D_00538238[];
extern char D_00538250[];
extern char D_0053825E[];
extern M2C_UNK func_002177C0;

s32 func_00217AA0(void *arg0) {
    s16 temp_s2;
    s16 temp_s3;
    s32 *var_a1;
    s32 *var_a2;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a3;
    s32 var_a4;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;

    temp_s3 = M2C_FIELD(arg0, s16 *, 0xE);
    temp_s2 = M2C_FIELD(arg0, s16 *, 0xC);
    func_001C7F58(((void *)D_00537B60), arg0 + 0x38);
    func_00121430(((void *)D_00537B60));
    func_00121430(((void *)D_00537B60));
    if ((func_001C7E10(arg0 + 0x58, ((void *)D_003A9190)) == 0) && (M2C_FIELD(arg0, s16 *, 0xE) == (*(s16 *)D_003A91B6)) && (M2C_FIELD(arg0, s16 *, 0xC) == (*(s16 *)D_003A91B4))) {
        var_s0 = 3;
    } else {
        var_s0 = 1;
    }
    if (((*(s16 *)D_0053825E) == (*(s16 *)D_003A91B6)) && (M2C_FIELD(((void *)D_00538250), s16 *, 0xC) == (*(s16 *)D_003A91B4))) {
        if ((*(s32 *)D_003A91B0) < 0) {
            goto block_7;
        }
        if (func_001C7E10(arg0 + 0x58, ((void *)D_003A9190)) == 0) {
            var_v0 = 1;
        } else {
block_7:
            goto block_8;
        }
    } else {
block_8:
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        var_a4 = 0;
        M2C_FIELD(arg0, s32 *, 0x84) = (s32) (*(s32 *)D_003A91B0);
        var_a2 = M2C_FIELD(arg0, s32 **, 0xA8);
        temp_v1 = M2C_FIELD(arg0, s32 *, 0xAC);
        temp_a0 = *var_a2;
        var_a3 = 0;
        if (temp_a0 != temp_v1) {
            var_a1 = var_a2;
            do {
                var_a1 += 4;
                var_a4 += 1;
            } while (*var_a1 != temp_v1);
        }
        if (temp_a0 != &func_002177C0) {
            do {
                var_a2 += 4;
                var_a3 += 1;
            } while (*var_a2 != &func_002177C0);
        }
        var_a0 = var_a3 - var_a4;
    } else {
        (*(s32 *)D_00538228) = 0;
        (*(s32 *)D_0053822C) = (s32) temp_s2;
        (*(s32 *)D_00538230) = (s32) temp_s3;
        D_00538234 = ((void *)D_00537B60);
        (*(s32 *)D_00538238) = var_s0;
        var_v0_2 = 0;
        if ((temp_s2 != -1) && (temp_s3 != -1)) {
            var_v0_2 = func_00115898((s32) temp_s2, (s32) temp_s3, ((void *)D_00537B60), var_s0);
        }
        var_a0 = 0;
        (*(s32 *)D_00538224) = 0;
        if (var_v0_2 != 0) {

        } else {
            M2C_FIELD(arg0, s32 *, 8) = 0;
            var_a0 = -0x7F;
        }
    }
    return var_a0;
}
