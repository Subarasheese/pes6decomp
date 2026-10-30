/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009F06D0(s32, s32, s32, s32, s32);     /* extern */

void func_009EFD30(void *arg0) {
    s32 temp_s0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x1C);
    temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0xC);
    func_009F06D0(M2C_FIELD(arg0, s32 *, 0x14), *M2C_FIELD(arg0, s32 **, 0x10), M2C_FIELD(temp_v1, s32 *, 0), M2C_FIELD(temp_v1, s32 *, 4), temp_s0);
    M2C_FIELD(arg0, s32 *, 8) = temp_s0;
}
