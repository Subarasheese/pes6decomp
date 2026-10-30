/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E1C90(s32);                             /* extern */
s32 func_00A0C040(void *, void *);                  /* extern */
s32 func_00BC2B50(void *, M2C_UNK, M2C_UNK);        /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BBC[];
extern char D_005926FD[];
extern char D_005926FE[];
extern char D_00CBCC62[];
extern char D_00CBD269[];

s32 func_00A0BEF0(void *arg0) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_v0;
    void *temp_a1;

    var_a0 = 1;
    if ((*(u8 *)D_005926FD) == 1) {
        if (((*(u8 *)D_00CBCC62) == 0) && ((*(u8 *)D_005926FE) == 5)) {
            if ((*(u8 *)D_00CBD269) != 0xFF) {
                var_a0 = (s32) (*(u8 *)D_00CBD269) % 23;
            }
            if (func_00BC2B50(((void *)Pes6MatchPlayers) + (var_a0 * 0x240), 2, 0) != 0) {
                var_v0 = 1;
            } else {
                goto block_7;
            }
        } else {
            goto block_7;
        }
    } else if ((func_009E1C90(1) & 0xFF) != 5) {
        var_v0 = 1;
    } else {
block_7:
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        return 0;
    }
    temp_a1 = M2C_FIELD(arg0, void **, 4);
    temp_a0 = M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u8 *, 3) * 2;
    if (temp_a0 == 0) {
        return 0;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x24) == 1) && ((s32) (*(u8 *)D_00591BBC) < 2)) {
        return 0;
    }
    if (!(M2C_FIELD(temp_a1, f32 *, 0x38) <= (f32) temp_a0)) {
        return func_00A0C040(arg0, temp_a1);
    }
    return 0;
}
