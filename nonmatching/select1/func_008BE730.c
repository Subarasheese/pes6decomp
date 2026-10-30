/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_008BDC90();                            /* extern */
M2C_UNK func_008BDF10(s8, s32, M2C_UNK *, M2C_UNK *, s32); /* extern */
extern char D_00510FD0[];
extern char D_008D63A0[];
extern char D_008E1CE0[];
extern char D_008E1CE9[];
extern char D_008E1CEE[];

void func_008BE730(void) {
    M2C_UNK *var_a2;
    M2C_UNK *var_a3;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_v1;
    s32 temp_a1_2;
    s32 var_a4;
    s8 temp_a0_2;

    func_001C48E8(((void *)D_008E1CE0), 0, 0x2CD0);
    var_a4 = 0;
    var_a3 = ((void *)D_008D63A0);
    var_a2 = ((void *)D_008E1CE0);
    do {
        temp_a1 = M2C_FIELD(var_a3, s16 *, 0);
        var_a4 += 1;
        temp_a0 = M2C_FIELD(var_a3, s16 *, 4);
        temp_v1 = M2C_FIELD(var_a3, s16 *, 8);
        M2C_FIELD(var_a2, s16 *, 0xC) = temp_a1;
        M2C_FIELD(var_a2, s16 *, 0xE) = temp_a1;
        M2C_FIELD(var_a2, s16 *, 0x10) = temp_a0;
        M2C_FIELD(var_a2, s16 *, 0x12) = temp_a0;
        M2C_FIELD(var_a2, s16 *, 0x14) = temp_v1;
        M2C_FIELD(var_a2, s16 *, 0x16) = temp_v1;
        temp_a1_2 = M2C_FIELD(var_a3, s32 *, 0xC);
        temp_a0_2 = M2C_FIELD(var_a3, s8 *, 0x10);
        M2C_FIELD(var_a2, s32 *, 0x18) = temp_a1_2;
        M2C_FIELD(var_a2, s8 *, 0x1C) = temp_a0_2;
        M2C_FIELD(var_a2, s8 *, 0x1D) = (s8) M2C_FIELD(var_a3, s8 *, 0x11);
        var_a3 += 0x1A8;
        var_a2 += 0x1A8;
    } while (var_a4 < 0x14);
    func_008BDF10(temp_a0_2, temp_a1_2, var_a2, var_a3, var_a4);
    func_008BDC90();
    if ((*(s32 *)D_00510FD0) != 4) {
        (*(s16 *)D_008E1CEE) = 1;
    } else {
        (*(s16 *)D_008E1CEE) = 0;
    }
    (*(s8 *)D_008E1CE9) = 1;
}
