/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00143180(void *, void *, s32, s32);
extern void func_001431D0(void *, void *, s32, s32);
void func_001825A0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_001431D0(M2C_FIELD(arg0, void **, 0), M2C_FIELD(arg0, void **, 4), arg1, arg2);
    func_00143180(M2C_FIELD(arg0, void **, 0), M2C_FIELD(arg0, void **, 4), arg1, arg3);
}
