/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6Team_ResolveSpecialId(s32);
extern char Pes6MatchContext[];

int func_0090A100(int arg0) {
    u32 value;

    value = Pes6Team_ResolveSpecialId((u32) * (u16 *)(arg0 * 2 + (u32)Pes6MatchContext));
    return value & 0xffff;
}
