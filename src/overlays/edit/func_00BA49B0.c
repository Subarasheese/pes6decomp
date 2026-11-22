/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 func_002EDE60(s32);

s32 func_00BA49B0(s32 arg0) {
    if (arg0 == 0) {
        return func_002EDE60(0) & 0xFF;
    }
    if (arg0 == 1) {
        return func_002EDE60(1) & 0xFF;
    }
    return 0;
}
