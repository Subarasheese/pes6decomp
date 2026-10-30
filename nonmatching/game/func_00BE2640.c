/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(void **, s32, M2C_UNK, void *); /* extern */
extern char D_00CBCAD1[];
extern char D_00CBCAD8[];
extern char D_00CBCADC[];

void func_00BE2640(void **arg0) {
    s32 var_v1;
    void *temp_a3;
    void *temp_v0;

    temp_a3 = *arg0;
    M2C_FIELD(temp_a3, f32 *, 0x6C) = (f32) (*(f32 *)D_00CBCAD8);
    M2C_FIELD(*arg0, f32 *, 0x70) = (f32) (*(f32 *)D_00CBCADC);
    var_v1 = 7;
    switch ((*(u8 *)D_00CBCAD1)) {                           /* irregular */
    case 0x1A:
    case 0x70:
    case 0x26:
    case 0x24:
    case 0xE:
    case 0xD:
        var_v1 = 4;
        break;
    case 0x35:
    case 0x1F:
    case 0x22:
    case 0x5A:
    case 0x59:
    case 0x37:
    case 0x60:
    case 0x21:
    case 0x55:
    case 0x54:
    case 0x53:
    case 0xC:
    case 0x13:
    case 0x5E:
    case 0x64:
    case 0x5C:
        var_v1 = 3;
        break;
    case 0x20:
    case 0x46:
        var_v1 = 2;
        break;
    }
    func_00BD4040(arg0, var_v1 & 0xFF, 0x20, temp_a3);
    func_00BD3BA0(arg0, 4, 1);
    temp_v0 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    M2C_FIELD(*arg0, s16 *, 0x18) = 0x54;
}
