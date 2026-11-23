/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 func_008FCE70(s32), func_008FCDC0(s32), func_008FCF00(s32);
extern void func_008F84E0(u32);
void func_008F7B30(void) {
    s32 mask = 0;
    mask |= 0x1e000;
    if ((mask & 0x8000) && !func_008FCE70(0))
        mask &= ~0x8000u;
    if ((mask & 0x10000) && !func_008FCDC0(0))
        mask &= ~0x10000u;
    if ((mask & 0x2000) && !func_008FCF00(0))
        mask &= ~0x2000u;
    func_008F84E0(mask);
}
