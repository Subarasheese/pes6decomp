/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E1C90(s32);                             /* extern */
s32 func_00BC2B50(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_00BD9570();                                /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591F14[];
extern char D_005926FD[];
extern char D_005926FE[];
extern char D_00CBCC62[];
extern char D_00CBD269[];

s32 func_00A07A50(void) {
    s32 var_a0;
    s32 var_v0;

    if ((*(u8 *)D_00591F14) != 0) {
        return 1;
    }
    var_a0 = 1;
    if ((*(u8 *)D_005926FD) == 1) {
        if (((*(u8 *)D_00CBCC62) == 0) && ((*(u8 *)D_005926FE) == 5)) {
            if ((*(u8 *)D_00CBD269) != 0xFF) {
                var_a0 = (s32) (*(u8 *)D_00CBD269) % 23;
            }
            if (func_00BC2B50(((void *)Pes6MatchPlayers) + (var_a0 * 0x240), 2, 0) != 0) {
                var_v0 = 1;
            } else {
                goto block_10;
            }
        } else {
            goto block_10;
        }
    } else if ((func_009E1C90(1) & 0xFF) != 5) {
        var_v0 = 1;
    } else {
block_10:
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        return 1;
    }
    return func_00BD9570() != 0;
}
