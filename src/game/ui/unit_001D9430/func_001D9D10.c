/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_0052AB74[];
extern s32 D_0052AB78[];
extern s32 D_0052AB7C[];
extern s32 D_0052AB80[];

void func_001D9D10(s32 *sizes) {
    if (sizes != NULL) {
        D_0052AB74[0] = 0;
        D_0052AB78[0] = D_0052AB74[0] + sizes[0];
        D_0052AB7C[0] = D_0052AB78[0] + sizes[1];
        D_0052AB80[0] = D_0052AB7C[0] + sizes[2];
    }
}
