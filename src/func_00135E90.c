/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 D_003E97A0;

void func_00135E90(s32 arg0) {
    if (arg0 & 0x3F) {
loop_1:
        goto loop_1;
    }
    D_003E97A0 = arg0;
}
