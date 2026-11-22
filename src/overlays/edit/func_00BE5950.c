/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00B9F830(void);
extern s32 func_00BE5770(void *);

s32 func_00BE5950(void *arg0) {
    if (func_00B9F830() != 0) {
        M2C_FIELD(arg0, s32 (**)(void *), 4) = func_00BE5770;
    }
    return 0;
}
