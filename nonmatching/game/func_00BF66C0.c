/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A04F0();                                /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
s32 func_00BC2B50(void *, M2C_UNK, M2C_UNK);        /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char D_00591E14[];
extern char D_005922EA[];
extern char D_0059237C[];
extern char D_005926FE[];
extern char D_00CBD269[];

s32 func_00BF66C0(void) {
    s32 var_v1;
    u16 temp_v1;
    void *temp_s1;

    if (func_009A04F0() == 0) {
        if (((*(s32 *)D_00591E14) == ((u8) (*(u8 *)D_00591BE4) >> 1)) && ((s32) (*(u16 *)D_005922EA) <= 0)) {
            if ((*(u8 *)D_00CBD269) == 0xFF) {
                var_v1 = 1;
            } else {
                var_v1 = (s32) (*(u8 *)D_00CBD269) % 23;
            }
            temp_s1 = ((void *)Pes6MatchPlayers) + (var_v1 * 0x240);
            if ((func_00BBB8C0(0x64) < 0x14) && ((*(u8 *)D_005926FE) == 5) && ((*(u8 *)D_0059237C) == 0)) {
                temp_v1 = M2C_FIELD(M2C_FIELD(temp_s1, void **, 4), u16 *, 0x30);
                if ((temp_v1 != 0x465) && (temp_v1 != 0x446) && (M2C_FIELD(*M2C_FIELD(((void *)Pes6MatchPlayers), void ***, 4), u8 *, 3) == 1) && (func_00BC2B50(temp_s1, 2, 0) != 0)) {
                    return 1;
                }
            }
            goto block_16;
        }
        goto block_16;
    }
block_16:
    return 0;
}
