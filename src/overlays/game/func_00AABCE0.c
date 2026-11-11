/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


s32 func_00A14EC0(void *, void *);
M2C_UNK func_00AABA00(void *, s32, M2C_UNK);

void func_00AABCE0(void *arg0, s32 arg1) {
    if ((func_00A14EC0(arg0, arg0) == 0) || (M2C_FIELD(arg0, u32 *, 0x114) <= 0x120U)) {
        func_00AABA00(arg0, arg1, 1);
    }
}
