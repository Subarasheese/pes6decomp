/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009545F0(void);
s32 func_00827450(M2C_UNK);                         /* extern */
M2C_UNK func_0082B4C0(M2C_UNK);                     /* extern */
M2C_UNK func_0082C980(M2C_UNK);                     /* extern */
s32 func_0082CA10(M2C_UNK);                         /* extern */
M2C_UNK func_0082CA50(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00843690(M2C_UNK);                     /* extern */
s32 func_008438F0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_008439C0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00954720();                            /* extern */
s32 func_00961270(M2C_UNK);                         /* extern */

s32 func_0095D050(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    var_s0 = 0;
    func_0082B4C0(5);
    temp_v0 = func_0082CA10(0xA9);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        var_s0 = 1;
        func_00843690(4);
        func_009545F0();
        func_0082CA50(0xA9, 0);
        break;
    case 2:                                         /* switch 1 */
        var_s0 = 4;
        func_00843690(4);
        func_009545F0();
        func_0082CA50(0xA9, 0);
        break;
    case 0:                                         /* switch 1 */
        func_008439C0(4, 0x7530);
        func_0082C980(0xA9);
        break;
    case 1:                                         /* switch 1 */
        temp_v0_2 = func_00961270(4);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 3:                                     /* switch 2 */
            func_0082CA50(0xA9, 3);
            break;
        case 1:                                     /* switch 2 */
            func_0082CA50(0xA9, 3);
            break;
        case 4:                                     /* switch 2 */
            func_0082CA50(0xA9, 2);
            break;
        case 0:                                     /* switch 2 */
            if (func_008438F0(4, 2) < 0) {
                func_00954720();
            }
            break;
        default:                                    /* switch 2 */
            func_0082CA50(0xA9, 4);
            break;
        }
        break;
    default:                                        /* switch 1 */
        var_s0 = 2;
        if (func_00827450(5) == 1) {
            var_s0 = 3;
        }
        func_00843690(4);
        func_009545F0();
        func_0082CA50(0xA9, 0);
        break;
    }
    return var_s0;
}
