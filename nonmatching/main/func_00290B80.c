/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00290B80(s32 arg0, s32 arg1) {
    s32 v = arg1 & 0xFF;

    if (v == 2) {
        if ((arg0 & 0xFF) < 0x32) {
            arg0 = 0;
        } else {
            arg0 = (arg0 - 0x32) & 0xFF;
        }
    } else if (v == 1) {
    } else if (v == 0) {
        if ((arg0 & 0xFF) >= 0x32) {
            arg0 = 0x63;
        } else {
            arg0 = (arg0 + 0x32) & 0xFF;
        }
    }
    if ((arg0 & 0xFF) >= 0x64) {
        arg0 = 0x63;
    }
    return arg0;
}
