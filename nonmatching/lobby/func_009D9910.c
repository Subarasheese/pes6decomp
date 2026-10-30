/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_002DB850(void *);
extern void func_002DF640(void *, f32, f32);
extern s32 func_002DB870(void *);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002DF050(void *, f32 *);               /* extern */
M2C_UNK func_009D9540(void *, s32);                 /* extern */

void func_009D9910(void *arg0, void *arg1) {
    f32 sp40;
    f32 sp44;
    f32 temp_f13;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg1, void **, 0x10);
    func_002DF050(temp_s0, &sp40);
    temp_f13 = M2C_FIELD(arg1, f32 *, 0x27C) + func_002DB850(arg0);
    sp44 = temp_f13;
    func_002DF640(temp_s0, sp40, temp_f13);
    func_009D9540(arg1, func_002DB870(arg0));
    if (M2C_FIELD(arg1, u8 *, 0x297) == 0) {
        func_0026E840(0x8400F802);
    }
}
