/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_001DDE60(s32 a);
s32 func_001DD4E0(s32 arg0) {
    u8 *p;
    p = (u8 *)func_001DDE60(arg0);
    return (p == 0) ? arg0 : *(s32 *)(p + 4);
}
