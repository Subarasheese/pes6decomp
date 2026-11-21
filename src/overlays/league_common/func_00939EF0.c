/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_0093ACB0(s32);
extern s32 func_00B16E60(void);

s32 func_00939EF0(s32 arg0) {
    if ((func_00B16E60() & 0xFF) == 2) {
        return 0;
    }
    return func_0093ACB0(arg0);
}
