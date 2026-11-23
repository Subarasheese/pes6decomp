/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00101EF8(M2C_UNK);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);
extern s32 Pes6Gif_Channel;

void func_00121530(void) {
    func_001C48E8((s32)&Pes6Gif_Channel, 0, 4);
    Pes6Gif_Channel = func_00101EF8(2);
}
