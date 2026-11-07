/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_0027A600(s32, s32);                     /* extern */

void func_0027A5B0(void *arg0, s8 arg1) {
    func_0027A600((s32)arg0, 2);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0xA) = arg1;
}
