/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_005379F0[];
void func_0020B420(void);

void func_0020A630(void) {
    if (D_005379F0[0] == 0) {
        return;
    }
    if (D_005379F0[0] & 1) {
        func_0020B420();
    }
    D_005379F0[0] = 0;
}
