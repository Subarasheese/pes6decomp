/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00292C50(void);

s32 func_002D53A0(void) {
    s32 r = 0;

    switch (func_00292C50()) {
    case 1:
    case 2:
        r = 1;
        break;
    }
    return r;
}
