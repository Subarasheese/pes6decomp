/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u16 Pes6MatchContext[];
extern u16 Pes6Team_ResolveSpecialId(u16);
extern u8 D_003A9B74[];
s32 func_008FFAA0(void) {
    return Pes6Team_ResolveSpecialId(Pes6MatchContext[D_003A9B74[0]]) & 0xFFFF;
}
