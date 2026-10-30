/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(void **, s32, void *);        /* extern */
extern char D_00CBCAD1[];
extern char D_00CBCAD8[];
extern char D_00CBCADC[];

void func_00BDA9E0(void **arg0) {
    s32 var_v0;
    void *temp_a2;
    void *temp_v0;

    temp_a2 = *arg0;
    M2C_FIELD(temp_a2, f32 *, 0x6C) = (f32) (*(f32 *)D_00CBCAD8);
    M2C_FIELD(*arg0, f32 *, 0x70) = (f32) (*(f32 *)D_00CBCADC);
    if ((*(u8 *)D_00CBCAD1) != 0x6E) {
        var_v0 = 6;
    } else {
        var_v0 = 2;
    }
    func_00BD4040(arg0, var_v0 & 0xFF, temp_a2);
    func_00BD3BA0(arg0, 4, 1);
    func_00BD3BA0(arg0, 5, 1);
    temp_v0 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    M2C_FIELD(*arg0, s16 *, 0x18) = 0xC5;
}
