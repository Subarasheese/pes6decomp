/* compiler: mwcc-3.0.1b151 */
#include "pes6/heading.h"

u16 func_009B32D0(u16 target, u16 current, u16 step)
{
    u16 delta = target - current + PES6_FULL_TURN;

    if (delta < PES6_HALF_TURN) {
        if (delta <= step) {
            return target;
        }
        return (u16)(current + step);
    }
    if (PES6_FULL_TURN - delta <= step) {
        return target;
    }
    return (u16)(current - step + PES6_FULL_TURN);
}
