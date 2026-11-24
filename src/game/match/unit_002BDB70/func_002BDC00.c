/* compiler: mwcc-3.0.1b151 */
#include "types.h"
s32 func_002BDC00(s32 first, s32 second, s32 firstExtra, s32 secondExtra) {
    s32 own = first + firstExtra, other = second + secondExtra;
    if (own > other)
        return 0;
    return (own < other) ? 1 : 2;
}
