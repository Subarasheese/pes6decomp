/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern u32 D_0059FBDC[];

void func_0027A710(u32 arg0) {
    if (!(arg0 < 0x11)) {
        D_0059FBDC[0] = 0x10;
    } else {
        if ((arg0 == 0) || (3 < arg0)) {
            D_0059FBDC[0] = arg0;
        } else {
            D_0059FBDC[0] = 4;
        }
    }
}
