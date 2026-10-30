/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009C3D70(s32, void *);
M2C_UNK func_001C8590(void *, M2C_UNK);             /* extern */
M2C_UNK func_009C15A0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_009C17C0();                                /* extern */
M2C_UNK func_009C3D30(s32);                         /* extern */
extern void *D_00A7DD50;

void func_009C2ED0(s32 arg0) {
    s32 var_s0;
    s8 temp_v1_2;
    void *temp_v1;

    if ((D_00A7DD50 != NULL) && (arg0 < 0x35)) {
        if (arg0 < 0) {
            return;
        }
        func_001C8590(D_00A7DD50 + (arg0 << 6) + 0x42C, 0x3F);
        temp_v1 = arg0 + D_00A7DD50;
        if (M2C_FIELD(temp_v1, s8 *, 0x116C) == 0) {
            M2C_FIELD(temp_v1, s8 *, 0x116C) = 1;
        }
        if (arg0 >= M2C_FIELD(D_00A7DD50, s8 *, 0x11A2)) {
            M2C_FIELD(D_00A7DD50, s8 *, 0x11A2) = (s8) (arg0 + 1);
        }
        temp_v1_2 = M2C_FIELD(D_00A7DD50, s8 *, 0x11A1);
        if (temp_v1_2 == arg0) {
            func_009C3D70((s32) M2C_FIELD(D_00A7DD50, s8 *, 6), D_00A7DD50 + (temp_v1_2 << 6) + 0x42C);
            if (func_009C17C0() != 0) {
                var_s0 = M2C_FIELD(D_00A7DD50, s32 *, 0x11A8);
            } else {
                var_s0 = 0;
            }
            func_009C3D30(var_s0);
            if ((var_s0 == 0) && (M2C_FIELD(D_00A7DD50, s8 *, 5) == 0)) {
                func_009C15A0(1, 0);
            }
        }
    }
}
