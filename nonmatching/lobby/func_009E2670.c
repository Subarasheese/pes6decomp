/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828D90(s32);                             /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_00D0BF70(M2C_UNK, void *, M2C_UNK);    /* extern */
extern void *D_00A7DF00;

u8 func_009E2670(void) {
    s32 temp_v0;

    func_0099D030(1);
    temp_v0 = func_00828D90(M2C_FIELD(D_00A7DF00, s32 *, 0));
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_0099D030(0);
        M2C_FIELD(D_00A7DF00, s32 *, 0xC) = 0x01FB0033;
        M2C_FIELD(D_00A7DF00, s32 *, 0x10) = -1;
        M2C_FIELD(D_00A7DF00, s8 *, 5) = 7;
    case 0:
block_12:
        return 0U;
    case 4:
        func_0099D030(0);
        M2C_FIELD(D_00A7DF00, s32 *, 0xC) = 0x01FB0044;
        M2C_FIELD(D_00A7DF00, s32 *, 0x10) = 1;
        M2C_FIELD(D_00A7DF00, s8 *, 5) = 7;
        goto block_12;
    default:
    case 2:
        func_0099D030(0);
        M2C_FIELD(D_00A7DF00, u8 *, 8) = 2U;
        M2C_FIELD(D_00A7DF00, s8 *, 5) = 4;
        func_00D0BF70(0, D_00A7DF00, 2);
        return M2C_FIELD(D_00A7DF00, u8 *, 8);
    }
}
