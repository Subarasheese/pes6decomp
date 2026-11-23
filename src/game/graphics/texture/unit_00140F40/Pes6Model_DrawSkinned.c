/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6GfxRing_Alloc(s32);                             /* extern */
M2C_UNK Pes6BonePalette_End();                            /* extern */
M2C_UNK Pes6BonePalette_Build(s32, s32, s32, s32);          /* extern */
M2C_UNK Pes6Model_Draw(s32, s32, s32, s32, M2C_UNK, s32); /* extern */

void Pes6Model_DrawSkinned(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg4, s32 arg5, s32 arg6, s32 arg7) {
    Pes6BonePalette_Build(Pes6GfxRing_Alloc(arg6 << 6), arg6, arg2, arg7);
    Pes6Model_Draw(arg0, arg1, arg2, arg3, 0, arg5);
    Pes6BonePalette_End();
}
