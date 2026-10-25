/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003E97A0;

void func_00135DE0(s32 mode) {
    *(s32 *)(D_003E97A0 + 0x53D0F0) = mode;
    *(u8 *)(D_003E97A0 + 0x53D0FD) = mode == 10 || mode == 2;
}
