/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00225C00(s32, s32);                    /* extern */
M2C_UNK func_0022F1C0(s32);                         /* extern */
M2C_UNK func_0023F510(M2C_UNK);                     /* extern */
M2C_UNK func_0023FC70();                            /* extern */
M2C_UNK func_0023FCA0(M2C_UNK);                     /* extern */
s32 func_008BEDB0(s32);                             /* extern */
s32 func_009456C0(s32);                             /* extern */
extern char D_003AA201[];
extern char D_003AA235[];
extern char D_003AA269[];
extern char D_003AA29D[];
extern char D_003AA2D1[];
extern char D_003AA305[];
extern char D_003AA339[];
extern char D_003AA36D[];
extern s32 D_003EA9D8;
extern char D_00591F2C[];

void func_00931110(void) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v1;

    temp_a0 = D_003EA9D8;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        D_003EA9D8 = 1;
        func_0022F1C0(temp_a0);
        var_s0 = 0;
        do {
            func_00225C00((var_s0 + 0x40) & 0xFFFF, var_s0 & 0xFF);
            var_s0 += 1;
        } while (var_s0 < 0x8C);
        (*(s8 *)D_003AA235) = 0;
        (*(s8 *)D_003AA269) = 0;
        (*(s8 *)D_003AA29D) = 0;
        (*(s8 *)D_003AA2D1) = 0;
        (*(s8 *)D_003AA305) = 0;
        (*(s8 *)D_003AA339) = 0;
        (*(s8 *)D_003AA36D) = 0;
        (*(s8 *)D_003AA201) = -1;
        (*(s8 *)D_00591F2C) = 1;
        func_0023F510(3);
        return;
    case 1:                                         /* switch 1 */
        temp_v0 = func_008BEDB0(temp_a0);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            D_003EA9D8 = 0;
            func_0023FC70();
            return;
        case 2:                                     /* switch 2 */
            var_v1 = D_003EA9D8 + 1;
block_27:
            D_003EA9D8 = var_v1;
            return;
        }
        break;
    case 2:                                         /* switch 1 */
        temp_v0_2 = func_009456C0(temp_a0);
        switch (temp_v0_2) {                        /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            var_v1 = D_003EA9D8 - 1;
            goto block_27;
        case 2:                                     /* switch 3 */
            D_003EA9D8 = 0;
            func_0023FCA0(3);
            return;
        }
        break;
    }
}
