/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00226710(void);

s32 func_009B72D0(void) {
    s32 temp_v0;

    temp_v0 = func_00226710() & 0xFF;
    switch (temp_v0) {
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
        return 1;
    default:
        return 0;
    }
}
