/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0022F1C0(s16);                         /* extern */
M2C_UNK func_0023F510(M2C_UNK);                     /* extern */
M2C_UNK func_0023FC70();                            /* extern */
M2C_UNK func_0023FCA0(M2C_UNK);                     /* extern */
s32 func_0024A380(s16);                             /* extern */
s32 func_008BFA40(s16);                             /* extern */
extern char D_003AA201[];
extern char D_003AA235[];
extern char D_003AA269[];
extern char D_003AA29D[];
extern char D_003AA2D1[];
extern char D_003AA305[];
extern char D_003AA339[];
extern char D_003AA36D[];
extern char D_0053C304[];
extern char D_00591F2C[];

void func_00931270(void) {
    s16 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_a0 = (*(s16 *)D_0053C304);
    switch (temp_a0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        (*(s16 *)D_0053C304) = temp_a0 + 1;
        func_0022F1C0(temp_a0);
        (*(s8 *)D_003AA235) = 0;
        (*(s8 *)D_003AA269) = 0;
        (*(s8 *)D_003AA29D) = 0;
        (*(s8 *)D_003AA2D1) = 0;
        (*(s8 *)D_003AA305) = 0;
        (*(s8 *)D_003AA339) = 0;
        (*(s8 *)D_003AA36D) = 0;
        (*(s8 *)D_003AA201) = -1;
        (*(s8 *)D_00591F2C) = 1;
        return;
    case 1:                                         /* switch 1 */
        temp_v0 = func_0024A380(temp_a0);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            (*(s16 *)D_0053C304) += 1;
            func_0023F510(3);
            return;
        case 1:                                     /* switch 2 */
            (*(s16 *)D_0053C304) = 0;
            func_0023FC70();
            return;
        }
        break;
    case 2:                                         /* switch 1 */
        temp_v0_2 = func_008BFA40(temp_a0);
        switch (temp_v0_2) {                        /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            func_0023F510(2);
            (*(s16 *)D_0053C304) -= 1;
            return;
        case 2:                                     /* switch 3 */
            (*(s16 *)D_0053C304) = 0;
            func_0023FCA0(3);
            return;
        }
        break;
    }
}
