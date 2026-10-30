/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00213540(s32, M2C_UNK);                /* extern */
s32 func_00965630();                                /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009C41E0(M2C_UNK);                     /* extern */
extern void *D_00A7DD60;

s32 func_009C5C70(void) {
    s32 temp_v0;

    func_0099D030(1);
    M2C_FIELD(D_00A7DD60, s8 *, 0xA) = 0;
    func_00213540(M2C_FIELD(D_00A7DD60, s32 *, 0xC), 1);
    temp_v0 = func_00965630();
    if (temp_v0 != 0) {
        func_0099D030(0);
        M2C_FIELD(D_00A7DD60, s8 *, 0xA) = 1;
        if (M2C_FIELD(D_00A7DD60, u8 *, 8) != 0) {
            func_00213540(M2C_FIELD(D_00A7DD60, s32 *, 0xC), 0);
        }
        if (temp_v0 < 0) {
            switch (temp_v0) {                      /* irregular */
            case -10:
                M2C_FIELD(D_00A7DD60, s8 *, 0) = 0x1B;
                M2C_FIELD(D_00A7DD60, s32 *, 0x2C) = 0x02000014;
                break;
            case -11:
                M2C_FIELD(D_00A7DD60, s8 *, 0) = 0x1B;
                M2C_FIELD(D_00A7DD60, s32 *, 0x2C) = 0x0200001B;
                break;
            case -12:
                M2C_FIELD(D_00A7DD60, s8 *, 0) = 0x1B;
                M2C_FIELD(D_00A7DD60, s32 *, 0x2C) = 0x0200001C;
                break;
            default:
            case -20:
                M2C_FIELD(D_00A7DD60, s8 *, 1) = 1;
                M2C_FIELD(D_00A7DD60, s8 *, 0) = 0x1D;
                break;
            }
        } else {
            M2C_FIELD(D_00A7DD60, s8 *, 0) = 1;
            M2C_FIELD(D_00A7DD60, s8 *, 7) = 1;
            func_009C41E0(1);
        }
    }
    return 0;
}
