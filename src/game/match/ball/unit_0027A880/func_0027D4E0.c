/* compiler: mwcc-3.0.1b151 */
#include "pes6/ball.h"

extern u8 D_005926D5[];
extern u8 D_00592378[];

void func_0027D4E0(u8 actor)
{
    u8 i;

    for (i = 0; i < PES6_TOUCH_HISTORY_LENGTH - 1; i++) {
        D_00591E00.state.touchActors[9 - i] = D_00591E00.state.touchActors[8 - i];
        D_00591E00.state.touchFrames[9 - i] = D_00591E00.state.touchFrames[8 - i];
    }
    D_00591E00.state.touchActors[0] = actor;
    D_00591E00.state.touchFrames[0] = 0;
    D_005926D5[0] = 0;
    D_00592378[0] = 0;
}
