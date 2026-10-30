/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s8 func_00221D10(M2C_UNK, s32, M2C_UNK);            /* extern */
extern char D_008A5F70[];
extern char D_008AB4D6[];
extern char D_008AB552[];

s32 func_00841EA0(void) {
    s32 var_s0;

    func_001C48E8(((void *)D_008AB4D6), 0, 0x7C);
    func_001C48E8(((void *)D_008AB552), 0, 0x7C);
    var_s0 = 0;
    do {
        M2C_FIELD((((void *)D_008A5F70) + (var_s0 * 2)), u16 *, 0x556A) = Pes6Team_GetPlayerId(0x35, var_s0 & 0xFF, 0);
        M2C_FIELD((((void *)D_008A5F70) + var_s0), s8 *, 0x55BA) = func_00221D10(0x35, var_s0 & 0xFF, 0);
        var_s0 += 1;
    } while (var_s0 < 0x17);
    return 1;
}
