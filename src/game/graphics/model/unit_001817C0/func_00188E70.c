/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern u8 D_00397150[];
extern u8 D_0051FF48[];
extern u8 D_0051FF49[];
extern u8 D_005200B0[];

u8 func_00188E70(s32 port) {
    s32 setting;
    if (!(D_005200B0[port] & 8)) {
        return 0U;
    }
    if (port == 0) {
        setting = D_0051FF49[0];
    } else {
        setting = D_0051FF48[0];
    }
    return D_00397150[setting];
}
