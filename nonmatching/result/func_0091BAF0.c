/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0091BDF0(void *);                      /* extern */
extern void *D_00923FCC;

s32 func_0091BAF0(void) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(D_00923FCC, u8 *, 0xC);
    if (((s32) temp_v1 > 0) && (M2C_FIELD(D_00923FCC, s32 *, 0x14) == 0)) {
        M2C_FIELD(D_00923FCC, u8 *, 0xC) = (u8) (temp_v1 - 1);
        func_0091BDF0(D_00923FCC + 0xC);
        func_0026E840(0x8400F803);
    }
    return 0;
}
