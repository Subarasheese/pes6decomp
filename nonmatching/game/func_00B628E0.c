/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, u16);                        /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00B67B80(void *, void *);              /* extern */
s32 func_00B67E00(s8, M2C_UNK);                     /* extern */
s32 func_00BA8B40(void *, s8);                      /* extern */
s8 func_00BBB8C0(M2C_UNK);                          /* extern */
extern char D_0059237C[];
extern char D_00CBD269[];

s32 func_00B628E0(void *arg0) {
    s32 temp_f0;
    s32 temp_f1;
    s8 temp_v0_3;
    s8 temp_v0_4;
    s8 var_s1;
    s8 var_s1_2;
    s8 var_v1;
    void **temp_v0;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0_2;
    void *temp_v0_5;

    temp_v0 = func_00B2A420((*(u8 *)D_00CBD269));
    if ((*(u8 *)D_0059237C) != 0) {
        return 0;
    }
    temp_a0 = *temp_v0;
    temp_a1 = M2C_FIELD(arg0, void **, 0);
    temp_f1 = (s32) (M2C_FIELD(temp_a1, f32 *, 0xE0) - M2C_FIELD(temp_a0, f32 *, 0xE0));
    temp_f0 = (s32) (M2C_FIELD(temp_a1, f32 *, 0xE8) - M2C_FIELD(temp_a0, f32 *, 0xE8));
    if ((((temp_f1 * temp_f1) + (temp_f0 * temp_f0)) < 0x400001) && (M2C_FIELD(temp_a1, u8 *, 0x13) == M2C_FIELD(temp_a0, u8 *, 0x13))) {
        func_00B67B80(arg0, temp_a1);
        temp_v0_2 = M2C_FIELD(arg0, void **, 0);
        if ((func_009B30B0(M2C_FIELD(temp_v0_2, u16 *, 0x28), M2C_FIELD(temp_v0_2, u16 *, 0x26)) & 0xFFFF) >= 0x10) {
            return 0;
        }
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) < 0x801) {
            temp_v0_3 = func_00BBB8C0(3);
            switch (temp_v0_3) {                    /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                var_s1 = 0x1E;
                break;
            case 0:                                 /* switch 2 */
                var_s1 = 0x12;
                break;
            default:                                /* switch 2 */
            case 2:                                 /* switch 2 */
                var_s1 = 7;
                break;
            }
            if (func_00B67E00(var_s1, 0) != 0) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0x35;
            } else {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_s1;
            }
            return 1;
        }
        temp_v0_4 = func_00BBB8C0(3);
        switch (temp_v0_4) {                        /* switch 1; irregular */
        case 1:                                     /* switch 1 */
            var_s1_2 = 0x1A;
            break;
        case 0:                                     /* switch 1 */
            var_s1_2 = 0x19;
            break;
        default:                                    /* switch 1 */
        case 2:                                     /* switch 1 */
            var_s1_2 = 0x25;
            break;
        }
        if ((func_00BA8B40(arg0, var_s1_2) != 0) && (func_00B67E00(var_s1_2, 0) == 0)) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_s1_2;
        } else {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0x33;
        }
        return 1;
    }
    func_00B67B80(arg0, temp_a1);
    temp_v0_5 = M2C_FIELD(arg0, void **, 0);
    if (((func_009B3070(M2C_FIELD(temp_v0_5, u16 *, 0x28), M2C_FIELD(temp_v0_5, u16 *, 0x26)) & 0xFFFF) < 0x200) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) >= 0x801)) {
        if ((func_00BA8B40(arg0, 0x25) != 0) && (func_00B67E00(0x25, 0) == 0)) {
            var_v1 = 0x25;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
        } else {
            var_v1 = 0x33;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
        }
    } else {
        var_v1 = 0x35;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_v1;
    return 1;
}
