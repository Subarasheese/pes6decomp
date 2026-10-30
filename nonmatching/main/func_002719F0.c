/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017E120(int);
extern void func_002727C0(s32);
s32 func_00152130(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00209A00(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00287000();                            /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1CB0(M2C_UNK);                     /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00A1C780();                                /* extern */
M2C_UNK func_00AD0A20(s32);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591C09[];
extern char Pes6MatchState_Current[];
extern char D_00591F14[];
extern char D_00591F2D[];

void func_002719F0(void) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_s0;

    temp_a0 = func_009E1C90(1) & 0xFF;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        func_009E1D30(0, 1);
        return;
    case 0:                                         /* switch 1 */
        var_s0 = 0;
        do {
            if (var_s0 == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = var_s0 % 23;
            }
            func_00209A00(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), s32 *, 4), 0, 0);
            var_s0 += 1;
        } while (var_s0 < 0x17);
        func_0017E120(1);
        (*(s8 *)Pes6MatchState_Current) = 2;
        (*(s8 *)D_00591F14) = 0;
        switch ((*(u8 *)D_00591C09)) {                       /* switch 2; irregular */
        case 5:                                     /* switch 2 */
            func_009E1D30(0, 1);
            return;
        case 7:                                     /* switch 2 */
            (*(s8 *)D_00591F2D) = 0;
            func_00287000();
            func_009E1D30(0, 1);
            return;
        default:                                    /* switch 2 */
        case 10:                                    /* switch 2 */
            func_009E1D30(0, 1);
            return;
        }
        break;
    case 1:                                         /* switch 1 */
        func_00AD0A20(temp_a0);
        if (func_00152130(0, 0x20) != 0) {
            func_009E1CB0(1);
            return;
        }
        break;
    case 2:                                         /* switch 1 */
        func_00AD0A20(temp_a0);
        func_002727C0(0x17);
        if (func_00A1C780() != 0) {
            func_009E1CB0(1);
            return;
        }
        break;
    }
}
