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

s32 func_00A0C990(void *arg0) {
    s32 temp_f0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v0;
    void *temp_a0;

    if ((*(u8 *)D_00591F14) != 0) {
        goto block_11;
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
                goto block_9;
            }
        } else {
            goto block_9;
        }
    } else if ((func_009E1C90(1) & 0xFF) != 5) {
        var_v0 = 1;
    } else {
block_9:
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        goto block_11;
    }
    if (func_00BD9570() == 0) {
        var_v0_2 = 0;
    } else {
block_11:
        var_v0_2 = 1;
    }
    if (var_v0_2 != 0) {
        return 0;
    }
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_v0 = M2C_FIELD(temp_a0, u16 *, 0x30);
    temp_f0 = (s32) M2C_FIELD(temp_a0, f32 *, 0x38);
    switch (temp_v0) {                              /* irregular */
    case 0xBC:
        if (temp_f0 >= 0xF) {
            return 1;
        }
block_52:
        return 0;
    case 0x384:
    case 0x383:
    case 0x381:
    case 0x1BF:
    case 0x0:
        return 1;
    default:
        temp_v0_2 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 3) * 2;
        if (temp_v0_2 == 0) {
            return 0;
        }
        if (temp_f0 >= temp_v0_2) {
            return 1;
        }
        goto block_52;
    }
}
