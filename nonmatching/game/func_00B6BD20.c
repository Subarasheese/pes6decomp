/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B84790(void **, u16, u16, u8, M2C_UNK, f32); /* extern */
extern f32 *Pes6Ball_Current;
extern char D_00591E6C[];
extern char D_00591E70[];
extern char D_00591E74[];

void func_00B6BD20(void **arg0) {
    f32 temp_f12;
    f32 temp_f12_2;
    u16 temp_a1;
    void *temp_a2;
    void *temp_a3;

    func_00B2ACF0();
    temp_a2 = *arg0;
    temp_a3 = M2C_FIELD(temp_a2, void **, 4);
    temp_a1 = M2C_FIELD(temp_a3, u16 *, 0x30);
    switch (temp_a1) {                              /* irregular */
    case 0x5A2:
        temp_f12 = M2C_FIELD(temp_a3, f32 *, 0x38);
        if (temp_f12 < 130.0f) {
            func_00B84790(arg0, temp_a1, M2C_FIELD(temp_a2, u16 *, 0x26), M2C_FIELD(temp_a3, u8 *, 0x2D), 1, temp_f12);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) = (f32) (*(f32 *)D_00591E6C);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0) = (*(f32 *)D_00591E70);
block_11:
            M2C_FIELD(Pes6Ball_Current, f32 *, 0) = (*(f32 *)D_00591E74);
        }
        return;
    case 0x5A1:
        temp_f12_2 = M2C_FIELD(temp_a3, f32 *, 0x38);
        if (temp_f12_2 < 150.0f) {
            func_00B84790(arg0, temp_a1, M2C_FIELD(temp_a2, u16 *, 0x26), M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), u8 *, 0x2D), 1, temp_f12_2);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) = (f32) (*(f32 *)D_00591E6C);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0) = (*(f32 *)D_00591E70);
            goto block_11;
        }
        break;
    }
}
