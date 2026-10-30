/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
M2C_UNK func_00985AE0(M2C_UNK *, s32);              /* extern */
s32 func_009F4250(s32);                             /* extern */
s32 func_009F4E10(s32);                             /* extern */
extern char D_00A7E290[];

void func_009F8AF0(void) {
    s32 var_s0;

    var_s0 = func_009F4E10(func_00985C70());
    if ((var_s0 != 0) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0 = 0;
    }
    if (var_s0 != 0) {
        func_00985AE0(((void *)D_00A7E290), var_s0 + 0xC);
    }
}
