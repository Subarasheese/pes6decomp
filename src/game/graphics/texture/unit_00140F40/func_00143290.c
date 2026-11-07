/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00143290(void *arg0, s32 arg1) {
    s32 p = *(s32 *)((u8 *)arg0 + 0xC);
    return p == 0 ? 0 : *(u8 *)(p + arg1);
}
