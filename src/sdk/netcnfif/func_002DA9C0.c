/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 D_003B31FC;
s32 func_002DA938(void);
void func_002DB0B8(s32);

s32 func_002DA9C0(void) {
    s32 r = func_002DA938();

    func_002DB0B8(0);
    D_003B31FC = 0;
    return r;
}
