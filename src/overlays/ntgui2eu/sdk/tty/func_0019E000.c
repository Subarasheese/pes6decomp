/* compiler: mwcc-3.0 */
#include "pes6/m2c.h"

extern char D_01201898[];

s32 func_0019E000(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(((void *)D_01201898), s32 *, 0x14);
    M2C_FIELD(((void *)D_01201898), s32 *, 0x18) = arg1;
    M2C_FIELD(((void *)D_01201898), s32 *, 0x14) = arg0;
    return temp_v0;
}
