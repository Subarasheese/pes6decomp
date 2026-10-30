/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00115FF8(int, int, void *, void *, void *);
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern char D_00538230[];
extern void *D_00538234;
extern void *D_00538238;
extern void *D_0053823C;

s32 func_00218590(void *arg0) {
    s16 temp_a0;
    s16 temp_a1;
    s32 var_a0;
    s32 var_v0;
    void *temp_a2;
    void *temp_a3;
    void *temp_a4;

    temp_a1 = M2C_FIELD(arg0, s16 *, 0xE);
    temp_a2 = arg0 + 0x24;
    temp_a3 = arg0 + 0x28;
    temp_a4 = arg0 + 0x2C;
    var_v0 = 0;
    temp_a0 = M2C_FIELD(arg0, s16 *, 0xC);
    (*(s32 *)D_00538228) = 0;
    (*(s32 *)D_0053822C) = (s32) temp_a0;
    (*(s32 *)D_00538230) = (s32) temp_a1;
    D_00538234 = temp_a2;
    D_00538238 = temp_a3;
    D_0053823C = temp_a4;
    if ((temp_a0 != -1) && (temp_a1 != -1)) {
        var_v0 = func_00115FF8((s32) temp_a0, (s32) temp_a1, temp_a2, temp_a3, temp_a4);
    }
    var_a0 = 0;
    (*(s32 *)D_00538224) = 0;
    if (var_v0 == 0) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        var_a0 = -0x7F;
    }
    return var_a0;
}
