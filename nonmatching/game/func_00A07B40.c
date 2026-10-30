/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E1C90(s32);                             /* extern */
s32 func_00BC2B50(void *, M2C_UNK, M2C_UNK);        /* extern */
extern char Pes6MatchPlayers[];
extern char D_005926FD[];
extern char D_005926FE[];
extern char D_00CBCC62[];
extern char D_00CBD269[];

s32 func_00A07B40(void) {
    s32 var_a0;

    var_a0 = 1;
    if ((*(u8 *)D_005926FD) == 1) {
        if (((*(u8 *)D_00CBCC62) == 0) && ((*(u8 *)D_005926FE) == 5)) {
            if ((*(u8 *)D_00CBD269) != 0xFF) {
                var_a0 = (s32) (*(u8 *)D_00CBD269) % 23;
            }
            if (func_00BC2B50(((void *)Pes6MatchPlayers) + (var_a0 * 0x240), 2, 0) != 0) {
                return 1;
            }
            goto block_7;
        }
block_7:
        return 0;
    }
    return (func_009E1C90(1) & 0xFF) != 5;
}
