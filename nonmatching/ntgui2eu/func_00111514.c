/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00111454(s32, s32);                        /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8648[];
extern char D_005F86B0[];
extern char D_005F86C0[];
extern void *D_006024A8;

void func_00111514(void *arg0) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    if (M2C_FIELD(arg0, s32 *, 0x10) <= 0) {
        func_001AD620(((void *)D_005F8648), 0x56, ((void *)D_005F86C0));
    }
    temp_a1 = M2C_FIELD(arg0, s32 *, 0);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    temp_v1 = temp_v0 * 8;
    if (temp_a1 != 0) {
        var_v0 = func_00111454(temp_a1, temp_v1);
    } else {
        var_v0 = M2C_FIELD(D_006024A8, s32 (**)(M2C_UNK, s32), 0x104)(0x10, temp_v1);
    }
    M2C_FIELD(arg0, s32 *, 0) = var_v0;
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        func_001AD620(((void *)D_005F8648), 0x56, ((void *)D_005F86B0));
    }
}
