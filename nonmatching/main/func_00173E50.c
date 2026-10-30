/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void pl2enc_err(void *);
extern char D_003CBA28[];

void func_00173E50(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a3;
    s32 var_v0_2;
    s32 var_v1;
    u32 temp_v1;
    u32 var_v0;

    if (arg0 == NULL) {
        pl2enc_err(((void *)D_003CBA28));
        return;
    }
    temp_v1 = arg1 + 0x7F;
    if ((temp_v1 >= 0xFFU) || (arg2 < -0x7F) || (var_a3 = arg1 - 0x7F, ((arg2 < 0x80) == 0))) {
        pl2enc_err((void *)0x3CBA50);
        return;
    }
    var_v0 = temp_v1;
    if ((s32) temp_v1 < 0) {
        var_v0 = (u32) -(s32) var_v0;
    }
    M2C_FIELD(arg0, u32 *, 0x1C) = var_v0;
    if (var_a3 < 0) {
        var_a3 = 0x7F - arg1;
    }
    var_v0_2 = arg2 + 0x7F;
    var_v1 = arg2 - 0x7F;
    if (var_v0_2 < 0) {
        var_v0_2 = -var_v0_2;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_a3;
    M2C_FIELD(arg0, s32 *, 0x24) = var_v0_2;
    if (var_v1 < 0) {
        var_v1 = 0x7F - arg2;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_v1;
}
