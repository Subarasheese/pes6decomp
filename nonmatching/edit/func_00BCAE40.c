/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00209A00(void *, u16, s32);            /* extern */
extern char D_00CB7520[];
extern char D_00CE5358[];
extern char D_00CE5360[];

void func_00BCAE40(void *arg0, s32 arg1) {
    f32 temp_f1;
    s32 var_a2;
    void *temp_s0;

    if (arg1 >= 8) {
        (*(s32 *)D_00CE5358) = 8;
        return;
    }
    temp_s0 = ((void *)D_00CB7520) + (arg1 * 0xC);
    if ((arg1 != (*(s32 *)D_00CE5358)) || (M2C_FIELD(arg0, u16 *, 0x30) != M2C_FIELD(temp_s0, u16 *, 0))) {
        temp_f1 = M2C_FIELD(temp_s0, f32 *, 4);
        if (temp_f1 >= 2.1474836e9f) {
            var_a2 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
        } else {
            var_a2 = (s32) temp_f1;
        }
        func_00209A00(arg0, M2C_FIELD(temp_s0, u16 *, 0), var_a2 & 0xFFFF);
        if ((arg1 >= 5) && (arg1 < 8)) {
            (*(s32 *)D_00CE5360) = (s32) M2C_FIELD(temp_s0, u8 *, 8);
        }
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(temp_s0, f32 *, 4);
        if (arg1 == 4) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x1F0) = -0x4000;
        }
        if (arg1 == 2) {
            M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) / 4.0f);
        }
        (*(s32 *)D_00CE5358) = arg1;
    }
}
