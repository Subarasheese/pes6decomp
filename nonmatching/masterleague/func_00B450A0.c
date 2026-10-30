/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B45600(void);
M2C_UNK func_00B45180(M2C_UNK);                     /* extern */
M2C_UNK func_00B45260(M2C_UNK);                     /* extern */

s32 func_00B450A0(void) {
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_00B45600();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x3B6);
        switch (temp_v1) {                          /* irregular */
        case 3:
            break;
        case 1:
            func_00B45180(1);
            break;
        case 0:
            func_00B45260(1);
            break;
        }
    }
    return 0;
}
