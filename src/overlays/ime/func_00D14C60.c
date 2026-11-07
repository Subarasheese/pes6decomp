/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { f32 x, y; } V2;
extern void func_001DF250(void *, void *);
extern void *D_003EB360;
extern V2 D_00D395E8[];

s32 func_00D14C60(V2 *arg0) {
    arg0->x = 0;
    func_001DF250(D_003EB360, arg0);
    *D_00D395E8 = *arg0;
    return 0;
}
