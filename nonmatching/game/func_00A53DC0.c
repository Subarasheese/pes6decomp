/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A0BEF0();                                /* extern */
extern void *Pes6Ball_Current;

s32 func_00A53DC0(void) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
    if ((temp_v1 != 4) && (temp_v1 != 8)) {
        return func_00A0BEF0();
    }
    return 0;
}
