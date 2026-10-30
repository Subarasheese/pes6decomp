/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
M2C_UNK func_00978C20();                            /* extern */
M2C_UNK func_00978C40();                            /* extern */
s32 func_00978C80();                                /* extern */
extern void *D_00A68D78;

u8 func_009798A0(void) {
    s32 temp_v0;

    if (M2C_FIELD(D_00A68D78, u8 *, 4) != 0) {
        func_00978C20();
    }
    temp_v0 = func_00978C80();
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_00978C40();
        func_00213800(M2C_FIELD(D_00A68D78, void **, 0));
        if (M2C_FIELD(D_00A68D78, u8 *, 4) == 0) {
            M2C_FIELD(D_00A68D78, s8 *, 5) = 1;
        } else {
            M2C_FIELD(D_00A68D78, s8 *, 5) = 0;
        }
    case 0:
    default:
        return 0U;
    case 3:
        func_00978C40();
        M2C_FIELD(D_00A68D78, u8 *, 8) = 2U;
        M2C_FIELD(D_00A68D78, s8 *, 5) = 6;
        return M2C_FIELD(D_00A68D78, u8 *, 8);
    }
}
