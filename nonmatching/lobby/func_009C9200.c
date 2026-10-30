/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00213800(s32, M2C_UNK);                /* extern */
M2C_UNK func_009C7050();                            /* extern */
M2C_UNK func_009C7070();                            /* extern */
s32 func_009C70B0();                                /* extern */
M2C_UNK func_009C8730();                            /* extern */
M2C_UNK func_009DDB00(M2C_UNK);                     /* extern */
extern void *D_00A7DD80;

u8 func_009C9200(void) {
    s32 temp_v0;

    if (M2C_FIELD(D_00A7DD80, u8 *, 1) != 0) {
        func_009C7050();
    }
    temp_v0 = func_009C70B0();
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_009C7070();
        M2C_FIELD(D_00A7DD80, u8 *, 3) = 1U;
        M2C_FIELD(D_00A7DD80, s8 *, 0) = 4;
        return M2C_FIELD(D_00A7DD80, u8 *, 3);
    case 3:
    case 2:
        func_009C7070();
        func_009C8730();
        func_00213800(M2C_FIELD(D_00A7DD80, s32 *, 8), 1);
        func_009DDB00(1);
        M2C_FIELD(D_00A7DD80, s8 *, 0) = 0;
block_11:
    default:
        return 0U;
    case 4:
        func_009C7070();
        goto block_11;
    }
}
