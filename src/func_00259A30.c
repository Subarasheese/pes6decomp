/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_0025F8F0(s16 *min, s16 *max);

s32 func_00259A30(s16 *p) {
    s16 min[2];
    s16 max[2];
    func_0025F8F0(min, max);
    if (p[0] >= min[0] && p[1] >= min[1] && p[0] <= max[0] && p[1] <= max[1]) {
        return 1;
    }
    return 0;
}
