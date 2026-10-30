/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009832C0(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_00A0C770(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_00BF7550(M2C_UNK *);                       /* extern */
extern char Pes6MatchPlayers[];
extern void *D_0058E5B4;
extern char D_00CBCDE2[];

s32 func_00B7A770(void) {
    s32 var_s1;

    var_s1 = 0;
    if (M2C_FIELD(D_0058E5B4, u8 *, 0x2C) != 0) {
        if ((M2C_FIELD(((void *)Pes6MatchPlayers), u8 *, 0) == 0) && (M2C_FIELD(((void *)Pes6MatchPlayers), u8 *, 0x16) != 0xE1)) {
            M2C_FIELD(((void *)Pes6MatchPlayers), u8 *, 0x16) = 0xE1U;
            var_s1 = 1;
            M2C_FIELD(((void *)Pes6MatchPlayers), s16 *, 0x18) = 0xD;
        } else {
            if (func_00BF7550(((void *)Pes6MatchPlayers)) != 0) {
                if ((func_009B3070(M2C_FIELD(((void *)Pes6MatchPlayers), u16 *, 0x26), M2C_FIELD(((void *)Pes6MatchPlayers), u16 *, 0x28)) & 0xFFFF) < 0x4001) {
                    if (func_00A0C770(((void *)Pes6MatchPlayers), 0x300) != 0) {
                        goto block_7;
                    }
                    goto block_9;
                }
                goto block_7;
            }
block_7:
            if ((M2C_FIELD(((void *)Pes6MatchPlayers), u8 *, 0x16) == 0xA3) || (M2C_FIELD(((void *)Pes6MatchPlayers), u8 *, 0x16) == 0x82)) {
block_9:
                if (M2C_FIELD(((void *)Pes6MatchPlayers), u8 *, 0) != (*(u8 *)D_00CBCDE2)) {
                    func_009832C0(((void *)Pes6MatchPlayers), 0x37);
                    M2C_FIELD(((void *)Pes6MatchPlayers), s16 *, 0x18) = 0;
                    M2C_FIELD(((void *)Pes6MatchPlayers), u8 *, 0x16) = 0x48U;
                } else {
                    func_009832C0(((void *)Pes6MatchPlayers), 0x37);
                    M2C_FIELD(((void *)Pes6MatchPlayers), s16 *, 0x18) = 0;
                    M2C_FIELD(((void *)Pes6MatchPlayers), u8 *, 0x16) = 0x32U;
                }
                var_s1 = 1;
            }
        }
    }
    return var_s1;
}
