/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00131DB0();                            /* extern */
M2C_UNK func_001322C0(s32);                         /* extern */

void func_00132280(void *arg0) {
    func_00131DB0();
    func_001322C0(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s8 *, 0x1D) = (s8) ((M2C_FIELD(arg0, s8 *, 0x1D) & ~0x3F) | 2);
}
