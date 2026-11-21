/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00B9F840(void);
extern s32 func_00BE4D10(void *);

s32 func_00BE5910(void *arg0) {
    if (func_00B9F840() != 0) {
        M2C_FIELD(arg0, s32(**)(void *), 4) = func_00BE4D10;
    }
    return 0;
}
