/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 D_0050D4E4[];
s32 func_00154250(s32 i, s32 b) { return (D_0050D4E4[i * 22] & (1 << b)) != 0; }
