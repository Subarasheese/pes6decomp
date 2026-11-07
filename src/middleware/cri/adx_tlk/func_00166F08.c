/* compiler: ee-gcc-2.96-Os-G0 */
#include "pes6/m2c.h"

extern void func_00159EB8(void);
extern void func_00159EC0(void);
f32 func_00166F48(s32);                             /* extern */

f32 func_00166F08(s32 arg0) {
    f32 temp_f20;

    func_00159EB8();
    temp_f20 = func_00166F48(arg0);
    func_00159EC0();
    return temp_f20;
}
