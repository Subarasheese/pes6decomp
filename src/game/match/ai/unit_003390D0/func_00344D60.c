/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E61A8[];
s32 func_00344250(s32);
s32 Pes6Job_Create(s32, s32 (*)(s32), s32, s32 *);

s32 func_00344D60(void) {
    Pes6Job_Create(0x1B, func_00344250, 4, D_003E61A8);
    return 1;
}
