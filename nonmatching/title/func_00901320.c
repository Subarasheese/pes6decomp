/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ED8F0(void *, s32);
extern s32 func_001B4570(void);
s32 func_00900E20();                                /* extern */
extern void *D_009025F0;
extern char D_009025F8[];
extern char D_009025FC[];
extern char D_00902600[];

s32 func_00901320(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v1;

    temp_s0 = func_00900E20();
    if (D_009025F0 != NULL) {
        var_a0 = (*(s32 *)D_009025F8);
        if ((*(s32 *)D_009025FC) >= var_a0) {
            if (var_a0 < (*(s32 *)D_009025FC)) {
                var_a0 += (*(s32 *)D_00902600);
                if ((*(s32 *)D_009025FC) < var_a0) {
                    goto block_8;
                }
            }
        } else {
            var_a0 -= (*(s32 *)D_00902600);
            if (var_a0 < (*(s32 *)D_009025FC)) {
block_8:
                var_a0 = (*(s32 *)D_009025FC);
            }
        }
        (*(s32 *)D_009025F8) = var_a0;
        func_001ED8F0(D_009025F0, var_a0 & 0xFF);
    }
    temp_v0 = func_001B4570();
    var_v1 = temp_s0 != 0;
    if (var_v1 != 0) {
        var_v1 = temp_v0 != 0;
    }
    return var_v1;
}
