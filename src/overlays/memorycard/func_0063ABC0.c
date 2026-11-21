/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char Pes6MatchContext[];

int func_0063ABC0(int arg0) {
    u32 value;

    if ((u32)arg0 < 2) {
        value = (u32) * (u16 *)(arg0 * 2 + (u32)Pes6MatchContext);
        return value;
    }
    value = 0xffff;
    return value;
}
