/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 sceDmaSync(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s32 Pes6Gif_Channel;

void func_00121500(void) {
    do {

    } while (sceDmaSync(Pes6Gif_Channel, 1, 4) != 0);
}
