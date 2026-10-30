/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093CCC0();                                /* extern */
M2C_UNK func_00971770();                            /* extern */
M2C_UNK func_00971780();                            /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
s32 func_00971920();                                /* extern */
s32 func_00975030(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_0099C760();                            /* extern */
M2C_UNK func_009B40A0(M2C_UNK);                     /* extern */

s32 func_00976200(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    var_s0 = 0;
    func_00971780();
    temp_v0 = func_00971920();
    switch (temp_v0) {                              /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        func_009B40A0(1);
        var_s0 = 1;
        break;
    case 0:                                         /* switch 1 */
        func_0099C760();
        func_0099C730(0x020C000B);
        func_009B40A0(0);
        func_009717C0(1);
        break;
    case 1:                                         /* switch 1 */
        temp_v0_2 = func_00975030(func_0093CCC0(), 0);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 4:                                     /* switch 2 */
        case 1:                                     /* switch 2 */
            func_009717C0(2);
            break;
        }
        break;
    }
    func_00971770();
    return var_s0;
}
