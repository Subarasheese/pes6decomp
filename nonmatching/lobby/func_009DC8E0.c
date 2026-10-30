/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_002DB850(void *);
extern void func_002DF640(void *, f32, f32);
extern s32 func_002DB940(void *);
extern s32 func_002DB870(void *);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002DF050(void *, f32 *);               /* extern */
M2C_UNK func_009DB860(void *, M2C_UNK);             /* extern */

void func_009DC8E0(void *arg0, void *arg1) {
    f32 sp40;
    f32 sp44;
    f32 temp_f13;
    s32 temp_s0_2;
    s32 var_s1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg1, void **, 0xC);
    func_002DF050(temp_s0, &sp40);
    temp_f13 = M2C_FIELD(arg1, f32 *, 0x648) + func_002DB850(arg0);
    sp44 = temp_f13;
    func_002DF640(temp_s0, sp40, temp_f13);
    temp_s0_2 = func_002DB870(arg0) & 0xFF;
    var_s1 = 0;
    do {
        func_009DB860(arg1 + (var_s1 * 0x128) + 0x10, 0);
        var_s1 += 1;
    } while (var_s1 < 5);
    if (temp_s0_2 & 0xFF) {
        func_009DB860(arg1 + (((s32) (func_002DB940(M2C_FIELD(arg1, void **, 8)) + 1) % 5) * 0x128) + 0x10, 1);
    }
    if (M2C_FIELD(arg1, u8 *, 0x652) == 0) {
        func_0026E840(0x8400F802);
    }
}
