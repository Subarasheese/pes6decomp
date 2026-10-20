/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 D_005A2330[]; void func_00291600(s32 i, u8 v) { u8 *p = D_005A2330; if (p == 0) return; if (i < 0) return; if (i >= 2) return; p[0x140 + i] = v; }
