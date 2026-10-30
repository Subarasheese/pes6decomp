/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_009B33A0(void *, s32, s32);                /* extern */
M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(void **, s32, void *, s32);   /* extern */
extern char D_00CBCAD1[];
extern char D_00CBCAD8[];
extern char D_00CBCADC[];

void func_00BE74C0(void **arg0) {
    s32 var_a3;
    void *temp_a0;
    void *temp_a2;
    void *temp_v0;

    temp_a2 = *arg0;
    M2C_FIELD(temp_a2, f32 *, 0x6C) = (f32) (*(f32 *)D_00CBCAD8);
    M2C_FIELD(*arg0, f32 *, 0x70) = (f32) (*(f32 *)D_00CBCADC);
    var_a3 = 7;
    switch ((*(u8 *)D_00CBCAD1)) {                           /* irregular */
    case 0x34:
        var_a3 = 3;
        break;
    case 0x67:
    case 0x63:
        var_a3 = 4;
        break;
    }
    func_00BD4040(arg0, var_a3 & 0xFF, temp_a2, var_a3);
    func_00BD3BA0(arg0, 4, 1);
    temp_a0 = *arg0;
    if (func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70)) >= 0x01900001U) {
        func_00BD3BA0(arg0, 5, 1);
    }
    temp_v0 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    M2C_FIELD(*arg0, s16 *, 0x18) = 0x95;
}
