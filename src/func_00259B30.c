/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_0025FFF0(s16 *size);

s32 func_00259B30(s16 *p) {
    s16 size[2];
    func_0025FFF0(size);
    if (p[0] >= 0 && p[1] >= 0 && p[0] < size[0] && p[1] < size[1]) {
        return 1;
    }
    return 0;
}
