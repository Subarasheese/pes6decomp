/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00213540(s32, M2C_UNK);                /* extern */
s32 func_00817AD0(M2C_UNK);                         /* extern */
M2C_UNK func_00817CC0();                            /* extern */
s32 func_00965DA0();                                /* extern */
M2C_UNK func_00D0C090();                            /* extern */
extern void *D_00A7DD60;

s32 func_009C5E10(void) {
    s32 temp_v0;

    if ((M2C_FIELD(D_00A7DD60, u8 *, 2) != 0) || (M2C_FIELD(D_00A7DD60, u8 *, 4) != 0)) {
        func_00817CC0();
    }
    temp_v0 = func_00817AD0(0x02000017);
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 2:
        func_00D0C090();
        if (func_00965DA0() < 2) {
            M2C_FIELD(D_00A7DD60, s32 *, 0x2C) = 0x0200000D;
            M2C_FIELD(D_00A7DD60, s8 *, 0) = 0x1B;
        } else {
            M2C_FIELD(D_00A7DD60, s8 *, 0) = 3;
        }
        break;
    default:
    case 1:
    case 3:
        func_00D0C090();
        func_00213540(M2C_FIELD(D_00A7DD60, s32 *, 0xC), 0);
        M2C_FIELD(D_00A7DD60, s8 *, 0xA) = 1;
        M2C_FIELD(D_00A7DD60, s8 *, 0) = 1;
        break;
    }
    return 0;
}
