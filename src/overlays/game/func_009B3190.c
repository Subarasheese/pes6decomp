/* compiler: mwcc-3.0.1b151 */
#include "pes6/heading.h"

static inline int rotationSign(int direction)
{
    int sign = direction == 0 ? 1 : -1;
    return sign;
}

u16 func_009B3190(u16 target, u16 current, u16 step, int direction)
{
    u16 delta = target - current + PES6_FULL_TURN;

    if (direction != (delta <= PES6_HALF_TURN) && Pes6Heading_Distance(target, current) <= step) {
        return target;
    }
    return (u16)(current + rotationSign(direction) * step);
}
