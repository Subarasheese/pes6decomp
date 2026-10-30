/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00295590(void);
extern s8 func_008427C0(void);
extern u8 func_00842790(void);
extern s8 func_008427B0(void);
extern u8 func_00842780(void);
extern u8 func_00842770(void);
extern s8 func_008427A0(void);
M2C_UNK func_003520A0(s32, M2C_UNK, s32);           /* extern */
extern char D_00591BB6[];
extern char D_00591BB7[];
extern char D_00591BB8[];

void func_0080E0C0(void) {
    M2C_UNK var_s2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s1;
    s32 var_s3;
    s32 var_v1;
    s32 var_v1_2;
    s64 temp_a0;
    s64 temp_a0_2;
    s64 temp_a0_3;
    s64 temp_v0;

    temp_s2 = func_00842790() & 0xFF;
    temp_s1 = func_00842780() & 0xFF;
    temp_s0 = func_00842770() & 0xFF;
    temp_a0 = (s64) (func_008427C0() << 0x38) >> 0x38;
    if ((temp_a0 != 3) && (temp_a0 != 2)) {
        var_v1 = 1;
        switch (temp_a0) {                          /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            (*(s8 *)D_00591BB6) = 0;
            break;
        case 1:                                     /* switch 1 */
            goto block_8;
        }
    } else {
        var_v1 = (s32) (temp_s2 & 0xFF) % 2;
block_8:
        (*(s8 *)D_00591BB6) = (s8) var_v1;
    }
    temp_v0 = (s64) (func_008427B0() << 0x38) >> 0x38;
    switch (temp_v0) {                              /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        var_s1 = temp_s1 & 0xFF;
        (*(s8 *)D_00591BB7) = 0;
        var_s3 = 0;
        var_s2 = 0xFF;
        break;
    case 1:                                         /* switch 2 */
        var_s1 = temp_s1 & 0xFF;
        (*(s8 *)D_00591BB7) = 1;
        var_s3 = 1 & 0xFF;
        var_s2 = 0xFF;
        break;
    case 2:                                         /* switch 2 */
        var_s1 = temp_s1 & 0xFF;
        (*(s8 *)D_00591BB7) = 2;
        var_s3 = 2 & 0xFF;
        var_s2 = 0xFF;
        break;
    default:                                        /* switch 2 */
        var_s1 = temp_s1 & 0xFF;
        var_s3 = 3;
        (*(s8 *)D_00591BB7) = 3;
        var_s2 = 0;
        break;
    }
    temp_a0_2 = (s64) (func_008427A0() << 0x38) >> 0x38;
    if ((temp_a0_2 != 3) && (temp_a0_2 != 2)) {
        var_v1_2 = 1;
        switch (temp_a0_2) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            (*(s8 *)D_00591BB8) = 0;
            break;
        case 1:                                     /* switch 3 */
            goto block_25;
        }
    } else {
        var_v1_2 = (s32) (temp_s0 & 0xFF) % 2;
block_25:
        (*(s8 *)D_00591BB8) = (s8) var_v1_2;
    }
    if (!(var_s1 & 0xFF)) {
        var_s1 = (var_s1 + 1) & 0xFF;
    }
    func_003520A0(var_s3, var_s2, var_s1);
    temp_a0_3 = (s64) (func_008427B0() << 0x38) >> 0x38;
    if ((temp_a0_3 != 2) && (temp_a0_3 != 1) && (temp_a0_3 != 0)) {
        (*(s8 *)D_00591BB7) = func_00295590();
    }
}
