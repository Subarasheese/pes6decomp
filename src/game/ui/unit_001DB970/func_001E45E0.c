/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_0052AF10[];
void func_001C48E8(void *, s32, s32);
s32 func_00154060(s32, s32);

void func_001E45E0(s32 handle) {
    func_001C48E8(D_0052AF10, 0, 8);
    if (handle == 0) {
        return;
    }
    M2C_FIELD(D_0052AF10, s32 *, 0) = handle;
    M2C_FIELD(D_0052AF10, s32 *, 4) = func_00154060(handle, 4);
}
