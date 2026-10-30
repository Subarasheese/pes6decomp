/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364D0(u32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
u16 func_009B3480(void *, f32, f32);                /* extern */
M2C_UNK func_00B35E10(void *, void *, void *);      /* extern */
M2C_UNK func_00BD3CF0(f32, f32);                    /* extern */

void func_00BDFE90(void *arg0) {
    u8 temp_a0;
    void *temp_a0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x12);
    if ((temp_a0 == 4) || (temp_a0 == 3)) {
        temp_v0_2 = M2C_FIELD(arg0, void **, 0);
        func_00B35E10(arg0, temp_v0_2 + 0x6C, temp_v0_2 + 0x70);
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x577, 0);
        func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
        temp_a0_2 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = func_009B3480(temp_a0_2, M2C_FIELD(temp_a0_2, f32 *, 0x6C), M2C_FIELD(temp_a0_2, f32 *, 0x70));
        temp_v0_3 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(M2C_FIELD(temp_v0_3, void **, 4), s8 *, 0x2D) = (s8) ((((M2C_FIELD(temp_v0_3, u16 *, 0x26) - M2C_FIELD(temp_v0_3, u16 *, 0x2C)) + 0x10000) & 0xFFFF) < 0x8001);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x8F;
        func_00B364D0(2U);
    }
}
