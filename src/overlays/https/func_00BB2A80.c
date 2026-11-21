/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_001C48E8(s32 *, s32, s32);
extern void func_00BB3380(s32, s32, s32, s32, s32);

s32 *func_00BC0A38(M2C_UNK);

s32 *func_00BB2A80(void) {
    s32 *temp_v0;

    temp_v0 = func_00BC0A38(0x60);
    if (temp_v0 == NULL) {
        func_00BB3380(6, 0x72, 0x21, 0, 0);
        return NULL;
    }
    func_001C48E8(temp_v0, 0, 0x60);
    return temp_v0;
}
