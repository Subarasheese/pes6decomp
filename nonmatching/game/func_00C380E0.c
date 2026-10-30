/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
M2C_UNK func_00209A00(void *, u16, s32);            /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
s32 func_00C37700(u8);                              /* extern */
M2C_UNK func_00C37730(u8, M2C_UNK);                 /* extern */
M2C_UNK func_00C37900(u8);                          /* extern */
M2C_UNK func_00C38EE0(void *);                      /* extern */

void func_00C380E0(void *arg0) {
    f32 temp_f1;
    s32 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v1;

    func_00B2ACF0();
    temp_v0 = func_00C37700(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54));
    switch (temp_v0) {                              /* irregular */
    case 12:
        func_00C37900(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x22;
        return;
    case 2:
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        temp_a0 = M2C_FIELD(temp_v1, void **, 4);
        temp_f1 = M2C_FIELD(temp_v1, f32 *, 0x38);
        if (!(temp_f1 < (f32) (M2C_FIELD(temp_a0, u8 *, 1) * 2)) && (temp_f1 <= (f32) (M2C_FIELD(temp_a0, u8 *, 2) * 2))) {
            func_00C38EE0(arg0);
            func_00C37730(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), 3);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x26;
            return;
        }
        return;
    default:
        temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        if (func_00207D80(temp_a0_2, M2C_FIELD(M2C_FIELD(temp_a0_2, void **, 4), u8 *, 2) * 2) != 0) {
            temp_a0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
            func_00209A00(temp_a0_3, M2C_FIELD(temp_a0_3, u16 *, 0x30), (M2C_FIELD(M2C_FIELD(temp_a0_3, void **, 4), u8 *, 1) * 2) & 0xFFFF);
        }
        break;
    }
}
