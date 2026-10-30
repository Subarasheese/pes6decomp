/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00213540(s32, M2C_UNK);                /* extern */
s32 func_009654D0();                                /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
extern void *D_00A7DD60;

s32 func_009C5960(void) {
    s32 temp_v0;

    func_0099D030(1);
    M2C_FIELD(D_00A7DD60, s8 *, 0xA) = 0;
    func_00213540(M2C_FIELD(D_00A7DD60, s32 *, 0xC), 1);
    temp_v0 = func_009654D0();
    if (temp_v0 != 0) {
        func_0099D030(0);
        M2C_FIELD(D_00A7DD60, s8 *, 0xA) = 1;
        if (M2C_FIELD(D_00A7DD60, u8 *, 8) != 0) {
            func_00213540(M2C_FIELD(D_00A7DD60, s32 *, 0xC), 0);
        }
        if (temp_v0 >= 0) {
            return 2;
        }
        M2C_FIELD(D_00A7DD60, s8 *, 1) = 1;
        M2C_FIELD(D_00A7DD60, s8 *, 0) = 0x1D;
        return 0;
    }
    return 0;
}
