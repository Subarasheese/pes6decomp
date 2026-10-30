/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008204A0(s32);                             /* extern */
s32 func_009659F0(s32);                             /* extern */
s32 func_00965A30(s32);                             /* extern */
s32 func_00965A90(s32);                             /* extern */
s32 func_00965AE0(s32);                             /* extern */
s32 func_00965B30(s32);                             /* extern */
s32 func_00965B80(s32);                             /* extern */
M2C_UNK *func_00965BD0(s32);                        /* extern */
M2C_UNK *func_00965CB0(s32);                        /* extern */
s32 func_00965CC0();                                /* extern */
extern char D_00A030C8[];

void *func_009D4BC0(s32 arg0, void *arg1) {
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_v0;

    M2C_FIELD(arg1, s32 *, 0) = func_00965CC0();
    temp_v0 = func_00965CB0(arg0);
    M2C_FIELD(arg1, M2C_UNK **, 4) = temp_v0;
    if (temp_v0 == NULL) {
        M2C_FIELD(arg1, M2C_UNK **, 4) = ((void *)D_00A030C8);
    }
    temp_v0_2 = func_00965BD0(arg0);
    M2C_FIELD(arg1, M2C_UNK **, 8) = temp_v0_2;
    if (temp_v0_2 == NULL) {
        M2C_FIELD(arg1, M2C_UNK **, 8) = ((void *)D_00A030C8);
    }
    M2C_FIELD(arg1, s32 *, 0xC) = func_00965B80(arg0);
    M2C_FIELD(arg1, s32 *, 0x10) = func_00965AE0(arg0);
    M2C_FIELD(arg1, s32 *, 0x14) = func_00965B30(arg0);
    M2C_FIELD(arg1, s32 *, 0x18) = func_00965A90(arg0);
    M2C_FIELD(arg1, s32 *, 0x20) = func_008204A0(M2C_FIELD(arg1, s32 *, 0));
    M2C_FIELD(arg1, s32 *, 0x1C) = 6;
    temp_v0_3 = func_00965A30(arg0);
    switch (temp_v0_3) {                            /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        break;
    case 3:                                         /* switch 1 */
        temp_v0_4 = func_009659F0(arg0);
        switch (temp_v0_4) {                        /* switch 2; irregular */
        case 3:                                     /* switch 2 */
            var_v0 = 5;
block_30:
            M2C_FIELD(arg1, s32 *, 0x1C) = var_v0;
            break;
        case 2:                                     /* switch 2 */
            var_v0 = 4;
            goto block_30;
        case 1:                                     /* switch 2 */
            M2C_FIELD(arg1, s32 *, 0x1C) = 3;
            break;
        case 0:                                     /* switch 2 */
            M2C_FIELD(arg1, s32 *, 0x1C) = 2;
            break;
        }
        break;
    case 2:                                         /* switch 1 */
        var_v0 = 1;
        goto block_30;
    case 1:                                         /* switch 1 */
        M2C_FIELD(arg1, s32 *, 0x1C) = 0;
        break;
    }
    return arg1;
}
