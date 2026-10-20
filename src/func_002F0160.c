/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_001F1EA0(s32);                         /* extern */

void func_002F0160(void *arg0) {
    if (arg0 != NULL) {
        func_001F1EA0(M2C_FIELD(arg0, s32 *, 0x60));
        func_001EDD90(M2C_FIELD(arg0, s32 *, 0x90));
        func_001C48E8(arg0, 0, 0x98);
    }
}
