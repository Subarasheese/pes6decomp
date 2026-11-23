/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 lo : 6;
    u8 b6 : 1;
} Flags;

s32 sceDmaSync(s32, s32, s32);
void sceDmaSend(s32, s32);
extern s32 Pes6Gif_Channel;

void Pes6Gif_Send(s32 a0) {
    do {
    } while (sceDmaSync(Pes6Gif_Channel, 1, 4) != 0);
    ((Flags *)Pes6Gif_Channel)->b6 = 0;
    sceDmaSend(Pes6Gif_Channel, a0);
}
