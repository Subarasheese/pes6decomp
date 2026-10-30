/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;

s32 func_00967A00(void *arg0) {
    u16 temp_v1_2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_v1) {                              /* irregular */
    case 2:
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x18);
        if ((temp_v1_2 != 0xD4) && (temp_v1_2 != 0x45)) {
block_13:
        default:
            return 0;
        }
        return 1;
    case 19:
    case 1:
    case 14:
        if (M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) < -256.0f) {
            return 1;
        }
        goto block_13;
    }
}
