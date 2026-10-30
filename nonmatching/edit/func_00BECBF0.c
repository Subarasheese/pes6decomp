/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BECB20(void *);                      /* extern */

void func_00BECBF0(void *arg0, s32 arg1) {
    func_001C48E8(0, 0xF8);
    M2C_FIELD(arg0, s16 *, 0xE4) = 0xFFFF;
    M2C_FIELD(arg0, s8 *, 0x64) = 0x1B;
    M2C_FIELD(arg0, s8 *, 0x65) = 0x1B;
    M2C_FIELD(arg0, s8 *, 0x68) = 0xA;
    M2C_FIELD(arg0, s8 *, 0x69) = 0xA;
    if (arg1 == 0) {
        M2C_FIELD(arg0, s8 *, 0xEE) = 1;
    }
    func_00BECB20(arg0);
}
