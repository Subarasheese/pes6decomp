/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019E030(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */
extern char D_005CA9EC[];
extern char D_011FD4C0[];
extern char D_011FD510[];
extern M2C_UNK func_001943F0;

s32 func_00194438(void) {
    s32 temp_s0;
    s32 var_v1;
    void *var_v0;

    var_v0 = ((void *)D_011FD510) + 0x84;
    var_v1 = 3;
    do {
        M2C_FIELD(var_v0, s32 *, -0x74) = 0;
        var_v1 -= 1;
        M2C_FIELD(var_v0, s32 *, -0x6C) = 0;
        M2C_FIELD(var_v0, s32 *, -0x70) = 0;
        M2C_FIELD(var_v0, s32 *, -4) = 0;
        M2C_FIELD(var_v0, s32 *, 4) = 0;
        M2C_FIELD(var_v0, s32 *, 0) = 0;
        var_v0 += 0x1C;
    } while (var_v1 >= 0);
    M2C_FIELD((void *)0x011FD700, s32 *, 0x10) = 0;
    M2C_FIELD((void *)0x011FD700, s32 *, 0) = 0x10;
    M2C_FIELD((void *)0x011FD700, s32 *, 0x14) = (s32) (*(s32 *)D_005CA9EC);
    if (func_0019EE30(((void *)D_011FD4C0), 1, 0, 0x011FD700, 0x80, 0x011FD700, 0x80, 0, 0) < 0) {
        return 0;
    }
    *(s32 *)0x5CA9E8 = 0;
    temp_s0 = func_001A4728();
    func_0019E030(0x80000019, &func_001943F0, 0);
    if (temp_s0 == 1) {
        func_001A4778();
    }
    return M2C_FIELD((void *)0x011FD700, s32 *, 0xC);
}
