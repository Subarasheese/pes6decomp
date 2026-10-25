/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001454C0(s32);
void func_0014F770(s32, s32, s32, s32);

void func_0017D640(s32 a, s32 b, s32 c, s32 d) {
    s32 x = func_001454C0(a);

    func_0014F770(x, func_001454C0(b), c, d);
}
