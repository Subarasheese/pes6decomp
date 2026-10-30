/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern s32 func_00207D10(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B707D0(void **);                     /* extern */
M2C_UNK func_00B78620(void *);                      /* extern */

void func_00B70CB0(void **arg0) {
    s32 temp_s2;
    s32 temp_v0_3;
    s32 var_v1;
    u16 temp_s0;
    u16 temp_v1_2;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v0 = *arg0;
    temp_s2 = M2C_FIELD(temp_v0, s32 *, 0x1C);
    temp_s0 = M2C_FIELD(temp_v0, u16 *, 0x28);
    func_00B2ACF0();
    temp_v1 = *arg0;
    if (M2C_FIELD(M2C_FIELD(temp_v1, void **, 4), f32 *, 0x38) < 16.0f) {
        M2C_FIELD(temp_v1, s32 *, 0x1C) = temp_s2;
        temp_v0_2 = *arg0;
        temp_v0_3 = M2C_FIELD(temp_v0_2, s32 *, 0x1C);
        var_v1 = temp_v0_3 >> 3;
        if (temp_v0_3 < 0) {
            var_v1 = (s32) (temp_v0_3 + 7) >> 3;
        }
        M2C_FIELD(temp_v0_2, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x1C) - var_v1);
        M2C_FIELD(*arg0, u16 *, 0x28) = temp_s0;
    }
    temp_a0 = M2C_FIELD(*arg0, void **, 4);
    temp_v1_2 = M2C_FIELD(temp_a0, u16 *, 0x30);
    switch (temp_v1_2) {                            /* irregular */
    case 0x58A:
        if (func_00207D80(temp_a0, 0x4A) != 0) {
            func_00B78620(*arg0);
        }
        break;
    case 0x589:
        if (func_00207D80(temp_a0, 0x46) != 0) {
            func_00B78620(*arg0);
        }
        break;
    case 0x437:
        if (func_00207D80(temp_a0, 0x52) != 0) {
            func_00B78620(*arg0);
        }
        break;
    case 0x436:
        if (func_00207D80(temp_a0, 0x2A) != 0) {
            func_00B78620(*arg0);
        }
        break;
    case 0x433:
        if (func_00207D80(temp_a0, 0x62) != 0) {
            func_00B78620(*arg0);
        }
        break;
    }
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
        func_00208610(M2C_FIELD(*arg0, void **, 4));
        func_00207390(M2C_FIELD(*arg0, void **, 4), 8);
        func_00B707D0(arg0);
    }
}
