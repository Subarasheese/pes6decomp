/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_002306D0(void);
extern s32 func_00226710(void);
M2C_UNK func_0093CED0();                            /* extern */
M2C_UNK func_00955520(s32, u8);                     /* extern */
s32 func_009848D0(M2C_UNK, u8);                     /* extern */
M2C_UNK func_0098D0F0();                            /* extern */
M2C_UNK func_0098E0B0();                            /* extern */
M2C_UNK func_0098E3D0(s32);                         /* extern */
extern void *D_003E77B4;

void func_0099B1E0(void) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;
    u8 temp_s0;

    temp_a0 = func_002306D0() & 0xFF;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        temp_s0 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
        var_s1 = 0xFF;
        temp_v1 = func_00226710() & 0xFF;
        switch (temp_v1) {                          /* switch 2; irregular */
        case 36:                                    /* switch 2 */
            var_v0 = func_009848D0(6, func_00225820());
block_11:
            var_s1 = var_v0 & 0xFF;
            break;
        case 37:                                    /* switch 2 */
            var_v0 = func_009848D0(7, func_00225820());
            goto block_11;
        }
        temp_a1 = var_s1 & 0xFF;
        if (temp_a1 != 0xFF) {
            func_00955520(var_s1, M2C_FIELD(((temp_a1 * 0xC) + D_003E77B4), u8 *, 0x4AB6));
            func_0098E0B0();
            func_0098D0F0();
            M2C_FIELD(D_003E77B4, u8 *, 0x16F1) = temp_s0;
        }
        func_0093CED0();
        return;
    case 0:                                         /* switch 1 */
        func_0098E3D0(temp_a0);
        /* fallthrough */
    case 1:                                         /* switch 1 */
        return;
    }
}
