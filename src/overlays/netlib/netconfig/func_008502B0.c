/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern char Pes6MatchContext_FrameCounter[];

s32 func_008502B0(void) {
    (*(s32 *)Pes6MatchContext_FrameCounter) += 1;
    return 0;
}
