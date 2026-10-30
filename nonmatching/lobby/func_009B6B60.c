/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF8E0(s32, s32);                    /* extern */
M2C_UNK func_0081D7E0(s32, s64);                    /* extern */
extern void *D_00A7DC08;

void func_009B6B60(s64 arg0) {
    void *temp_s0;

    temp_s0 = D_00A7DC08;
    func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x294), (s64) (arg0 << 0x38) >> 0x38);
    func_002DF8E0(M2C_FIELD(temp_s0, s32 *, 0x2AC), arg0 & 0xFF);
}
