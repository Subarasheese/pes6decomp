/* compiler: mwcc-3.0.1b210 */
#include "pes6/lineup_teamwork.h"
u8 func_0024EA00(s32 first, s32 second) {
    const Pes6TeamworkParams *a, *b;
    if ((u16)first == (u16)second)
        return 0;
    if ((u16)first == 0)
        return 0;
    if ((u16)second == 0)
        return 0;
    if (func_00210DF0() == 2) {
        a = (const Pes6TeamworkParams *)func_00970870(first);
        b = (const Pes6TeamworkParams *)func_00970870(second);
    } else {
        a = (const Pes6TeamworkParams *)Pes6Player_GetParams(first);
        b = (const Pes6TeamworkParams *)Pes6Player_GetParams(second);
    }
    return func_0024E920(first, a, second, b);
}
