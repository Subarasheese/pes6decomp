/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_001C48E8(s32 *, s32, s32);

void func_00BB1F80(void *arg0, s32 arg1, s32 *arg2) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(s32, s32 *),
              0x14)(arg1, M2C_FIELD(arg0, s32 **, 0xC));
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 8);
    }
    func_001C48E8(M2C_FIELD(arg0, s32 **, 0xC), 0, M2C_FIELD(arg0, s32 *, 8));
}
