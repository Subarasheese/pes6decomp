/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(void **, s32, void *, s32);   /* extern */
extern char D_00CBCAD1[];
extern char D_00CBCAD8[];
extern char D_00CBCADC[];

void func_00BE07B0(void **arg0) {
    s32 var_a3;
    void *temp_a2;
    void *temp_v0;

    temp_a2 = *arg0;
    M2C_FIELD(temp_a2, f32 *, 0x6C) = (f32) (*(f32 *)D_00CBCAD8);
    M2C_FIELD(*arg0, f32 *, 0x70) = (f32) (*(f32 *)D_00CBCADC);
    var_a3 = 7;
    if ((*(u8 *)D_00CBCAD1) != 0x31) {

    } else {
        var_a3 = 2;
    }
    func_00BD4040(arg0, var_a3 & 0xFF, temp_a2, var_a3);
    func_00BD3BA0(arg0, 4, 1);
    func_00BD3BA0(arg0, 0, 1);
    func_00BD3BA0(arg0, 5, 0);
    temp_v0 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    M2C_FIELD(*arg0, s16 *, 0x18) = 0x5E;
}
