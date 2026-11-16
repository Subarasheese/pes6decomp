/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char Pes6Random_State[];

u16 Pes6Random_Below(u32 arg0) {
    u16 n;
    u16 r;
    u32 s;

    n = arg0;
    if (n == 0) {
        return 0;
    }
    s = *(u32 *)Pes6Random_State;
    s ^= s << 17;
    s ^= s >> 15;
    *(u32 *)Pes6Random_State = s;
    r = (u16)(u32)((f32)arg0 * (2.3283064e-10f * (f32)*(u32 *)Pes6Random_State));
    if (r >= n) {
        r = n - 1;
    }
    return r;
}
