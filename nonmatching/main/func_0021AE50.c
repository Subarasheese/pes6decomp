/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00116BB0(int, int, void *);
extern char D_003D4538[];
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern char D_00538230[];
extern M2C_UNK *D_00538234;

s32 func_0021AE50(void *arg0) {
    s16 temp_a0;
    s16 temp_a1;
    s32 var_a0;

    temp_a1 = M2C_FIELD(arg0, s16 *, 0xE);
    temp_a0 = M2C_FIELD(arg0, s16 *, 0xC);
    (*(s32 *)D_00538228) = 0;
    (*(s32 *)D_0053822C) = (s32) temp_a0;
    (*(s32 *)D_00538230) = (s32) temp_a1;
    D_00538234 = ((void *)D_003D4538);
    var_a0 = 0;
    (*(s32 *)D_00538224) = 0;
    if (func_00116BB0((s32) temp_a0, (s32) temp_a1, ((void *)D_003D4538)) == 0) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        var_a0 = -0x7F;
    }
    return var_a0;
}
