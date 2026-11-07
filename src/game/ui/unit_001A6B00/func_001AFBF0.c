/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001AC360(s32, s32, s32);

void func_001AFBF0(s32 a, s32 b) {
    s32 h = b / 2;
    s32 v = h + 0x41B;

    if (h > 4) {
        v = 0x41F;
    }
    func_001AC360(a, 0x41A, v);
}
