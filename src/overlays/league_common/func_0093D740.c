/* compiler: mwcc-3.0.1b210 */

#include "types.h"
extern u32 func_0093D790(void);
extern s32 func_001B6A30(s32);

s32 func_0093D740(void) {
    s32 message = func_0093D790();
    if (message == -1)
        message = 1;
    return func_001B6A30(message);
}
