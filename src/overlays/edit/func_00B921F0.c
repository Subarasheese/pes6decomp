/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_00CB3FF8[];

s32 func_00B921F0(s32 arg0) {
    return D_00CB3FF8[arg0 & 0x1];
}
