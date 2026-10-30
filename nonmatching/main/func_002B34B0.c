/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00209720(void *);                      /* extern */
M2C_UNK func_00209A00(void *, s32, void *, s32);    /* extern */
M2C_UNK func_002B3D00(s32, void *);                 /* extern */
extern char D_005E27C0[];

void func_002B34B0(void *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    s32 temp_a1;
    s32 temp_f0;
    s32 var_a2;
    s32 var_f12;
    s32 var_v1;
    u64 var_v1_2;
    void *temp_a0;
    void *temp_a3;
    void *temp_v1;

    if (arg2 == 0) {
        temp_f0 = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38);
        M2C_FIELD((((void *)D_005E27C0) + (M2C_FIELD(arg0, u8 *, 0) * 0x30)), s16 *, 0x28) = (s16) temp_f0;
        temp_a3 = M2C_FIELD(arg0, void **, 4);
        if (M2C_FIELD(temp_a3, u16 *, 0x30) != (arg1 & 0xFFFF)) {
            if (!(fparg0 >= 2.1474836e9f)) {
                var_f12 = (s32) fparg0;
                var_v1 = var_f12;
            } else {
                var_f12 = (s32) (fparg0 - 2.1474836e9f);
                var_v1 = var_f12 | 0x80000000;
            }
            func_00209A00(temp_a3, var_v1 & 0xFF & 0xFF, temp_a3, var_f12);
            temp_a0 = M2C_FIELD(arg0, void **, 4);
            temp_v1 = M2C_FIELD(temp_a0, void **, 4);
            var_a2 = 0;
            if (temp_v1 != NULL) {
                var_v1_2 = (u64) ((s64) M2C_FIELD(temp_v1, u8 *, 0xD) << 0x38) >> 0x39;
            } else {
                var_v1_2 = 0x7F;
            }
            temp_a1 = var_v1_2 & 0xFF;
            switch (temp_a1) {                      /* irregular */
            case 11:
            case 2:
            case 1:
            case 0:
                if (M2C_FIELD(temp_a0, u16 *, 0x30) == 0x5D) {
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
                func_00207390(temp_a0, 4, var_a2);
            }
        } else {
            func_002B3D00(temp_f0, temp_a3);
        }
    } else {
        func_00209720(M2C_FIELD(arg0, void **, 4));
    }
}
