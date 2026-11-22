/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00230EF0(void);
s32 func_00B029E0(s32);

s32 func_0096F640(s32 arg0) {
    if (func_00230EF0() != 0) {
        return func_00B029E0(arg0) & 0xFF;
    }
    return 0;
}
