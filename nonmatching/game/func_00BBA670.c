/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207920(void *);
extern s32 func_00207D10(void *);
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B37330(M2C_UNK);                     /* extern */
M2C_UNK func_00BA8570(void *);                      /* extern */
s32 func_00BBB990(u16, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */

void func_00BBA670(void *arg0) {
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v1;

    func_00B2ACF0();
    if (func_00207920(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) >= 0x1771) {
        func_00B37330(0);
    }
    if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
        func_00BA8570(arg0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0xFF;
        temp_v1 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_v1, u16 *, 0x28) = (u16) M2C_FIELD(temp_v1, u16 *, 0x26);
        temp_s1 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_s1, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s1, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s1, u16 *, 0x26), 0x800));
        temp_s1_2 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_s1_2, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s1_2, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s1_2, u16 *, 0x26), 0x800));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x65;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0;
        func_00BD4040(arg0, 1);
        func_00BD3BA0(arg0, 2, 1);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 4) = (u16) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u16 *, 0x30);
    }
}
