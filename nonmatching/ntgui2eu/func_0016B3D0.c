/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00135018(void);
void func_0016B3D0(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    func_00135018();
}
