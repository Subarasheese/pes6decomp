/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00985C70(void);
void *func_009F41A0(s32);                           /* extern */
s32 func_009F4250(s32);                             /* extern */
extern char D_00A03670[];

M2C_UNK *func_009F5570(s32 arg0) {
    void *var_s0;
    void *var_s1;

    var_s1 = NULL;
    var_s0 = func_009F41A0(func_00985C70());
    if ((var_s0 != NULL) && (func_009F4250(func_00985C70()) != 0)) {
        var_s0 = NULL;
    }
    if ((var_s0 != NULL) && (arg0 >= 0) && ((u32) arg0 < (u32) M2C_FIELD(var_s0, u32 *, 4))) {
        var_s1 = var_s0 + (arg0 * 0x48) + 0x4C;
    }
    if (var_s1 != NULL) {
        M2C_FIELD(var_s1, s8 *, 0x44) = 0;
        return var_s1 + 0x14;
    }
    return ((void *)D_00A03670);
}
