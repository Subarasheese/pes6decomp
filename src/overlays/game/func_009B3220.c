/* compiler: mwcc-3.0.1b151 */
#include "pes6/heading.h"

extern u8 D_00591DF0[];

u16 func_009B3220(u16 target, u16 current, u16 step)
{
    u16 delta;
    u8 rate = D_00591DF0[0];

    if (rate) {
        step = step * 60 / rate;
    }
    delta = target - current + PES6_FULL_TURN;
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
