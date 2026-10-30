/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_002084C0(void *);                      /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_00591E7C[];

s32 func_00A0F9C0(void *arg0) {
    u16 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v1_2;

    if (func_00207D10(M2C_FIELD(arg0, void **, 4)) == 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 4);
        if (M2C_FIELD(temp_a0, u16 *, 0x30) != 0x1EC) {
            goto block_25;
        }
        if (((*(s32 *)D_00591E7C) != 0) && !(M2C_FIELD(temp_a0, f32 *, 0x38) <= (f32) (M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 3) * 2))) {
            func_00209A00(temp_a0, 0, 0);
            func_00207390(M2C_FIELD(arg0, void **, 4), 4);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            return 1;
        }
block_25:
        return 0;
    }
    temp_a0_2 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0_2, u16 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 0x371:
        func_00209A00(temp_a0_2, 0x22A, 0xA);
        temp_v1_2 = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_v1_2, u8 *, 0x2D) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 0x2D) ^ 1);
        func_00207390(M2C_FIELD(arg0, void **, 4), 4);
        break;
    default:
        func_002084C0(temp_a0_2);
        break;
    case 0x34A:
    case 0x344:
        func_002084C0(temp_a0_2);
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
        break;
    case 0x331:
    case 0x332:
    case 0x330:
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        func_00209A00(M2C_FIELD(arg0, void **, 4), 0, 0);
        func_00207390(M2C_FIELD(arg0, void **, 4), 4);
        break;
    }
    return 1;
}
