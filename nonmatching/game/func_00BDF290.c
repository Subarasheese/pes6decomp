/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00188640(void *, void *);
M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(void **, M2C_UNK);            /* extern */
extern char D_00CBCADC[];

void func_00BDF290(void **arg0) {
    f32 sp28;
    f32 sp2C;
    f32 var_f0;
    void *temp_v0;
    void *temp_v0_2;

    func_00188640(&sp2C, &sp28);
    temp_v0 = *arg0;
    if (!(M2C_FIELD(temp_v0, f32 *, 0xE0) < 0.0f)) {
        var_f0 = sp28;
    } else {
        var_f0 = sp2C;
    }
    M2C_FIELD(temp_v0, f32 *, 0x6C) = var_f0;
    M2C_FIELD(*arg0, f32 *, 0x70) = (f32) (*(f32 *)D_00CBCADC);
    M2C_FIELD(*arg0, s8 *, 0x4E) = 0;
    func_00BD4040(arg0, 4);
    func_00BD3BA0(arg0, 4, 1);
    func_00BD3BA0(arg0, 5, 1);
    temp_v0_2 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0_2, f32 *, 0x6C), M2C_FIELD(temp_v0_2, f32 *, 0x70));
    M2C_FIELD(*arg0, s16 *, 0x18) = 0xB5;
}
