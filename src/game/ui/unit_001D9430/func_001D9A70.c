/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_0052AB74[];
extern s32 *D_0052AB70[];

s32 func_001D9A70(s32 i, s32 base, s32 j) {
    return base + (D_0052AB74[j] + D_0052AB70[0][i]);
}
