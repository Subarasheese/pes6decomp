/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_0081E780(s32);
extern s32 func_00154450(s32, s32);
extern s32 D_008A4250[];

int func_0081E5C0(int arg0) {
    int value;

    if (D_008A4250[0] == 1) {
        value = func_0081E780(arg0);
        if (value == 1) {
            value = 1;
        } else {
            value = func_00154450(0, arg0);
        }
        return value;
    }
    value = 0;
    return value;
}
