/* compiler: mwcc-3.0.1b151 */
#include "pes6/ball.h"

void func_0027D460(void)
{
    u8 i;

    for (i = 0; i < PES6_TOUCH_HISTORY_LENGTH; i++) {
        D_00591E00.state.touchActors[i] = 0xFF;
    }
}
