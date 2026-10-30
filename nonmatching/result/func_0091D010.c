/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001EE580(f32 *);                       /* extern */
M2C_UNK func_001EF5B0(s32, f32 *);                  /* extern */
M2C_UNK func_0026CDC0(s32, s32, s32);               /* extern */

void func_0091D010(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp50;
    f32 sp60;
    f32 sp80;
    f32 temp_f0;

    func_001EE580(&sp50);
    temp_f0 = sp50 + (f32) arg3;
    sp60 = temp_f0;
    sp80 = temp_f0;
    func_001EF5B0(arg0, &sp50);
    func_0026CDC0(arg0, arg1, arg2);
}
