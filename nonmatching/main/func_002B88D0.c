/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00270570(void);
extern int func_0017E110(void);
extern int func_0017E140(void);
extern void func_002B88C0(float);
M2C_UNK func_002B7F40();                            /* extern */
M2C_UNK func_002B82B0();                            /* extern */
f32 func_009B4380();                                /* extern */
extern s32 D_003E9D44;

void func_002B88D0(void) {
    s32 temp_f0;

    if (func_0017E140() != 0) {
        if (func_00270570() == 0) {
            temp_f0 = D_003E9D44;
            D_003E9D44 += 1;
            func_002B88C0((f32) temp_f0);
        } else {
            func_002B88C0(3.0f * func_009B4380());
        }
        func_002B82B0();
    }
    if (func_0017E110() != 0) {
        func_002B7F40();
    }
}
