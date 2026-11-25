/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_clock.h"
#include "newlib/pal_time.h"

s32 func_00827BF0(s32 timestamp) {
    long seconds = (u32)timestamp;
    struct tm *clock = func_001C3678(&seconds);

    if (clock == 0)
        return 1;
    return clock->tm_mday;
}
