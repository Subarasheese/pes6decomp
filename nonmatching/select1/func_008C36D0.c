/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001B68B0();                                /* extern */
s32 func_001B6A30(s32);                             /* extern */
s32 func_001BE4D0(M2C_UNK);                         /* extern */
s32 func_001BE550(M2C_UNK, s32);                    /* extern */
M2C_UNK func_0023E0E0(M2C_UNK);                     /* extern */
M2C_UNK func_0023EA10(M2C_UNK);                     /* extern */
s32 func_0023F330();                                /* extern */
M2C_UNK func_008CC950();                            /* extern */
M2C_UNK func_008CC9A0();                            /* extern */
s32 func_008CC9D0();                                /* extern */
M2C_UNK func_008CCA40();                            /* extern */
s32 func_00934440(M2C_UNK);                         /* extern */
s32 func_0093D740();                                /* extern */
extern s32 D_003EA470;
extern s32 D_003EA474;
extern char D_00510FD0[];
extern char D_0053C300[];

s8 func_008C36D0(void) {
    s32 temp_v0;
    s32 var_v0_2;
    s8 var_v0;

    switch (D_003EA470) {                           /* irregular */
    case 1:
        if ((func_00934440(0x10386) != 0) && (func_001BE4D0(0) == 1) && (func_001B68B0() == 1)) {
            func_0023E0E0(0x1F);
            func_008CC9A0();
            D_003EA470 += 1;
        }
block_33:
    default:
        return 0;
    case 0:
        func_008CCA40();
        D_003EA470 += 1;
        goto block_33;
    case 2:
        temp_v0 = func_008CC9D0();
        D_003EA474 = temp_v0;
        if (temp_v0 != 0) {
            if (temp_v0 != -1) {
                var_v0 = 2;
                D_003EA474 = 0;
            } else {
                var_v0 = 1;
                D_003EA474 = 0;
            }
            M2C_FIELD(((void *)D_0053C300), s8 *, 9) = var_v0;
            D_003EA470 += 1;
        }
        goto block_33;
    case 3:
        func_0023EA10(0);
        if ((*(s32 *)D_00510FD0) == 4) {
            if (M2C_FIELD(((void *)D_0053C300), s8 *, 9) == 1) {
                if (func_001B6A30(func_0023F330()) == 0) {
                    var_v0_2 = 0;
                } else {
                    goto block_30;
                }
            } else {
                if (func_001BE550(0, func_0023F330()) != 0) {
                    func_0023E0E0(0x1F);
                    goto block_30;
                }
                var_v0_2 = 0;
            }
        } else if (func_0093D740() == 0) {
            var_v0_2 = 0;
        } else {
block_30:
            var_v0_2 = 1;
        }
        if (var_v0_2 != 0) {
            func_008CC950();
            D_003EA470 = 0;
            return M2C_FIELD(((void *)D_0053C300), s8 *, 9);
        }
        goto block_33;
    }
}
