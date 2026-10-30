/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00198030(s32, u32);
extern s32 D_00602154;
extern s32 D_006025C4;

void func_001045C8(void) {
    if ((D_00602154 == 2) || (D_00602154 == 4)) {
        func_00198030(D_006025C4, 2U);
        return;
    }
    func_00198030(D_006025C4, *(u32 *)0x011AEB3C);
}
