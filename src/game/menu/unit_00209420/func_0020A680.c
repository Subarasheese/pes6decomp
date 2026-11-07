/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_005379F0[];
void func_0020B450(void);

void func_0020A680(s32 mode) {
    if (D_005379F0[0] != 0) {
        return;
    }
    D_005379F0[0] = mode;
    if (mode & 1) {
        func_0020B450();
    }
}
