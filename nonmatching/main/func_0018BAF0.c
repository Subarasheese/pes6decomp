/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018BC10(M2C_UNK);                     /* extern */
M2C_UNK func_0018BE00(u8);                          /* extern */
extern void *D_00520130;

void func_0018BAF0(void) {
    u8 temp_a0;

    if (D_00520130 != NULL) {
        temp_a0 = M2C_FIELD(D_00520130, u8 *, 0xA);
        if (temp_a0 == 1) {
            func_0018BE00(temp_a0);
            M2C_FIELD(D_00520130, u8 *, 0xA) = 0U;
        }
        if (M2C_FIELD(D_00520130, u8 *, 6) == 1) {
            func_0018BC10(1);
            M2C_FIELD(D_00520130, u8 *, 6) = 0U;
        }
    }
}
