/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_009341B0();                                /* extern */
s32 func_009343D0();                                /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009E0260();                            /* extern */
M2C_UNK func_009E0430(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_009F0F30();                                /* extern */
extern void *D_00A7E018;
extern M2C_UNK func_009F08C0;

u8 func_009F0AA0(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_0099D030(1);
    temp_v0 = func_009343D0();
    switch (temp_v0) {                              /* irregular */
    case 4:
        func_0099D030(0);
        if (M2C_FIELD(D_00A7E018, u8 *, 1) == 0) {
            temp_v0_2 = func_009341B0();
            if ((temp_v0_2 >= 0) && (temp_v0_2 < 0x33)) {
                M2C_FIELD(D_00A7E018, s32 *, 4) = temp_v0_2;
                func_009E0430(M2C_FIELD(D_00A7E018, s32 *, 4), 0x32, &func_009F08C0, 0);
                goto block_9;
            }
            goto block_16;
        }
        if (func_009F0F30() != 0) {
            func_009E0260();
block_9:
            if (M2C_FIELD(D_00A7E018, s32 *, 4) != 0) {
                M2C_FIELD(D_00A7E018, u8 *, 1) = 1U;
                M2C_FIELD(D_00A7E018, s8 *, 2) = 0;
            } else {
                M2C_FIELD(D_00A7E018, u8 *, 1) = 3U;
                M2C_FIELD(D_00A7E018, s8 *, 2) = 3;
            }
        case 0:
        } else {
block_16:
            func_0026E840(0x8C008005);
            M2C_FIELD(D_00A7E018, s8 *, 2) = 4;
            M2C_FIELD(D_00A7E018, u8 *, 1) = 3U;
        }
        break;
    default:
        func_0099D030(0);
        goto block_16;
    }
    return M2C_FIELD(D_00A7E018, u8 *, 2);
}
