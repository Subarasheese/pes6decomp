/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00223E00();                              /* extern */

s32 func_00AFD690(void) {
    void *temp_v0;

    temp_v0 = func_00223E00();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, u8 *, 0x13) = (u8) M2C_FIELD(temp_v0, u8 *, 0x12);
        M2C_FIELD(temp_v0, u8 *, 0x12) = (u8) M2C_FIELD(temp_v0, u8 *, 0x11);
        M2C_FIELD(temp_v0, u8 *, 0x11) = (u8) M2C_FIELD(temp_v0, u8 *, 0x10);
        return 0;
    }
    return 0xFF;
}
