/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001161E8(int, int, void *, int, int, void *);
extern char D_00537C00[];
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern char D_00538230[];
extern void *D_00538234;
extern char D_00538238[];
extern char D_0053823C[];
extern M2C_UNK *D_00538240;

s32 func_002184A0(void *arg0) {
    s16 temp_a1;
    s16 temp_t8;
    s32 temp_a3;
    s32 var_a0;
    s32 var_v0;
    void *temp_a2;

    temp_a1 = M2C_FIELD(arg0, s16 *, 0xE);
    temp_t8 = M2C_FIELD(arg0, s16 *, 0xC);
    temp_a2 = arg0 + 0x38;
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x14);
    var_v0 = 0;
    (*(s32 *)D_00538228) = 0;
    (*(s32 *)D_0053822C) = (s32) temp_t8;
    (*(s32 *)D_00538230) = (s32) temp_a1;
    D_00538234 = temp_a2;
    (*(s32 *)D_00538238) = temp_a3;
    (*(s32 *)D_0053823C) = 1;
    D_00538240 = ((void *)D_00537C00);
    if ((temp_t8 != -1) && (temp_a1 != -1)) {
        var_v0 = func_001161E8((s32) temp_t8, (s32) temp_a1, temp_a2, temp_a3, 1, ((void *)D_00537C00));
    }
    var_a0 = 0;
    (*(s32 *)D_00538224) = 0;
    if (var_v0 == 0) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        var_a0 = -0x7F;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    return var_a0;
}
