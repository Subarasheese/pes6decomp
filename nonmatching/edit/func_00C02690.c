/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B91390();                                /* extern */
M2C_UNK func_00C028E0(s32, u8);                     /* extern */
M2C_UNK func_00C02A90(s32);                         /* extern */

void func_00C02690(void *arg0) {
    s32 temp_s0;
    u8 temp_a0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 8);
    if (func_00B91390() == 0) {
        temp_a0 = M2C_FIELD(arg0, u8 *, 0x14);
        switch (temp_a0) {                          /* irregular */
        case 0:
            func_00C02A90(temp_s0);
            M2C_FIELD(arg0, u8 *, 0x14) = 1U;
            /* fallthrough */
        case 1:
            func_00C028E0(temp_s0, M2C_FIELD(arg0, u8 *, 0x11));
            break;
        }
    }
}
