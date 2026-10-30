/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00212E00(void *, s8);
extern void *D_003E7E1C;

void func_00CDFFB0(void *arg0) {
    func_00212E00(arg0, (s8) M2C_FIELD(D_003E7E1C, s32 *, 0x14C));
}
