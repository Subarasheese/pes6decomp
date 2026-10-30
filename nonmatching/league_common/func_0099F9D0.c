/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001BC2B0();                            /* extern */
M2C_UNK func_001BC350();                            /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0094C7B0();                                /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
s32 *func_009A0430();                               /* extern */
M2C_UNK func_009A2320(M2C_UNK);                     /* extern */

s32 func_0099F9D0(void) {
    s32 *temp_v0;
    s32 temp_v1;

    temp_v0 = func_009A0430();
    if (temp_v0 != NULL) {
        temp_v1 = *temp_v0;
        switch (temp_v1) {                          /* irregular */
        case 2:
            break;
        case 1:
            func_009A2320(0);
            *temp_v0 = 0;
            if (func_0094C7B0() == 0x37) {
                func_00958000(0x71);
            } else if (func_0094C7B0() == 0x39) {
                func_00958000(0x7A);
            } else if (func_0094C7B0() == 0x36) {
                func_00958000(0x69);
            } else if (func_0094C7B0() == 0x3A) {
                func_00958000(0x97);
            }
            func_0026E840(0x84008401);
            break;
        case 0:
            if (func_009A0430() != NULL) {
                func_001BC350();
                func_001BC2B0();
            }
            *temp_v0 = 2;
            func_0026E840(0x84008401);
            break;
        }
    }
    return 0;
}
