/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_002DB850(void *);
extern s32 func_002DB870(void *);
M2C_UNK func_009ECC80(void *, f32);                 /* extern */
M2C_UNK func_009ECCD0(void *, s32);                 /* extern */
M2C_UNK func_009ECCE0(void *, s32);                 /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
void func_009EED30(void *arg0, s32 arg1) {
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_s1_2;
    void **temp_s1;

    temp_s1 = M2C_FIELD(arg0, void ***, 0x38);
    temp_f20 = M2C_FIELD(arg0, f32 *, 0x3C);
    temp_f20_2 = temp_f20 + func_002DB850(*temp_s1);
    temp_s1_2 = func_002DB870(*temp_s1) & 0xFF;
    func_009ECC80(arg0, temp_f20_2);
    func_009ECCD0(arg0, temp_s1_2);
    if (M2C_FIELD(arg0, s32 *, 0x34) != arg1) {
        func_009ECCE0(arg0, arg1 == 1);
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (arg1 == 1);
    }
}
