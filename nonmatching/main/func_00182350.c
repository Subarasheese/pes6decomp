/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00143300(void *, void *, s32, u8);
extern void func_00143180(void *, void *, s32, s32);
extern void func_001431D0(void *, void *, s32, s32);
extern void * func_001432B0(void *, void *, s32);
void func_00182350(void *arg0, s32 arg1, s32 arg2, f32 fparg0, f32 fparg1) {
    void *temp_v0;

    func_001431D0(M2C_FIELD(arg0, void **, 0), M2C_FIELD(arg0, void **, 4), arg1, arg2);
    func_00143180(M2C_FIELD(arg0, void **, 0), M2C_FIELD(arg0, void **, 4), arg1, arg2);
    func_00143300(M2C_FIELD(arg0, void **, 0), M2C_FIELD(arg0, void **, 4), arg1, 1U);
    temp_v0 = func_001432B0(M2C_FIELD(arg0, void **, 0), M2C_FIELD(arg0, void **, 4), arg1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, f32 *, 0x14) = fparg1;
        M2C_FIELD(temp_v0, f32 *, 0x34) = fparg0;
    }
}
