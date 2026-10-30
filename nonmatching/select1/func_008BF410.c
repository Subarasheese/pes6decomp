/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s8 *, M2C_UNK, M2C_UNK);      /* extern */
extern char D_00510FD0[];
extern char D_008D8C00[];
extern char D_008E49B0[];
extern char D_008E49BC[];

void func_008BF410(void) {
    M2C_UNK *var_a5;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_a2;
    s32 var_a2;
    s32 var_a3;
    s8 *var_a1;
    s8 *var_a4;

    func_001C48E8(((void *)D_008E49B0), 0, 0x2CD0);
    var_a2 = 0;
    (*(s8 *)D_008E49B0) = 0;
    var_a1 = ((void *)D_008E49B0);
    do {
        M2C_FIELD(var_a1, s32 *, 0x18) = 1;
        var_a2 += 5;
        M2C_FIELD(var_a1, s32 *, 0x1C0) = 1;
        M2C_FIELD(var_a1, s32 *, 0x368) = 1;
        M2C_FIELD(var_a1, s32 *, 0x510) = 1;
        M2C_FIELD(var_a1, s32 *, 0x6B8) = 1;
        var_a1 += 0x848;
    } while (var_a2 < 0xA);
    var_a3 = 0;
    var_a5 = ((void *)D_008D8C00);
    var_a4 = ((void *)D_008E49B0);
    do {
        temp_a2 = M2C_FIELD(var_a5, s16 *, 0);
        var_a3 += 1;
        temp_a1 = M2C_FIELD(var_a5, s16 *, 4);
        temp_a0 = M2C_FIELD(var_a5, s16 *, 8);
        M2C_FIELD(var_a4, s16 *, 0xC) = temp_a2;
        M2C_FIELD(var_a4, s16 *, 0xE) = temp_a2;
        M2C_FIELD(var_a4, s16 *, 0x10) = temp_a1;
        M2C_FIELD(var_a4, s16 *, 0x12) = temp_a1;
        M2C_FIELD(var_a4, s16 *, 0x14) = temp_a0;
        M2C_FIELD(var_a4, s16 *, 0x16) = temp_a0;
        M2C_FIELD(var_a4, s32 *, 0x18) = (s32) M2C_FIELD(var_a5, s32 *, 0xC);
        M2C_FIELD(var_a4, s8 *, 0x1C) = (s8) M2C_FIELD(var_a5, s8 *, 0x10);
        M2C_FIELD(var_a4, s8 *, 0x1D) = (s8) M2C_FIELD(var_a5, s8 *, 0x11);
        var_a5 += 0x1A8;
        var_a4 += 0x1A8;
    } while (var_a3 < 0xA);
    if ((*(s32 *)D_00510FD0) != 4) {
        (*(s16 *)D_008E49BC) = 1;
        return;
    }
    (*(s16 *)D_008E49BC) = 0;
}
