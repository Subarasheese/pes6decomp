/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00113770(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00115720(void *);                          /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8648[];
extern char D_005F8700[];
extern void *D_006024A8;

void func_00113374(void *arg0) {
    M2C_UNK var_a1;
    M2C_UNK var_a2;
    s32 temp_v1;
    u8 var_v0;

    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x416, ((void *)D_005F8700));
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x44);
    switch (temp_v1) {                              /* irregular */
    case 0:
        var_a1 = 1;
        var_a2 = 4;
        var_v0 = M2C_FIELD(arg0, u8 *, 0x52) | 6;
block_11:
        M2C_FIELD(arg0, u8 *, 0x52) = var_v0;
        func_00113770(arg0, var_a1, var_a2);
        break;
    case 1:
        var_a1 = 0xB;
        var_a2 = 2;
        var_v0 = M2C_FIELD(arg0, u8 *, 0x52) | 4;
        goto block_11;
    default:
        M2C_FIELD(arg0, u8 *, 0x52) = 0U;
        break;
    }
    M2C_FIELD(D_006024A8, M2C_UNK (**)(s32), 0xC)(func_00115720(arg0) & 0xFF);
}
