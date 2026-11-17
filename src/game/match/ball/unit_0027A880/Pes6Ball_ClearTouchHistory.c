/* compiler: mwcc-3.0.1b151 */
#include "pes6/ball.h"

void Pes6Ball_ClearTouchHistory(void)
{
    u8 i;

    for (i = 0; i < PES6_TOUCH_HISTORY_LENGTH; i++) {
        Pes6Ball_Current->previousActions[i] = 0xFF;
    }
}
