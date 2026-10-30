/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
s32 func_002D4E10(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *, void *); /* extern */
M2C_UNK func_0094C6A0();                            /* extern */
M2C_UNK func_00B2FB80();                            /* extern */
extern void *D_003EAE34;

s32 func_00B2FC30(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;
    void *temp_s0;

    temp_s0 = D_003EAE34;
    var_s1 = 0;
    if (temp_s0 == NULL) {
        return 0;
    }
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x54);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        M2C_FIELD(temp_s0, s32 *, 0x54) = 1;
        /* fallthrough */
    case 1:                                         /* switch 1 */
        if (func_0017F900() != 0) {
            func_00B2FB80();
            M2C_FIELD(temp_s0, s32 *, 0x54) = 2;
        }
        break;
    case 2:                                         /* switch 1 */
        temp_v0 = func_002D4E10(1, 0, 0, 0, 0x2D, 0xF, M2C_FIELD(temp_s0, void **, 0), temp_s0 + 0x20);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 1:                                     /* switch 2 */
            func_0094C6A0();
            var_s1 = 0x39;
            M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), s32 *, 0x30) = (s32) M2C_FIELD(temp_s0, s32 *, 0x50);
            M2C_FIELD(temp_s0, s32 *, 0x54) = 3;
            break;
        case 2:                                     /* switch 2 */
            func_0094C6A0();
            var_s1 = 0x39;
            M2C_FIELD(temp_s0, s32 *, 0x54) = 3;
            break;
        default:                                    /* switch 2 */
            M2C_FIELD(temp_s0, s32 *, 0x54) = 3;
            break;
        }
        break;
    default:                                        /* switch 1 */
    case 3:                                         /* switch 1 */
        M2C_FIELD(temp_s0, s32 *, 0x54) = 0;
        break;
    }
    return var_s1;
}
