/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009B4600(u32);
extern void func_009B45B0(u32);
M2C_UNK func_009B4630(u8);                          /* extern */
extern u8 D_003EA738;

s32 func_00BD1780(void) {
    func_009B4600(1U);
    func_009B4630(D_003EA738);
    func_009B45B0(1U);
    return 1;
}
