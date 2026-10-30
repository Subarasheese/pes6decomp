/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_002DB850(void *);
extern void func_002DF640(void *, f32, f32);
M2C_UNK func_002DF050(void *, f32 *);               /* extern */

void func_00BD73D0(void *arg0, void *arg1) {
    f32 sp30;
    f32 sp34;
    f32 temp_f0;

    func_002DF050(arg1, &sp30);
    temp_f0 = func_002DB850(arg0);
    sp34 = temp_f0;
    func_002DF640(arg1, sp30, temp_f0);
}
