/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 Pes6Texture_GetClut(s32);
s32 Pes6Texture_GetPsm(s32);
extern char D_00376A50[];

s32 func_00151440(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = Pes6Texture_GetClut(arg0);
    temp_v0 = Pes6Texture_GetPsm(arg0);
    if (temp_v0 == 20) {
        return temp_s0 + arg1 * 4;
    }
    if (temp_v0 == 19) {
        return temp_s0 + ((arg1 & ~0x1F) | *(s8 *)(D_00376A50 + (arg1 & 0x1F))) * 4;
    }
    return 0;
}
