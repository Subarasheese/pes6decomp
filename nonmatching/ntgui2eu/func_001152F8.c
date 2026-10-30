/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001169EC(M2C_UNK);                     /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F89D0[];
extern char D_005F8A28[];
extern void *D_006024A8;

void func_001152F8(void *arg0, u64 arg1) {
    s32 temp_a1;
    s32 temp_a6;
    s32 temp_v1;
    s32 var_a3;
    s32 var_a4;
    s32 var_v1;
    u16 temp_a2;

    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F89D0), 0x1CC, ((void *)D_005F8A28));
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xE4);
    if ((temp_v1 != 0) && (temp_v1 != 2) && (temp_v1 != 3) && (temp_a2 = M2C_FIELD(D_006024A8, u16 *, 0), temp_a1 = arg1 & 0xFFFF, var_v1 = (arg1 >> 0x20) & 0xFFFF & 0xFFFF, temp_a6 = (arg1 >> 0x30) & 0xFFFF, var_a3 = (arg1 >> 0x10) & 0xFFFF & 0xFFFF, var_a4 = temp_a1 & 0xFFFF, (temp_a2 != 0))) {
        if (var_a3 & 0xF0) {
            var_a3 &= 0xFFF;
            var_a4 &= 0xFFF;
            var_v1 &= 0xFFF;
        }
        if (M2C_FIELD(D_006024A8, u8 *, 1) != 0) {
            if (var_v1 & 0x40) {
                M2C_FIELD(D_006024A8, u8 *, 1) = 0U;
                M2C_FIELD(D_006024A8, M2C_UNK (**)(M2C_UNK, s32, u16, s32, s32, void *, s32), 0x24)(0, temp_a1, temp_a2, var_a3, var_a4, D_006024A8, temp_a6);
                M2C_FIELD(arg0, M2C_UNK (**)(void *, M2C_UNK), 0x3C)(arg0, 1);
                M2C_FIELD(arg0, s32 *, 0x4C) = 0;
                func_001169EC(6);
            }
        } else {
            M2C_FIELD(arg0, M2C_UNK (**)(void *, s32, s32, s32, s32, void *, s32), 0x14)(arg0, var_v1, temp_a6, var_a3, var_a4, D_006024A8, temp_a6);
        }
    }
}
