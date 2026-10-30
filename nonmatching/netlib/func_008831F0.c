/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7920(void);
extern void func_002F4E10(void *);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_002F2ED0(void *);                      /* extern */
s32 func_002F3850(void *);                          /* extern */
s32 func_008833A0(s32, M2C_UNK);                    /* extern */
s32 func_00883480(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_008835B0(void *);                      /* extern */
extern s32 D_003EA3A0;
extern s32 D_003EA3A4;
extern void *D_003EA3A8;
extern void *D_003EA3AC;
extern s32 D_003EA3B0;
extern s32 D_003EA3B4;
extern u8 D_003EA3B8;

s32 func_008831F0(void) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0;
    switch (D_003EA3A4) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_v0 = func_00883480(0x020B0000, 0x6C0006, 0x6C0007, 1);
        break;
    case 1:                                         /* switch 1 */
        var_v0 = func_008833A0(D_003EA3A4, 1);
        break;
    case 2:                                         /* switch 1 */
        func_002F2ED0(D_003EA3AC);
        temp_v0 = func_002F3850(D_003EA3AC);
        if ((temp_v0 != 4) && (temp_v0 != -1)) {
            var_v0 = 0;
        } else {
            func_002F4E10(D_003EA3AC);
            D_003EA3AC = NULL;
            D_003EA3A4 = 0;
            if ((s32) D_003EA3B8 > 0) {
                func_001B7920();
                D_003EA3B8 -= 1;
            }
            var_v0 = 1;
            switch (D_003EA3B4) {                   /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                break;
            case 1:                                 /* switch 2 */
                var_v0 = 2;
                break;
            default:                                /* switch 2 */
                var_v0 = 3;
                break;
            }
        }
        break;
    }
    switch (var_v0) {                               /* switch 3; irregular */
    case 2:                                         /* switch 3 */
        D_003EA3B0 = 2;
block_30:
        D_003EA3A0 = 3;
        if (D_003EA3A8 != NULL) {
            M2C_FIELD(D_003EA3A8, s32 *, 0x628) = 2;
            func_001F3D10(M2C_FIELD(D_003EA3A8, s32 *, 0x98), 0U);
        }
        func_008835B0(D_003EA3A8);
        if ((s32) D_003EA3B8 > 0) {
            func_001B7920();
            D_003EA3B8 -= 1;
        }
        break;
    case 1:                                         /* switch 3 */
        D_003EA3B0 = 1;
        goto block_30;
    case 3:                                         /* switch 3 */
        D_003EA3A0 = 1;
        /* fallthrough */
    default:                                        /* switch 3 */
        func_008835B0(D_003EA3A8);
        break;
    }
    return 0;
}
