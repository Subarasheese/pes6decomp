/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6MatchContext_FrameCounter[];
extern s32 func_00C891E0(s32, s32);

s32 func_00C92310(void) {
    return func_00C891E0(1, ((((((u32)(Pes6MatchContext_FrameCounter[0]) >> 4) & 1) << 8) - (((u32)(Pes6MatchContext_FrameCounter[0]) >> 4) & 1)) & 0xFF));
}
