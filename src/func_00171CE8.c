/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"
void func_00171B40(void *a, void *b);
s32 func_00171CE8(void *arg0) {
    u8 b[0x10];
    func_00171B40(arg0, b);
    return *(s32 *)(b + 4) != 0;
}
