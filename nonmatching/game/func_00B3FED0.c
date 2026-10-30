/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B3070(u16, s32);                    /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
M2C_UNK func_00B2A420(u8);                          /* extern */
extern char D_00CBCAD1[];

void func_00B3FED0(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, void **, 0);
    func_00B2A420(M2C_FIELD(((M2C_FIELD(temp_a0, u8 *, 0x13) * 0xB) + temp_a0), u8 *, 0x1B4));
    temp_a0_2 = M2C_FIELD(arg0, void **, 0);
    func_009B3070(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26), func_009B3480(temp_a0_2, M2C_FIELD(temp_a0_2, f32 *, 0x6C), M2C_FIELD(temp_a0_2, f32 *, 0x70)) & 0xFFFF);
    switch ((*(u8 *)D_00CBCAD1)) {                           /* irregular */
    case 3:
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4F) = 6;
        return;
    case 1:
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4F) = 6;
        return;
    default:
        if (*(u8 *)0xCBCAD3 != 6) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4F) = 1;
            return;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4F) = 2;
        return;
    }
}
