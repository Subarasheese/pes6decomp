/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008B31A0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008B3280(s32, f32 *);                  /* extern */
M2C_UNK func_008B3290(s32, f32 *);                  /* extern */
extern char D_0053C320[];

void func_0023B1C0(s32 arg0, f32 fparg0, f32 fparg1) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    s32 *temp_s0;

    temp_s0 = ((void *)D_0053C320) + (arg0 * 4);
    func_008B31A0(*temp_s0, 1);
    func_008B3280(*temp_s0, &sp30);
    if (sp38 < 1500.0f) {
        sp38 = 1500.0f;
    }
    sp30 = fparg0;
    sp34 = fparg1;
    func_008B3290(*temp_s0, &sp30);
}
