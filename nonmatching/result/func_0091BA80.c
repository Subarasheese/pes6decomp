/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0091BDF0();                            /* extern */
extern void *D_00923FCC;

s32 func_0091BA80(void) {
    if (((s32) M2C_FIELD(D_00923FCC, u8 *, 0xC) < (M2C_FIELD(D_00923FCC, u8 *, 0xD) - 1)) && (M2C_FIELD(D_00923FCC, s32 *, 0x14) == 0)) {
        func_0026E840(0x8400F803);
        M2C_FIELD(D_00923FCC, u8 *, 0xC) = (u8) (M2C_FIELD(D_00923FCC, u8 *, 0xC) + 1);
        func_0091BDF0();
    }
    return 0;
}
