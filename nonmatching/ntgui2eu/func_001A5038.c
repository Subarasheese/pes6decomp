/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019AE10(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0019BC68(M2C_UNK);                     /* extern */
s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */
M2C_UNK func_001A5008(M2C_UNK);                     /* extern */
M2C_UNK func_001A5018(s32);                         /* extern */
M2C_UNK func_001A5028(M2C_UNK);                     /* extern */
M2C_UNK func_001A6308();                            /* extern */
M2C_UNK func_001AE7D8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_005CBB98[];
extern char D_01204FC0[];
extern M2C_UNK func_001A55D8;

s32 func_001A5038(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s0_2;
    s32 var_v0;
    void **var_s0;
    void *var_v1;

    if (M2C_FIELD(((void *)D_005CBB98), s32 *, 8) >= 0) {
        return 0x80008001;
    }
    M2C_FIELD(((void *)D_005CBB98), s64 *, -0x4468) = 0;
    M2C_FIELD(((void *)D_005CBB98), s32 *, 0x10) = 0;
    func_001AE7D8(((void *)D_01204FC0), 0, 0x2000);
    M2C_FIELD(((void *)D_005CBB98), M2C_UNK **, 0x14) = ((void *)D_01204FC0);
    var_v1 = ((void *)D_01204FC0) + 0x2000;
    var_v0 = 0x7F;
    var_s0 = ((void *)D_01204FC0) + 0x1FC0;
    do {
        *var_s0 = var_v1;
        var_v0 -= 1;
        var_s0 -= 0x40;
        var_v1 -= 0x40;
    } while (var_v0 >= 0);
    M2C_FIELD((((void *)D_01204FC0) + 0x4FC0), s32 *, 0x1FC0) = 0;
    func_001A6308();
    temp_v0 = func_0019AE10(0xB, &func_001A55D8, 0, 0);
    if (temp_v0 >= 0) {
        M2C_FIELD((((void *)D_005CBB98) - 0x4468), s32 *, 8) = temp_v0;
        temp_s1 = func_001A4728();
        var_s0_2 = (*(s32 *)0x10001010 & 0xFFFFFFFC) | arg0 | 0x300;
        if (!(var_s0_2 & 0x80)) {
            var_s0_2 |= 0xC80;
            func_001A5008(0);
            func_001A5028(0xFFFF);
        }
        func_001A5018(var_s0_2);
        func_0019BC68(0xB);
        if (temp_s1 != 0) {
            func_001A4778();
        }
        return 0;
    }
    return 0x80009021;
}
