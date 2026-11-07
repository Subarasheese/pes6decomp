/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_0014AFA0(void);
s32 func_001E6D00(s32);

s32 func_001E81B0(void) {
    s32 result = 0;
    s32 handle = func_0014AFA0();

    if (handle != 0) {
        result = func_001E6D00(handle);
    }
    return result;
}
