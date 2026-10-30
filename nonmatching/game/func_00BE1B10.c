/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_009B33A0(void *, s32, s32);                /* extern */
M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(void **, s32);                /* extern */
extern char D_00CBCAD1[];
extern char D_00CBCAD8[];
extern char D_00CBCADC[];

void func_00BE1B10(void **arg0) {
    s32 var_s0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;

    M2C_FIELD(*arg0, f32 *, 0x6C) = (f32) (*(f32 *)D_00CBCAD8);
    M2C_FIELD(*arg0, f32 *, 0x70) = (f32) (*(f32 *)D_00CBCADC);
    temp_a0 = *arg0;
    var_s0 = 7;
    func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70));
    switch ((*(u8 *)D_00CBCAD1)) {                           /* irregular */
    case 0x73:
    case 0x2B:
    case 0x27:
    case 0x3B:
    case 0x25:
    case 0x71:
    case 0x40:
    case 0x2F:
    case 0x3E:
    case 0x1D:
    case 0x62:
    case 0x2D:
    case 0x2C:
    case 0x1C:
        var_s0 = 4;
        break;
    case 0x44:
    case 0x19:
    case 0x23:
    case 0x41:
    case 0x3A:
    case 0x5B:
    case 0x3F:
    case 0x36:
    case 0x49:
    case 0x66:
    case 0x58:
    case 0x57:
    case 0x18:
    case 0x17:
    case 0x56:
    case 0x14:
    case 0x39:
    case 0x30:
    case 0x65:
    case 0x48:
    case 0x52:
    case 0x16:
    case 0x51:
    case 0x47:
    case 0x5F:
    case 0x2A:
    case 0x50:
    case 0x4F:
    case 0x38:
    case 0x5D:
    case 0x4E:
    case 0x1B:
    case 0x12:
    case 0x11:
    case 0x10:
    case 0xF:
    case 0x45:
    case 0x61:
        var_s0 = 3;
        break;
    }
    func_00BD4040(arg0, var_s0 & 0xFF);
    func_00BD3BA0(arg0, 4, 1);
    temp_a0_2 = *arg0;
    if (func_009B33A0(temp_a0_2, (s32) M2C_FIELD(temp_a0_2, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0_2, f32 *, 0x70)) >= 0x01000001U) {
        func_00BD3BA0(arg0, 5, 1);
    }
    temp_v0 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    M2C_FIELD(*arg0, s16 *, 0x18) = 0x57;
}
