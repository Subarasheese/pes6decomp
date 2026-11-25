/* compiler: mwcc-3.0.1b198 */
#include "types.h"

static inline s64 statusBit(s8 flags, s64 mask) { return (s8)(flags & mask); }

s32 func_009539C0(s64 value) {
    s8 flags = (s8)value;
    if (statusBit(flags, 32)) {
        return 1;
    }
    if (statusBit(flags, 16) && !statusBit(flags, 8) && !statusBit(flags, 4) &&
        !statusBit(flags, 2) && !statusBit(flags, 1)) {
        return 3;
    }
    if (!statusBit(flags, 16) && statusBit(flags, 8) && !statusBit(flags, 4) &&
        !statusBit(flags, 2) && !statusBit(flags, 1)) {
        return 4;
    }
    if (!statusBit(flags, 16) && !statusBit(flags, 8) && statusBit(flags, 4) &&
        !statusBit(flags, 2) && !statusBit(flags, 1)) {
        return 5;
    }
    if (!statusBit(flags, 16) && !statusBit(flags, 8) && !statusBit(flags, 4) &&
        statusBit(flags, 2) && !statusBit(flags, 1)) {
        return 6;
    }
    if (!statusBit(flags, 16) && !statusBit(flags, 8) && !statusBit(flags, 4) &&
        !statusBit(flags, 2) && statusBit(flags, 1)) {
        return 7;
    }
    if (statusBit(flags, 16) && statusBit(flags, 8) && statusBit(flags, 4) && statusBit(flags, 2) &&
        statusBit(flags, 1)) {
        return 0;
    }
    if (statusBit(flags, 16) || statusBit(flags, 8) || statusBit(flags, 4) || statusBit(flags, 2) ||
        statusBit(flags, 1))
        return 2;
    return 8;
}
