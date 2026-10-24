/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_002216F0(u16, s32);
extern char D_0058E5BE[];

void func_003103C0(s32 index) {
    s32 maskedIndex;
    s32 slot;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    func_002216F0(*(u16 *)(D_0058E5BE + slot * 0x240), 0);
}
