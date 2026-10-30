/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C7E10(M2C_UNK *, void *);               /* extern */
M2C_UNK *func_00965EC0();                           /* extern */
M2C_UNK *func_00965F50();                           /* extern */
M2C_UNK func_009C27B0(void *, M2C_UNK);             /* extern */
M2C_UNK func_009C2A10(void *, M2C_UNK);             /* extern */
s32 func_009C2C90();                                /* extern */
M2C_UNK func_009C2D90();                            /* extern */
M2C_UNK func_009C3110();                            /* extern */
extern char D_00A02CF0[];
extern void *D_00A7DD70;

s32 func_009C74A0(void) {
    M2C_UNK *var_v0_2;
    M2C_UNK *var_v0_3;
    s32 temp_v0;
    s32 var_v0;

    if (M2C_FIELD(D_00A7DD70, u8 *, 1) != 0) {
        func_009C2D90();
    }
    temp_v0 = func_009C2C90();
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_009C2A10(D_00A7DD70 + 2, 0x40);
        func_009C27B0(D_00A7DD70 + 0x43, 8);
        M2C_FIELD(D_00A7DD70, s8 *, 0) = 1;
    case 0:
block_21:
        return 0;
    case 2:
        if (M2C_FIELD(D_00A7DD70, u8 *, 0x4C) == 1) {
            func_009C2A10(D_00A7DD70 + 2, 0x40);
            func_009C27B0(D_00A7DD70 + 0x43, 8);
            var_v0_2 = func_00965F50();
            if (var_v0_2 == NULL) {
                var_v0_2 = ((void *)D_00A02CF0);
            }
            if (func_001C7E10(var_v0_2, D_00A7DD70 + 2) != 0) {
                M2C_FIELD(D_00A7DD70, s8 *, 0) = 4;
                goto block_21;
            }
            var_v0_3 = func_00965EC0();
            if (var_v0_3 == NULL) {
                var_v0_3 = ((void *)D_00A02CF0);
            }
            if (func_001C7E10(var_v0_3, D_00A7DD70 + 0x43) != 0) {
                M2C_FIELD(D_00A7DD70, s8 *, 0) = 4;
                goto block_21;
            }
            goto block_16;
        }
    default:
block_16:
        func_009C3110();
        if (M2C_FIELD(D_00A7DD70, u8 *, 1) == 0) {
            var_v0 = 2;
        } else {
            var_v0 = 4;
        }
        return var_v0;
    }
}
