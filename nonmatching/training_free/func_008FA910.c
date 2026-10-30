/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEDA0(void *, u8);
s32 func_00C74AD0();                                /* extern */
extern void *D_003EA6C0;

s32 func_008FA910(M2C_UNK arg0, u8 *arg1) {
    s32 temp_s0;
    u8 temp_a0;

    temp_a0 = *arg1;
    temp_s0 = func_00C74AD0();
    func_001EEDA0(M2C_FIELD(D_003EA6C0, void **, 0x174), (((temp_a0 * 0x1E) / 100) + ((u32) (temp_a0 * 0x1E) >> 0x1F)) & 0xFF);
    return temp_s0;
}
