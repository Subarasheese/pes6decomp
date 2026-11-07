/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 D_003D28A0[][2];
extern f32 D_00529AB4[];
s32 func_001CDAA0(void);
s32 func_001CDA90(void);

void func_001CDBD0(void) {
    D_00529AB4[0] = 1.0f / D_003D28A0[func_001CDAA0()][func_001CDA90()];
}
