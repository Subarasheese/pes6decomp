/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern s32 D_00C9F230[];
void func_00C22A60(u8 *a0);
void func_00C22DF0(u8 *a0) {
    u32 i;
    for (i = 0; i < 2; i++) {
        D_00C9F230[1 + i] = a0[i];
    }
    func_00C22A60(a0);
}
