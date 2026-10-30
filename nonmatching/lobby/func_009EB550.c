/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009EECE0(s32, void *, s32);
void func_009EB550(void *arg0, s32 arg1) {
    func_009EECE0(arg1, (void *) arg1, M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 8));
}
