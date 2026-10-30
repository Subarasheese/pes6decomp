/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009C3D70(s32, void *);
M2C_UNK func_008178F0(M2C_UNK);                     /* extern */
M2C_UNK func_00835C40();                            /* extern */
M2C_UNK func_009C15A0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_009C17C0();                                /* extern */
M2C_UNK func_009C3C60(s8, M2C_UNK);                 /* extern */
M2C_UNK func_009C3D30(s32);                         /* extern */
M2C_UNK func_009C3F30(M2C_UNK);                     /* extern */
M2C_UNK func_00D13D80(s8 *, M2C_UNK);               /* extern */
extern void *D_00A7DD50;

void func_009C1AE0(void) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0_2;
    s8 *var_s0;
    s8 temp_v1_2;
    s8 temp_v1_3;

    temp_v1 = M2C_FIELD(D_00A7DD50, s32 *, 0);
    if (temp_v1 != 3) {
        var_a1 = 1;
        switch (temp_v1) {                          /* switch 1; irregular */
        case 2:                                     /* switch 1 */
        case 0:                                     /* switch 1 */
            if (M2C_FIELD(D_00A7DD50, s8 *, 5) == 1) {
                var_a1 = 0;
            } else {
                goto block_15;
            }
            break;
        case 1:                                     /* switch 1 */
            temp_v1_2 = M2C_FIELD(D_00A7DD50, s8 *, 5);
            switch (temp_v1_2) {                    /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                break;
            case 1:                                 /* switch 2 */
                var_a1 = 0;
                break;
            }
            break;
        }
    } else if (M2C_FIELD(D_00A7DD50, s8 *, 5) == 2) {
        var_a1 = 0;
    } else {
block_15:
        var_a1 = -1;
    }
    if (var_a1 < 0) {
        var_s0 = NULL;
    } else {
        var_s0 = D_00A7DD50 + (var_a1 * 0x101) + 8;
    }
    if (var_s0 != NULL) {
        func_00D13D80(var_s0, 0x101);
    }
    if (M2C_FIELD(D_00A7DD50, s8 *, 0x11A3) != 0) {
        M2C_FIELD(D_00A7DD50, s8 *, 0x11A3) = 0;
        func_00835C40();
        func_008178F0(1);
    }
    if (*var_s0 == 0) {
        temp_a0 = M2C_FIELD(D_00A7DD50, s32 *, 0);
        if (temp_a0 != 3) {
            var_a2 = 1;
            switch (temp_a0) {                      /* switch 3; irregular */
            case 2:                                 /* switch 3 */
            case 0:                                 /* switch 3 */
                if (M2C_FIELD(D_00A7DD50, s8 *, 5) == 1) {
                    var_a2 = 0;
                } else {
                    goto block_39;
                }
                break;
            case 1:                                 /* switch 3 */
                temp_v1_3 = M2C_FIELD(D_00A7DD50, s8 *, 5);
                switch (temp_v1_3) {                /* switch 4; irregular */
                case 2:                             /* switch 4 */
                    break;
                case 1:                             /* switch 4 */
                    var_a2 = 0;
                    break;
                }
                break;
            }
        } else if (M2C_FIELD(D_00A7DD50, s8 *, 5) == 2) {
            var_a2 = 0;
        } else {
block_39:
            var_a2 = -1;
        }
        if (var_a2 < 0) {
            var_s0 = NULL;
        } else {
            var_s0 = D_00A7DD50 + (var_a2 * 0x101) + 0x21E;
        }
    }
    func_009C3D70((s32) M2C_FIELD(D_00A7DD50, s8 *, 5), var_s0);
    func_009C3F30(1);
    func_009C3C60(M2C_FIELD(D_00A7DD50, s8 *, 5), 1);
    if (func_009C17C0() != 0) {
        var_s0_2 = M2C_FIELD(D_00A7DD50, s32 *, 0x11A8);
    } else {
        var_s0_2 = 0;
    }
    func_009C3D30(var_s0_2);
    if ((var_s0_2 == 0) && (M2C_FIELD(D_00A7DD50, s8 *, 5) == 0)) {
        func_009C15A0(1, 0);
    }
}
