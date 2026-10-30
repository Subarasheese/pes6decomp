/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009832C0(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_00A0C770(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_00BF7550(M2C_UNK *);                       /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CBCDE2[];

void func_00BFE750(void) {
    M2C_UNK *var_s1;
    s32 var_s0;
    u8 temp_a0;

    var_s1 = ((void *)Pes6MatchPlayers);
    var_s0 = 0;
    do {
        if (M2C_FIELD(M2C_FIELD(var_s1, void **, 4), u8 *, 0x2C) != 0) {
            if ((M2C_FIELD(var_s1, u8 *, 0) == 0) && (M2C_FIELD(var_s1, u8 *, 0x16) != 0xE1)) {
                M2C_FIELD(var_s1, u8 *, 0x16) = 0xE1U;
                M2C_FIELD(var_s1, s16 *, 0x18) = 0xD;
            } else {
                if (func_00BF7550(var_s1) != 0) {
                    if ((func_009B3070(M2C_FIELD(var_s1, u16 *, 0x26), M2C_FIELD(var_s1, u16 *, 0x28)) & 0xFFFF) < 0x4001) {
                        if (func_00A0C770(var_s1, 0x300) != 0) {
                            goto block_8;
                        }
                        goto block_11;
                    }
                    goto block_8;
                }
block_8:
                temp_a0 = M2C_FIELD(var_s1, u8 *, 0x16);
                if (temp_a0 != 0xA3) {
                    if (temp_a0 == 0x82) {
                        goto block_11;
                    }
                } else {
block_11:
                    if (M2C_FIELD(var_s1, u8 *, 0) == (*(u8 *)D_00CBCDE2)) {
                        func_009832C0(var_s1, 0x37);
                        M2C_FIELD(var_s1, u8 *, 0x16) = 0x32U;
                    } else {
                        func_009832C0(var_s1, 0x37);
                        M2C_FIELD(var_s1, u8 *, 0x16) = 0x48U;
                    }
                    M2C_FIELD(var_s1, s16 *, 0x18) = 0;
                }
            }
        }
        var_s0 += 1;
        var_s1 += 0x240;
    } while (var_s0 < 0x17);
}
