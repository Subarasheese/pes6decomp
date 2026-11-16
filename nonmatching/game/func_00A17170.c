/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00991380(u8);
s32 func_009A0270();
extern char D_00591BBC[];
extern char D_00591DCD[];

s32 func_00A17170(void *arg0) {
    s32 temp_s0;
    s32 diff;
    s32 temp_v1;

    if (M2C_FIELD(arg0, u32 *, 0x11C) < 0x06400000U) {
        return 0;
    }
    temp_s0 = func_00991380((M2C_FIELD(arg0, u8 *, 0x12) ^ 1) & 0xFF);
    diff = func_00991380(M2C_FIELD(arg0, u8 *, 0x12)) - temp_s0;
    if (((s32) (*(u8 *)D_00591BBC) >= 2) && ((s32) (*(u8 *)D_00591DCD) > 0)) {
        temp_v1 = func_009A0270() & 0xFF;
        if (diff == -2) {
            if (temp_v1 >= 0x15) {
                return 1;
            }
        } else if (diff == -1) {
            if (temp_v1 >= 0x1F) {
                return 1;
            }
        }
    }
    return 0;
}
