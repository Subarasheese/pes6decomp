/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00591E4F[];
extern char D_00591E50[];

u8 func_00AA00C0(void *arg0) {
    s32 temp_a0;
    u8 temp_v0;

    temp_a0 = M2C_FIELD(arg0, u8 *, 0x13) * 2;
    temp_v0 = *(((u8 *)D_00591E4F) + temp_a0);
    if (M2C_FIELD(arg0, u8 *, 0) != temp_v0) {
        return temp_v0;
    }
    return *(((u8 *)D_00591E50) + temp_a0);
}
