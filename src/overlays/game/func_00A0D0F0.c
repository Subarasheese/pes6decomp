/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00591F16[];
extern char D_00591F17[];

s32 func_00A0D0F0(void *arg0) {
    s32 temp_a0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0);
    temp_a0 = M2C_FIELD(arg0, u8 *, 0x13) * 2;
    if ((temp_v1 != *(((u8 *)D_00591F16) + temp_a0)) && (temp_v1 != *(((u8 *)D_00591F17) + temp_a0))) {
        return 0;
    }
    return 1;
}
