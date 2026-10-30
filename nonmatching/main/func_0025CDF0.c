/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF860(void *, void *);
M2C_UNK func_0025DCB0();                            /* extern */
M2C_UNK func_0025DF60();                            /* extern */
extern char D_0058CFE0[];
extern char D_0058D0B0[];

void func_0025CDF0(s32 arg0, void *arg1) {
    f32 sp40;
    f32 sp44;
    f32 *var_a0;
    f32 temp_f1;
    s32 var_v1;
    void *temp_a1;
    void *temp_a2;

    var_a0 = &sp40;
    temp_a1 = ((void *)D_0058CFE0) + (arg0 * 0x3C);
    var_v1 = 0x10;
    temp_a2 = temp_a1 + 0x1C;
    if (var_a0 != NULL) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 1;
        } while (var_v1 != 0);
    }
    if (arg1 != NULL) {
        if (arg0 == 3) {
            return;
        }
        M2C_FIELD(temp_a2, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(temp_a2, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 4);
        sp40 = M2C_FIELD(temp_a2, f32 *, 0x18);
        sp44 = M2C_FIELD(temp_a2, f32 *, 0x1C);
        func_001EF860(M2C_FIELD(temp_a1, void **, 0x1C), &sp40);
        if (arg0 == 1) {
            func_0025DF60();
            func_0025DCB0();
            M2C_FIELD(((void *)D_0058D0B0), f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0);
            temp_f1 = M2C_FIELD(arg1, f32 *, 4);
            M2C_FIELD(((void *)D_0058D0B0), f32 *, 0x1C) = temp_f1;
            sp44 = temp_f1;
            sp40 = M2C_FIELD(((void *)D_0058D0B0), f32 *, 0x18);
            func_001EF860(M2C_FIELD(((void *)D_0058D0B0), void **, 0), &sp40);
        }
    }
}
