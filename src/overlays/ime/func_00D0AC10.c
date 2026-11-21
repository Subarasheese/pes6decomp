/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00D08D60(void *, s64);

s32 func_00D0AC10(s8 *arg0, s64 arg1) {
    if (arg0 == 0) {
        return 1;
    } else {
        func_00D08D60(((arg0) + 0x808), arg1);
        ((s8 *)(arg0))[0xD7A] = 1;
        return 0;
    }
}
