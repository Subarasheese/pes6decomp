/* compiler: mwcc-3.0.1b151 */
#include "pes6/heading.h"

u16 func_009B30B0(u16 first, u16 second)
{
    u16 delta = second - first + PES6_FULL_TURN;

    if (delta > PES6_HALF_TURN) {
        return (u16)((PES6_FULL_TURN - delta) / 256);
    }
    return (u16)(delta / 256);
}
