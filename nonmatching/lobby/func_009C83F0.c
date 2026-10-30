/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00213800(s32, M2C_UNK);                /* extern */
M2C_UNK func_009C9460();                            /* extern */
M2C_UNK func_009C9480();                            /* extern */
s32 func_009C94C0();                                /* extern */
M2C_UNK func_009DDAF0(M2C_UNK);                     /* extern */
extern s8 *D_00A7DD78;

s32 func_009C83F0(void) {
    s32 temp_v0;
    s8 var_v1;

    if (M2C_FIELD(D_00A7DD78, u8 *, 2) != 0) {
        func_009C9460();
    }
    temp_v0 = func_009C94C0();
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_009C9480();
        M2C_FIELD(D_00A7DD78, s8 *, 4) = 1;
        M2C_FIELD(D_00A7DD78, s8 *, 0) = 0xF;
        return 0;
    case 3:
        func_009C9480();
        var_v1 = 0xE;
block_12:
        M2C_FIELD(D_00A7DD78, s8 *, 0) = var_v1;
    default:
        return 0;
    case 2:
        func_009C9480();
        func_00213800(M2C_FIELD(D_00A7DD78, s32 *, 8), 1);
        func_009DDAF0(1);
        var_v1 = 1;
        goto block_12;
    case 4:
        func_009C9480();
        var_v1 = 1;
        goto block_12;
    }
}
