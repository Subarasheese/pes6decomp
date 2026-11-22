/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_00154450(s32, s32);
extern s32 func_0081ED60(s32);

extern s32 D_008A4250[];

s32 func_0081EBC0(s32 arg0) {
    if (func_0081ED60(arg0) == 1) {
        return 1;
    }
    if (D_008A4250[0] == 1) {
        return 0;
    }
    return func_00154450(0, arg0);
}
