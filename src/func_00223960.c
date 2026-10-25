/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003A8898[];
extern s32 D_003A889C[];

s32 func_00223960(u16 id) {
    if (id == 0x126) {
        return D_003A8898[0];
    }
    if (id == 0x127) {
        return D_003A889C[0];
    }
    return 0;
}
