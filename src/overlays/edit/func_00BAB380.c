/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00B91590(s32, s32);
extern s8 D_00CE47EC[];

s32 func_00BAB380(s8 arg0) {
    D_00CE47EC[0] = arg0;
    return func_00B91590(0x14, 1);
}
