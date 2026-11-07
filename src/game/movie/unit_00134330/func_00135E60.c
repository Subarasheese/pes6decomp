/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 *D_003E97A0;

void func_00135E60(s32 mode) {
    *(s32 *)(D_003E97A0 + 0x53D0E8) = mode;
    *(u8 *)(D_003E97A0 + 0x53D0FE) = mode == 0x50;
}
