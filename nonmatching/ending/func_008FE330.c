/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B37F0(M2C_UNK *);                   /* extern */
extern char Pes6MatchPlayers[];
extern char D_009085D0[];

void func_008FE330(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1_2;
    s32 var_s0_2;
    s32 var_s1;
    void *temp_a1;

    var_s1 = 0;
    var_s0 = ((void *)Pes6MatchPlayers);
    do {
        if ((M2C_FIELD(M2C_FIELD(var_s0, void **, 4), u8 *, 0x2C) != 0) && (M2C_FIELD(var_s0, s32 *, 0x1C) != 0)) {
            func_009B37F0(var_s0);
        }
        var_s1 = (var_s1 + 1) & 0xFF;
        var_s0 += 0x240;
    } while (var_s1 < 0x17);
    var_s0_2 = 0;
    var_s1_2 = ((void *)D_009085D0);
    do {
        if ((M2C_FIELD(M2C_FIELD(var_s1_2, void **, 4), u8 *, 0x2C) != 0) && (M2C_FIELD(var_s1_2, s32 *, 0x1C) != 0)) {
            func_009B37F0(var_s1_2);
        }
        temp_a1 = M2C_FIELD(M2C_FIELD(var_s1_2, void **, 4), void **, 0);
        if ((temp_a1 != NULL) && (M2C_FIELD(temp_a1, s32 *, 0x10) != 0)) {
            M2C_FIELD(temp_a1, u16 *, 0x1F0) = (u16) M2C_FIELD(var_s1_2, u16 *, 0x26);
            M2C_FIELD(M2C_FIELD(M2C_FIELD(var_s1_2, void **, 4), void **, 0), void **, 0x1D8) = (void *) (var_s1_2 + 0xE0);
        }
        var_s0_2 = (var_s0_2 + 1) & 0xFF;
        var_s1_2 += 0x240;
    } while (var_s0_2 < 3);
}
