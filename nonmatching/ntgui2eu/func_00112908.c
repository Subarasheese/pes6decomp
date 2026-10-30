/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00112A90(s32, void *, s32, s32, M2C_UNK, void *, s32); /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8620[];
extern char D_005F8648[];
extern char D_005F8700[];
extern char D_005F8820[];
extern char D_00602480[];
extern s32 D_00602488;
extern s32 D_0060248C;
extern s32 D_00602490;
extern void *D_006024A8;

void func_00112908(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_a3;
    s32 temp_a6;
    s32 var_s2;
    void *temp_a2;
    void *temp_a3_2;
    void *temp_a5;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s1;

    if (arg0 == 0) {
        func_001AD620(((void *)D_005F8648), 0x219, ((void *)D_00602480));
    }
    if (arg1 == NULL) {
        func_001AD620(((void *)D_005F8648), 0x21A, ((void *)D_005F8700));
    }
    temp_v0 = D_006024A8;
    if (arg2 == 0) {
        func_001AD620(((void *)D_005F8648), 0x21B, ((void *)D_005F8820));
    }
    if (M2C_FIELD(temp_v0, s32 (**)(), 0x30)() == 0) {
        temp_a5 = arg1 + 0x90;
        temp_a6 = M2C_FIELD(arg1, s32 *, 0x6C);
        temp_a3 = M2C_FIELD(arg1, u8 *, 0x83) << 0x18;
        var_s1 = temp_a5;
        var_s2 = 0;
        func_00112A90(temp_a6 + (M2C_FIELD(((M2C_FIELD(arg1, s32 *, 0x48) * 0x198) + M2C_FIELD(arg1, s32 *, 0x78)), u16 *, 0x180) * 0x10), temp_a5, M2C_FIELD(arg1, s32 *, 0xE0), temp_a3, 0x808080, temp_a5, temp_a6);
        D_00602488 = M2C_FIELD(arg1, s32 *, 0x48);
        D_0060248C = M2C_FIELD(arg1, s32 *, 0x84);
        D_00602490 = M2C_FIELD(arg1, s32 *, 0x88);
        M2C_FIELD(D_006024A8, M2C_UNK (**)(s32, s32), 0x118)(arg0, arg2);
        temp_v0_2 = D_006024A8;
        do {
            temp_a2 = var_s1;
            var_s1 += 0x10;
            temp_a3_2 = ((void *)D_005F8620) + (var_s2 * 8);
            var_s2 += 1;
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(s32, s32, void *, void *, s32), 0x11C)(arg0, temp_a3 | 0x808080, temp_a2, temp_a3_2, arg2);
        } while (var_s2 < 4);
    }
}
