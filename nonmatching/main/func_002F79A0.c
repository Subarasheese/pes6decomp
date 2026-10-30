/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017A670(M2C_UNK);                         /* extern */
M2C_UNK func_0017A690(M2C_UNK);                     /* extern */
M2C_UNK func_0017A700(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0017F900();                                /* extern */
M2C_UNK func_001FC780(M2C_UNK);                     /* extern */
M2C_UNK func_001FC840(M2C_UNK);                     /* extern */
M2C_UNK func_0029A0B0(M2C_UNK);                     /* extern */
s32 func_002F6DD0();                                /* extern */
M2C_UNK func_002F7160();                            /* extern */

void func_002F79A0(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_0017A670(1);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_001FC840(3);
        func_0017A690(1);
        return;
    case 1:                                         /* switch 1 */
        if (func_0017F900() != 0) {
            func_002F7160();
            func_0017A690(1);
        case 2:                                     /* switch 1 */
            temp_v0_2 = func_002F6DD0();
            switch (temp_v0_2) {                    /* switch 2; irregular */
            case 3:                                 /* switch 2 */
                func_0017A700(0, 4);
                break;
            case 2:                                 /* switch 2 */
                func_0017A700(0, 9);
                return;
            case 1:                                 /* switch 2 */
                func_001FC780(5);
                func_0029A0B0(0);
                func_0017A700(0, 8);
                return;
            }
        } else {
            return;
        }
        break;
    }
}
