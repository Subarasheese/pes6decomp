/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00D084F0(void *, s32);

s32 func_00D0A750(s8 *arg0, s32 arg1) {
    if (arg0 == 0) {
        return 0;
    } else {
        func_00D084F0(((arg0) + 0x808), arg1);
        if (arg0 != 0) {
            ((s8 *)(arg0))[0xD7B] = 1;
            ((s8 *)(arg0))[0xD7A] = 1;
        }
        return 1;
    }
}
