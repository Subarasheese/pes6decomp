/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern u8 D_003E795C;
extern u8 D_003E795D;
extern u8 D_003E795E;

void func_008EB3B0(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp1C;
    u8 sp1D;
    u8 sp1E;
    void *temp_v1;

    sp1C = D_003E795C;
    sp1D = D_003E795D;
    sp1E = D_003E795E;
    temp_v1 = M2C_FIELD(((arg1 * 4) + arg0), void **, 0x70);
    if (temp_v1 != NULL) {
        sp1C = arg2 + 0x41;
        func_001DF820(M2C_FIELD(temp_v1, void **, 0xC), (s32) &sp1C);
    }
}
