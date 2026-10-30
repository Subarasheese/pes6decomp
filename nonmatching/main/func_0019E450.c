/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00145440(s32);
extern void func_001887E0(void *);
extern void func_00145380(s32);
extern s32 func_00150110(s32);
s32 func_001454C0(M2C_UNK);                         /* extern */
M2C_UNK func_0014E980(s32, s32, u8);                /* extern */

void func_0019E450(void) {
    u8 sp2F;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;

    func_001887E0(&sp2F);
    temp_v0 = func_001454C0(0x2716);
    if (temp_v0 != 0) {
        temp_s0 = func_00145440(temp_v0);
        func_0014E980(temp_s0, func_00150110(temp_v0), sp2F);
        func_00145380(0x2716);
    }
    temp_v0_2 = func_001454C0(0x2717);
    if (temp_v0_2 != 0) {
        temp_s0_2 = func_00145440(temp_v0_2);
        func_0014E980(temp_s0_2, func_00150110(temp_v0_2), sp2F);
        func_00145380(0x2717);
    }
}
