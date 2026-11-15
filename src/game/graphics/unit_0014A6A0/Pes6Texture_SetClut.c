/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK Pes6TextureCache_Invalidate(s32);                         /* extern */
s32 Pes6Texture_GetClut(s32);                             /* extern */
s32 Pes6Texture_GetCacheKey(s32);                             /* extern */
s32 Pes6Texture_GetPsm();                                /* extern */
M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */

void Pes6Texture_SetClut(s32 arg0, s32 arg1) {
    M2C_UNK var_s0;
    s32 temp_v0;

    temp_v0 = Pes6Texture_GetPsm();
    switch (temp_v0) {                              /* irregular */
    case 20:
        var_s0 = 0x40;
        break;
    case 19:
        var_s0 = 0x400;
        break;
    default:
        var_s0 = 0;
        break;
    }
    func_001C4730(Pes6Texture_GetClut(arg0), arg1, var_s0);
    Pes6TextureCache_Invalidate(Pes6Texture_GetCacheKey(arg0));
}
