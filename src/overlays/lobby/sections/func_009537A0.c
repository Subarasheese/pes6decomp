/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern s8 func_00824800(void);

static inline s64 statusBit(s8 flags, s64 mask) { return (s8)(flags & mask); }

s32 func_009537A0(s64 value) {
    s32 allowed = 0;
    s8 flags = (s8)value;
    s8 mode = func_00824800();
    if (statusBit(flags, 32))
        return 1;
    switch (mode) {
    case 4:
        if (statusBit(flags, 16))
            allowed = 1;
        break;
    case 3:
        if (statusBit(flags, 8))
            allowed = 1;
        break;
    case 2:
        if (statusBit(flags, 4))
            allowed = 1;
        break;
    case 1:
        if (statusBit(flags, 2))
            allowed = 1;
        break;
    case 0:
        if (statusBit(flags, 1))
            allowed = 1;
        break;
    }
    return allowed;
}
