/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B7920();                            /* extern */
M2C_UNK func_001BC2B0();                            /* extern */
M2C_UNK func_001BC350();                            /* extern */
M2C_UNK func_002F2ED0(s32, s32, s32);               /* extern */
s32 func_002F3850(s32);                             /* extern */
M2C_UNK func_002F4E10(s32);                         /* extern */
s32 func_008833A0(M2C_UNK, s32, s32);               /* extern */
extern s32 D_003EA3A4;
extern s32 D_003EA3AC;
extern s32 D_003EA3B4;
extern u8 D_003EA3B8;
extern u8 D_003EA3BC;
extern char D_008B24D8[];
extern char D_008B24DC[];

s32 func_00882AA0(void) {
    s32 temp_a2;
    s32 temp_v0;
    s32 var_s0;

    temp_a2 = (*(s32 *)D_008B24D8);
    var_s0 = 0;
    (*(s32 *)D_008B24DC) = temp_a2;
    (*(s32 *)D_008B24D8) = 0;
    switch (D_003EA3A4) {                           /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_s0 = func_008833A0(2, D_003EA3A4, temp_a2);
        break;
    case 2:                                         /* switch 1 */
        func_002F2ED0(D_003EA3AC, D_003EA3A4, temp_a2);
        temp_v0 = func_002F3850(D_003EA3AC);
        if ((temp_v0 != 4) && (temp_v0 != -1)) {

        } else {
            func_002F4E10(D_003EA3AC);
            D_003EA3AC = 0;
            D_003EA3A4 = 0;
            if ((s32) D_003EA3B8 > 0) {
                func_001B7920();
                D_003EA3B8 -= 1;
            }
            var_s0 = 1;
            switch (D_003EA3B4) {                   /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                break;
            case 1:                                 /* switch 2 */
                var_s0 = 2;
                break;
            }
        }
        break;
    case 0:                                         /* switch 1 */
        var_s0 = 3;
        break;
    }
    if ((var_s0 != 0) && (D_003EA3BC == 1)) {
        D_003EA3BC = 0;
        func_001BC350();
        func_001BC2B0();
    }
    return var_s0;
}
