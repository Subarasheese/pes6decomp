/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char Pes6Random_State[];

s32 func_00151D80(s32 arg0, u32 arg1) {
    u32 *p;
    u32 v;
    s32 n;
    s32 r;

    n = arg1 & 0xFFFF;
    if (n != 0) {
        p = (u32 *)(Pes6Random_State + arg0 * 4);
        v = *p;
        v = v ^ (v << 17);
        *p = v ^ (v >> 15);
        r = (u32)((f32)arg1 * (2.3283064e-10f * (f32)*p));
        r &= 0xFFFF;
        if (r >= n) return (n - 1) & 0xFFFF;
        return r;
    }
    return 0;
}
