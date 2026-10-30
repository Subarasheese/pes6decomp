/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 func_00226710(void);
extern u8 func_00229D70(void);
s32 func_0022B890(void) {
    s32 temp_v1;

    if (func_00231240() == 1) {
        return 0;
    }
    temp_v1 = func_00226710() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 33:
        return 4;
    case 39:
        return 5;
    case 38:
        return 6;
    case 29:
        return func_00229D70() & 0xFF;
    default:
        return 0;
    }
}
