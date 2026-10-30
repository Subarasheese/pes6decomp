/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00213800(s32, M2C_UNK);                /* extern */
M2C_UNK func_009671F0();                            /* extern */
s32 func_00967210();                                /* extern */
M2C_UNK func_009C8730();                            /* extern */
M2C_UNK func_009DDB00(M2C_UNK);                     /* extern */
extern void *D_00A7E240;

s32 func_009F35A0(void) {
    s32 temp_v0;

    if (M2C_FIELD(D_00A7E240, u8 *, 2) != 0) {
        func_009671F0();
    }
    temp_v0 = func_00967210();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 1:
        func_009DDB00(1);
        func_00213800(M2C_FIELD(D_00A7E240, s32 *, 8), 1);
        func_009C8730();
        if (M2C_FIELD(D_00A7E240, u8 *, 2) == 0) {
            M2C_FIELD(D_00A7E240, s8 *, 1) = 0;
            M2C_FIELD(D_00A7E240, s8 *, 0) = 4;
        } else {
            M2C_FIELD(D_00A7E240, s8 *, 0) = 0;
        }
        break;
    case 2:
        if (M2C_FIELD(D_00A7E240, u8 *, 2) == 0) {
            M2C_FIELD(D_00A7E240, s8 *, 1) = 6;
            M2C_FIELD(D_00A7E240, s8 *, 0) = 4;
            M2C_FIELD(D_00A7E240, s8 *, 4) = 3;
        } else {
            M2C_FIELD(D_00A7E240, s8 *, 0) = 0;
        }
        break;
    }
    return 0;
}
