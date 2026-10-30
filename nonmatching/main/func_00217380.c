/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00115C48(int, void *, int);
extern s32 D_003E9A04;
extern s32 D_003E9A08;
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern void *D_00538230;
extern char D_00538234[];

s32 func_00217380(void *arg0) {
    s32 temp_a3;
    s32 var_a0;
    s32 var_s0;
    void *temp_a0;
    void *temp_a1;

    temp_a3 = M2C_FIELD(arg0, s32 *, 0x84);
    temp_a1 = M2C_FIELD(arg0, void **, 0x78);
    var_s0 = M2C_FIELD(arg0, s32 *, 0x80);
    if (D_003E9A08 != 0) {
        temp_a0 = D_003E9A08 + (D_003E9A04 * 0xC);
        if (M2C_FIELD(temp_a0, s32 *, 0) != -1) {
            var_s0 = M2C_FIELD(temp_a0, s32 *, 4);
        }
    }
    (*(s32 *)D_00538228) = 0;
    (*(s32 *)D_0053822C) = temp_a3;
    D_00538230 = temp_a1;
    (*(s32 *)D_00538234) = var_s0;
    var_a0 = 0;
    (*(s32 *)D_00538224) = 0;
    if (func_00115C48(temp_a3, temp_a1, var_s0) == 0) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        var_a0 = -0x7F;
    }
    M2C_FIELD(arg0, s32 *, 0xC4) = var_s0;
    return var_a0;
}
