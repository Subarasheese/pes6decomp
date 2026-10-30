/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001E59F0(void *, s8);
extern void * func_001B9CA0(void *, f32, f32);
void *func_0090F750(void *arg0, f32 fparg0, f32 fparg1) {
    void *temp_v0;

    temp_v0 = func_001B9CA0(arg0, fparg0, fparg1);
    func_001E59F0(M2C_FIELD(temp_v0, void **, 0), 3);
    func_001E59F0(M2C_FIELD(temp_v0, void **, 4), 3);
    return temp_v0;
}
