/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF730(s32, M2C_UNK);                /* extern */

void func_00213540(void *arg0, s8 arg1) {
    s8 var_a1;
    u8 temp_a1;

    var_a1 = arg1;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, u8 *, 9) != 0)) {
        if (var_a1 >= 2) {
            var_a1 = 1;
        } else if (var_a1 < 0) {
            var_a1 = 0;
        }
        M2C_FIELD(arg0, s8 *, 0xA) = var_a1;
        temp_a1 = (u8) M2C_FIELD(arg0, s8 *, 0xA);
        switch (temp_a1) {                          /* irregular */
        case 1:
            func_002DF730(M2C_FIELD(arg0, s32 *, 0x5A0), 2);
            break;
        case 0:
            func_002DF730(M2C_FIELD(arg0, s32 *, 0x5A0), 0);
            return;
        }
    }
}
