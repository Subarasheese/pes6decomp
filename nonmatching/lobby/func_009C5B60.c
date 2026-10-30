/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00213540(s32, M2C_UNK);                /* extern */
s32 func_009655B0();                                /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009C41E0(void *);                      /* extern */
extern void *D_00A7DD60;

s32 func_009C5B60(void) {
    s32 var_s0;

    func_0099D030(1);
    M2C_FIELD(D_00A7DD60, s8 *, 0xA) = 0;
    func_00213540(M2C_FIELD(D_00A7DD60, s32 *, 0xC), 1);
    var_s0 = func_009655B0();
    if (var_s0 != 0) {
        func_0099D030(0);
        M2C_FIELD(D_00A7DD60, s8 *, 0xA) = 1;
        if (M2C_FIELD(D_00A7DD60, u8 *, 8) != 0) {
            func_00213540(M2C_FIELD(D_00A7DD60, s32 *, 0xC), 0);
        }
        if (M2C_FIELD(D_00A7DD60, u8 *, 0x30) != 0) {
            M2C_FIELD(D_00A7DD60, u8 *, 0x30) = 0U;
            var_s0 = 1;
        }
        if (var_s0 < 0) {
            M2C_FIELD(D_00A7DD60, u8 *, 1) = 1U;
            M2C_FIELD(D_00A7DD60, u8 *, 0) = 0x1DU;
            return 0;
        }
        M2C_FIELD(D_00A7DD60, u8 *, 0) = (u8) M2C_FIELD(D_00A7DD60, u8 *, 1);
        M2C_FIELD(D_00A7DD60, s8 *, 7) = 0;
        func_009C41E0(D_00A7DD60);
        goto block_11;
    }
block_11:
    return 0;
}
