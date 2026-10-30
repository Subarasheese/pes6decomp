/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
extern void *D_00A7DE00;

s32 func_009D23B0(s8 arg0) {
    s32 temp_s0;
    s32 var_s1;

    if (D_00A7DE00 == NULL) {
        return 0;
    }
    M2C_FIELD(D_00A7DE00, s8 *, 0x65) = arg0;
    var_s1 = 0;
    do {
        temp_s0 = var_s1 * 4;
        func_001D7D60(M2C_FIELD((D_00A7DE00 + temp_s0), void **, 0xAC), 0);
        func_001D7D60(M2C_FIELD((D_00A7DE00 + temp_s0), void **, 0xB4), 0);
        var_s1 += 1;
    } while (var_s1 < 2);
    if (arg0 == 0) {
        func_002DF8E0(M2C_FIELD(D_00A7DE00, s32 *, 0xC4), 0);
        func_002DF8E0(M2C_FIELD(D_00A7DE00, s32 *, 0xC0), 1);
        func_001D7D60(M2C_FIELD(((M2C_FIELD(D_00A7DE00, u8 *, 4) * 4) + D_00A7DE00), void **, 0xAC), (s8) M2C_FIELD(D_00A7DE00, u8 *, 2));
        func_001D7D60(M2C_FIELD(((M2C_FIELD(D_00A7DE00, u8 *, 4) * 4) + D_00A7DE00), void **, 0xB4), (s8) M2C_FIELD(D_00A7DE00, u8 *, 3));
    } else {
        func_002DF8E0(M2C_FIELD(D_00A7DE00, s32 *, 0xC4), 1);
        func_002DF8E0(M2C_FIELD(D_00A7DE00, s32 *, 0xC0), 0);
    }
    return 1;
}
