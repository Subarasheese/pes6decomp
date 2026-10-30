/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00965920();                                /* extern */
M2C_UNK func_009D0560(M2C_UNK);                     /* extern */
M2C_UNK func_009D6390(M2C_UNK);                     /* extern */
extern void *D_00A7DE10;

void func_009D5AA0(s8 arg0) {
    s32 temp_v0;
    s32 var_v1;

    if (D_00A7DE10 != NULL) {
        M2C_FIELD(D_00A7DE10, s8 *, 2) = arg0;
        if (!(arg0 & 0xFF)) {
            func_009D6390(0);
            func_009D0560(0);
            return;
        }
        if (M2C_FIELD(D_00A7DE10, u8 *, 1) == 4) {
            func_009D6390(0);
            func_009D0560(1);
            return;
        }
        temp_v0 = func_00965920();
        if ((temp_v0 != 0x14) && (var_v1 = 1, (temp_v0 != 1)) && (temp_v0 != 0)) {

        } else {
            var_v1 = 0;
        }
        if (var_v1 == 0) {
            func_009D6390(0);
            func_009D0560(1);
            M2C_FIELD(D_00A7DE10, u8 *, 1) = 0U;
        } else {
            func_009D6390(1);
            func_009D0560(0);
            M2C_FIELD(D_00A7DE10, u8 *, 1) = 2U;
        }
    }
}
