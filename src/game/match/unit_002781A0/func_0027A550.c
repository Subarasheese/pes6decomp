/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_0027A600(s32, s32);                     /* extern */

void func_0027A550(void *arg0, s16 arg1, s16 arg2) {
    func_0027A600((s32)arg0, 6);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x10) = arg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x12) = arg2;
}
