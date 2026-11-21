/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_00223E00(s32);

s32 func_00B02890(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00223E00(arg0);
    if (temp_v0 == NULL) {
        return 0;
    }
    return (M2C_FIELD(temp_v0, u8 *, 6) & 0x3F) == 4;
}
