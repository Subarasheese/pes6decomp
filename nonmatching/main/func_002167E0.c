/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00116508(int, int);
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern char D_00538230[];

s32 func_002167E0(void *arg0) {
    s16 temp_a1;
    s16 temp_a3;
    s32 var_a0;

    temp_a3 = M2C_FIELD(arg0, s16 *, 0xC);
    temp_a1 = M2C_FIELD(arg0, s16 *, 0xE);
    (*(s32 *)D_00538228) = 0;
    (*(s32 *)D_0053822C) = (s32) temp_a3;
    (*(s32 *)D_00538230) = (s32) temp_a1;
    var_a0 = 0;
    (*(s32 *)D_00538224) = 0;
    if (func_00116508((s32) temp_a3, (s32) temp_a1) == 0) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        var_a0 = -0x7F;
    }
    return var_a0;
}
