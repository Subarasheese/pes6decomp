/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B155F0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009BCFA0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_009BD2B0();                                /* extern */
M2C_UNK func_009BD9B0(M2C_UNK);                     /* extern */

s32 func_00B14F90(void) {
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_00B155F0();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x78);
        switch (temp_v1) {                          /* irregular */
        case 2:
            func_0026E840(0x84008401);
            return 1;
        case 0:
            if (func_009BD2B0() == 1) {
                M2C_FIELD(temp_v0, u8 *, 0x78) = 1U;
                func_009BD9B0(1);
                if (M2C_FIELD(temp_v0, u16 *, 0x80) == 0) {
                    func_009BCFA0(0, 0);
                }
                if (M2C_FIELD(temp_v0, u16 *, 0x8C) == 0) {
                    func_009BCFA0(0, 1);
                }
            }
            /* fallthrough */
        default:
            return 0;
        }
    } else {
        return 1;
    }
}
