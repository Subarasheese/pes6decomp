/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00209A00(void *, s32, M2C_UNK *, u8, s8); /* extern */
M2C_UNK func_002B3D00(void *, void *, M2C_UNK *, u8, s8); /* extern */
extern f32 *D_003E74CC;
extern char D_005E27C0[];
extern char D_005E2C14[];

void func_002B3650(void *arg0, s32 arg1, s8 arg2, f32 fparg0, f32 fparg1) {
    s32 temp_a1;
    s32 var_a2;
    s32 var_v1;
    s8 var_a5;
    u64 var_v1_2;
    u8 temp_a4;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a2;
    void *temp_v1;

    var_a5 = 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = arg2;
    if (!(fparg1 < 0.0f)) {
        var_a5 = 0;
    }
    temp_a4 = M2C_FIELD(arg0, u8 *, 0);
    temp_a2 = ((void *)D_005E27C0) + (temp_a4 * 0x30);
    M2C_FIELD(temp_a2, s8 *, 0x2C) = var_a5;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28) = (f32) (*D_003E74CC * (*(f32 *)D_005E2C14));
    M2C_FIELD((((void *)D_005E27C0) + (M2C_FIELD(arg0, u8 *, 0) * 0x30)), s16 *, 0x28) = (s16) (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38);
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_a0, u16 *, 0x30) != (arg1 & 0xFFFF)) {
        if (!(fparg0 >= 2.1474836e9f)) {
            var_v1 = (s32) fparg0;
        } else {
            var_v1 = (s32) (fparg0 - 2.1474836e9f) | 0x80000000;
        }
        func_00209A00(temp_a0, var_v1 & 0xFF & 0xFF, ((void *)D_005E27C0), temp_a4, var_a5);
        temp_a0_2 = M2C_FIELD(arg0, void **, 4);
        temp_v1 = M2C_FIELD(temp_a0_2, void **, 4);
        var_a2 = 0;
        if (temp_v1 != NULL) {
            var_v1_2 = (u64) ((s64) M2C_FIELD(temp_v1, u8 *, 0xD) << 0x38) >> 0x39;
        } else {
            var_v1_2 = 0x7F;
        }
        temp_a1 = var_v1_2 & 0xFF;
        switch (temp_a1) {                          /* irregular */
        case 11:
        case 2:
        case 1:
        case 0:
            if (M2C_FIELD(temp_a0_2, u16 *, 0x30) == 0x5D) {
                var_a2 = 2;
            } else {
                var_a2 = 1;
            }
            break;
        case 21:
            if (M2C_FIELD(arg0, u8 *, 0x16) == 0x95) {
                var_a2 = 3;
            }
            break;
        }
        if (var_a2 != 3) {
            func_00207390(temp_a0_2, 4, var_a2);
        }
    } else {
        func_002B3D00(arg0, temp_a2, ((void *)D_005E27C0), temp_a4, var_a5);
    }
}
