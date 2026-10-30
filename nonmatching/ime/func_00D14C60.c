/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF250(void *, void *);
extern void *D_003EB360;
extern char D_00D395E8[];
extern char D_00D395EC[];

s32 func_00D14C60(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK32 *, 0) = 0;
    func_001DF250(D_003EB360, arg0);
    (*(M2C_UNK32 *)D_00D395E8) = M2C_FIELD(arg0, M2C_UNK32 *, 0);
    (*(f32 *)D_00D395EC) = M2C_FIELD(arg0, f32 *, 4);
    return 0;
}
