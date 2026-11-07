/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001EDAE0(void *, s8);
void func_008CA390(s32 arg0, s32 arg1, s8 arg2) {
    if ((arg0 != 0) && (arg1 < 2)) {
        func_001EDAE0(((void **)((s8 *)arg0 + 0x178))[arg1], arg2);
        M2C_FIELD((arg1 + arg0), s8 *, 0x1DE) = arg2;
    }
}
