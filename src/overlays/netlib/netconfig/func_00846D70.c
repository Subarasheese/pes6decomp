/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s16 D_003E77F0;
extern s16 D_003E77F4;

s32 func_00846D70(u16 arg0) {
    D_003E77F0 = arg0;
    D_003E77F4 = arg0;
    return arg0 & 0xFFFF;
}
