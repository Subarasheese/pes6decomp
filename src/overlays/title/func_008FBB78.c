/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern void func_008FB150(void *, s32, s32);
s32 func_008FBB78(void *a, s32 b, s32 c) {
    func_008FB150(M2C_FIELD(a, void **, 0x40), b, (c + 0x13) / 16 * 16);
    return 1;
}
