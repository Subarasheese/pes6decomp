/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 func_0099D470(s32);

s32 func_008FD210(s32 arg0) {
    if ((arg0 == 0) && ((func_0099D470(arg0) & 0xFF) == 0xFF)) {
        return 0;
    }
    return func_0099D470(arg0) & 0xFF;
}
