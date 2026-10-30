/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
extern void func_00B27430(u32);
M2C_UNK func_009A06A0();                            /* extern */
s32 func_00B82360(M2C_UNK);                         /* extern */
extern char D_00591DB4[];
extern char D_00591EF6[];
extern char D_00591EF7[];
extern char D_00591F12[];
extern char D_00591F24[];
extern M2C_UNK *D_00C9A710;
extern char D_00C9A91C[];
extern char D_00C9A91D[];
extern M2C_UNK func_00B7FE70;
extern M2C_UNK func_00B80480;

void func_00B806D0(void) {
    M2C_UNK *var_a0;
    s32 var_s0;

    (*(s8 *)D_00591F12) = 0;
    (*(s8 *)D_00591DB4) = 0;
    func_00B27430(1U);
    if (func_0017F900() != 0) {
        var_s0 = 0;
        if ((((*(u8 *)D_00591EF6) != 0) || ((*(u8 *)D_00591EF7) != 0)) && ((*(u8 *)D_00591F24) != 7) && (func_00B82360(7) == 1)) {
            var_s0 = 1;
        }
        if (var_s0 != 0) {
            (*(s8 *)D_00C9A91C) = 0;
            (*(s8 *)D_00C9A91D) = 0;
            var_a0 = &func_00B80480;
        } else {
            func_009A06A0();
            var_a0 = &func_00B7FE70;
        }
        D_00C9A710 = var_a0;
    }
}
