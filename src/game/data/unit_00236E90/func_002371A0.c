/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_00223960(s32);

s32 func_002371A0(s32 id) {
    void *info = func_00223960(id);

    if ((u32)((u16)id - 0x126) < 2) {
        if (info != NULL) {
            id = M2C_FIELD(info, u16 *, 0x170);
        }
    }
    return id;
}
