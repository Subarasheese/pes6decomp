/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00817AD0(M2C_UNK);                         /* extern */
M2C_UNK func_00817CC0(u8);                          /* extern */
M2C_UNK func_00818890(u8);                          /* extern */
s32 func_00819280(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_009C2B70();                            /* extern */
M2C_UNK func_009C3110();                            /* extern */
s32 func_009C73E0(u8);                              /* extern */
s32 func_009C74A0(u8);                              /* extern */
M2C_UNK func_00D0C090();                            /* extern */
extern void *D_00A7DD70;

s32 func_009C7690(void) {
    s32 temp_v0;
    s32 var_v0;
    u8 temp_a0;

    if (D_00A7DD70 != NULL) {
        temp_a0 = M2C_FIELD(D_00A7DD70, u8 *, 0);
        switch (temp_a0) {                          /* switch 1; irregular */
        case 4:                                     /* switch 1 */
            if (M2C_FIELD(D_00A7DD70, u8 *, 1) != 0) {
                func_00817CC0(temp_a0);
            }
            temp_v0 = func_00817AD0(0x6C0084);
            switch (temp_v0) {                      /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                func_00D0C090();
                func_009C3110();
                return 2;
            default:                                /* switch 2 */
            case 1:                                 /* switch 2 */
            case 3:                                 /* switch 2 */
                func_00D0C090();
                func_009C2B70();
                M2C_FIELD(D_00A7DD70, u8 *, 0) = 0U;
                /* fallthrough */
            case 0:                                 /* switch 2 */
block_38:
                return 0;
            }
            break;
        case 3:                                     /* switch 1 */
            if (M2C_FIELD(D_00A7DD70, u8 *, 1) != 0) {
                func_00818890(temp_a0);
            }
            if ((u32) (func_00819280(0x02000003, -1) - 1) < 2U) {
                M2C_FIELD(D_00A7DD70, u8 *, 0) = 0U;
                func_009C2B70();
                return 0;
            }
            goto block_38;
        case 2:                                     /* switch 1 */
            if (M2C_FIELD(D_00A7DD70, u8 *, 1) != 0) {
                func_00818890(temp_a0);
            }
            if ((u32) (func_00819280(0x02000002, -1) - 1) >= 2U) {
                var_v0 = 0;
            } else {
                func_009C3110();
                var_v0 = 3;
            }
            return var_v0;
        case 0:                                     /* switch 1 */
            return func_009C74A0(temp_a0);
        case 1:                                     /* switch 1 */
            return func_009C73E0(temp_a0);
        default:                                    /* switch 1 */
            return 2;
        }
    } else {
        return 2;
    }
}
