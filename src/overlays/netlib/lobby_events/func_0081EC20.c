/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_00154490(s32, s32);
extern s32 func_0081EE40(s32);

extern s32 D_008A4250[];

s32 func_0081EC20(s32 arg0) {
    if (func_0081EE40(arg0) == 1) {
        return 1;
    }
    if (D_008A4250[0] == 1) {
        return 0;
    }
    return func_00154490(0, arg0);
}
