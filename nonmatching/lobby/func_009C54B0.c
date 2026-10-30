/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00213800(s32, M2C_UNK);                /* extern */
s32 func_00965F50();                                /* extern */
M2C_UNK func_0099C6F0(s32);                         /* extern */
M2C_UNK func_009C7630();                            /* extern */
M2C_UNK func_009C7650();                            /* extern */
s32 func_009C7690();                                /* extern */
extern void *D_00A7DD60;

s32 func_009C54B0(void) {
    s32 temp_v0;

    if (M2C_FIELD(D_00A7DD60, u8 *, 2) != 0) {
        func_009C7630();
    }
    temp_v0 = func_009C7690();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 3:
        func_0099C6F0(func_00965F50());
        func_009C7650();
        M2C_FIELD(D_00A7DD60, s8 *, 1) = 0xD;
        M2C_FIELD(D_00A7DD60, s8 *, 0) = 0x1D;
        break;
    case 2:
    case 1:
        func_0099C6F0(func_00965F50());
        func_009C7650();
        func_00213800(M2C_FIELD(D_00A7DD60, s32 *, 0x10), 1);
        M2C_FIELD(D_00A7DD60, s8 *, 0) = 0xD;
        break;
    case 4:
        func_0099C6F0(func_00965F50());
        func_009C7650();
        break;
    }
    return 0;
}
