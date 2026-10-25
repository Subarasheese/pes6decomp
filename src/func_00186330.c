/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_0051FFD0[];
extern s32 D_0051FFD8[];
extern s32 func_00188A30(void);
extern s32 func_001889E0(void);
extern s32 func_001888F0(void);
extern void func_001867C0(s32 flags);

void func_00186330(void) {
    s32 flags = 0xD1;

    if (func_00188A30() == 1) {
        flags |= 0x20;
    }
    if (func_001889E0() == 1) {
        flags |= 0x10000;
    }
    if (func_001888F0() == 1) {
        flags |= 0x100;
    } else {
        flags |= 0x200;
    }
    func_001867C0(flags);
    D_0051FFD0[0] |= 0x10361;
    D_0051FFD8[0] |= 0x10361;
}
