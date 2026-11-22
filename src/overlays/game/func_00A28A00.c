/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_002075B0(void *, s32, s32, s32);
s32 func_00A07C00(void *);
s32 func_00A11DD0(void *, s32, s32);
s32 func_00A99F00(void *, s32);

s32 func_00A28A00(void *arg0, s32 arg1, s32 arg2) {
    void *entry;
    void *entry2;

    if (func_00A99F00(arg0, 0) == 0) {
        if (func_00A07C00(arg0) != 0) {
            entry2 = M2C_FIELD(arg0, void **, 4);
            if (M2C_FIELD(entry2, u16 *, 0x30) != (arg2 & 0xFFFF)) {
                func_002075B0(entry2, arg2, 0, 2);
            }
        }
        return 0;
    } else {
        if (func_00A11DD0(arg0, arg1, 0) != 0) {
            return 0;
        }
        entry = M2C_FIELD(arg0, void **, 4);
        if (M2C_FIELD(entry, u16 *, 0x30) != (arg2 & 0xFFFF)) {
            func_002075B0(entry, arg2, 0, 6);
        }
        return 1;
    }
}
