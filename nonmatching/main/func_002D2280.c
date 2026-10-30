/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0017DF20(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0017DF40(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001ACEC0(s32);                         /* extern */
M2C_UNK func_001AE250(void *);                      /* extern */

void func_002D2280(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x10);
    func_001ACEC0(M2C_FIELD(arg0, u8 *, 0) + 0x23BE);
    func_0017DF20(temp_s0, 0x71, M2C_FIELD(arg0, u8 *, 0) + 0x23BE);
    func_0017DF40(temp_s0, 0x71, 0x44C);
    func_001AE250(arg0);
}
