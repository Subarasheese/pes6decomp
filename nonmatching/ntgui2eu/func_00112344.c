/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00112BC4(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8648[];
extern char D_005F8700[];
extern void *D_006024A8;

void func_00112344(void *arg0) {
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    u16 temp_a0_2;
    u16 temp_a4;
    u16 temp_a5;
    u32 var_a7;
    void *temp_s1;
    void *var_a6;

    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x138, ((void *)D_005F8700));
    }
    if (M2C_FIELD(arg0, s32 *, 0x58) != 0) {
        func_00112BC4(arg0, 0, 0);
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x6C);
        temp_s1 = M2C_FIELD(arg0, void **, 0x70);
        if (temp_a0 != 0) {
            M2C_FIELD(D_006024A8, M2C_UNK (**)(s32), 0x108)(temp_a0);
            M2C_FIELD(arg0, s32 *, 0x6C) = 0;
        }
        var_a7 = 0;
        if (M2C_FIELD(arg0, u32 *, 0x60) != 0) {
            var_a6 = temp_s1;
            do {
                temp_a4 = M2C_FIELD(var_a6, u16 *, 4);
                var_a7 += 1;
                temp_a0_2 = M2C_FIELD(var_a6, u16 *, 6);
                temp_a5 = M2C_FIELD(var_a6, u16 *, 0);
                temp_v0 = temp_a4 - 8;
                temp_v1 = temp_a0_2 - 8;
                temp_a3 = temp_a5 - 8;
                M2C_FIELD(var_a6, u16 *, 0) = (u16) ((s32) ((temp_a3 < 0) ? (temp_a5 + 7) : temp_a3) >> 4);
                M2C_FIELD(var_a6, u16 *, 2) = (u16) ((u16) M2C_FIELD(var_a6, u16 *, 2) >> 4);
                M2C_FIELD(var_a6, u16 *, 4) = (u16) (((s32) ((temp_v0 < 0) ? (temp_a4 + 7) : temp_v0) >> 4) + 1);
                M2C_FIELD(var_a6, u16 *, 6) = (u16) (((s32) ((temp_v1 < 0) ? (temp_a0_2 + 7) : temp_v1) >> 4) + 1);
                var_a6 += 8;
            } while (var_a7 < (u32) M2C_FIELD(arg0, u32 *, 0x60));
        }
        M2C_FIELD(arg0, s32 *, 0x58) = 0;
    }
}
