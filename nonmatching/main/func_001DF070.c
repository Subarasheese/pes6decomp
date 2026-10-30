/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00399348[];

void func_001DF070(void *arg0, s64 *arg1) {
    f32 sp0;
    f32 sp4;
    s64 sp8;
    f32 temp_f1;
    f32 temp_f3;
    s64 *var_a1;
    s64 *var_a2;
    void *temp_a3;

    var_a1 = arg1;
    if (arg0 != NULL) {
        if (var_a1 == NULL) {
            var_a1 = &sp8;
        }
        sp8 = (*(s64 *)D_00399348);
        temp_a3 = M2C_FIELD(arg0, void **, 4);
        if ((temp_a3 != NULL) && (M2C_FIELD(temp_a3, u8 *, 0x14) == 2)) {
            var_a2 = temp_a3 + 8;
        } else {
            var_a2 = &sp8;
        }
        temp_f3 = M2C_FIELD(var_a1, f32 *, 0) * M2C_FIELD(var_a2, f32 *, 0);
        temp_f1 = M2C_FIELD(var_a1, f32 *, 4) * M2C_FIELD(var_a2, f32 *, 4);
        sp0 = temp_f3;
        sp4 = temp_f1;
        if (temp_f3 != M2C_FIELD(arg0, f32 *, 0x34)) {
            goto block_6;
        }
        if (temp_f1 == M2C_FIELD(arg0, f32 *, 0x38)) {

        } else {
block_6:
            M2C_FIELD(arg0, f32 *, 0x34) = sp0;
            M2C_FIELD(arg0, f32 *, 0x38) = sp4;
            M2C_FIELD(arg0, u8 *, 0x74) = (u8) (M2C_FIELD(arg0, u8 *, 0x74) | 1);
        }
    }
}
