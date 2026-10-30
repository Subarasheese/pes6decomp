/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002DF640(void *, f32, f32);
void func_00972240(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        func_002DF640(M2C_FIELD(arg0, void **, 0), M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4));
        M2C_FIELD(arg0, f32 *, 0xCC) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0xD0) = (f32) M2C_FIELD(arg1, f32 *, 4);
    }
}
