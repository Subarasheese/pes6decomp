/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_008FCB60(s32, s32, s32);

s32 func_008FC600(s32 arg0, s32 arg1, s32 arg2) {
    switch (func_008FCB60(arg0, arg1, arg2)) {
    case 0:
        return 0;
    default:
        return 1;
    }
}
