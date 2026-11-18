/* compiler: mwcc-3.0.1b151 */
#include "pes6/heading.h"

/* Hold the current heading while the target is inside the threshold. */
u16 func_009B3100(u16 target, u16 current, u16 step, u16 threshold)
{
    u16 delta = target - current + PES6_FULL_TURN;

    if (delta < PES6_HALF_TURN) {
        if (delta <= threshold) {
            return current;
        }
        return (u16)(current + step);
    }
    if (PES6_FULL_TURN - delta <= threshold) {
        return current;
    }
    return (u16)(current - step + PES6_FULL_TURN);
}
