/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00BC4F70(s32, s32);
extern s32 func_00BE5E80(void *);

s32 func_00BE5DE0(void *arg0) {
    if (func_00BC4F70(0xED0017, 0) != 0) {
        M2C_FIELD(arg0, s32 (**)(void *), 4) = func_00BE5E80;
    }
    return 0;
}
