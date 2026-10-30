/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B67B80(void *, u8, void *);          /* extern */
M2C_UNK func_00BA90E0(void *, u16, M2C_UNK);        /* extern */
extern f32 *D_003E74CC;
extern char D_00591BE4[];
extern char D_00591F24[];

void func_00B64490(void *arg0) {
    s32 temp_s1;
    s32 temp_v0_3;
    s32 var_v1;
    u16 temp_a0_2;
    u16 temp_s0;
    u16 temp_v1_2;
    void *temp_a0;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    temp_s1 = M2C_FIELD(temp_v0, s32 *, 0x1C);
    temp_s0 = M2C_FIELD(temp_v0, u16 *, 0x28);
    func_00B2ACF0();
    temp_v1 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(M2C_FIELD(temp_v1, void **, 4), f32 *, 0x38) < 8.0f) {
        M2C_FIELD(temp_v1, s32 *, 0x1C) = temp_s1;
        temp_v0_2 = M2C_FIELD(arg0, void **, 0);
        temp_v0_3 = M2C_FIELD(temp_v0_2, s32 *, 0x1C);
        var_v1 = temp_v0_3 >> 2;
        if (temp_v0_3 < 0) {
            var_v1 = (s32) (temp_v0_3 + 3) >> 2;
        }
        M2C_FIELD(temp_v0_2, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x1C) - var_v1);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x28) = temp_s0;
    }
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_v1_2 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u16 *, 0x30);
    switch (temp_v1_2) {                            /* switch 1; irregular */
    case 0x58A:                                     /* switch 1 */
        func_00BA90E0(arg0, M2C_FIELD(temp_a0, u16 *, 0x2C), 0x42580000);
        break;
    case 0x589:                                     /* switch 1 */
        func_00BA90E0(arg0, M2C_FIELD(temp_a0, u16 *, 0x2C), 0x42480000);
        break;
    case 0x437:                                     /* switch 1 */
        func_00BA90E0(arg0, M2C_FIELD(temp_a0, u16 *, 0x2C), 0x42280000);
        break;
    case 0x436:                                     /* switch 1 */
        func_00BA90E0(arg0, M2C_FIELD(temp_a0, u16 *, 0x2C), 0x42880000);
        break;
    case 0x433:                                     /* switch 1 */
        func_00BA90E0(arg0, M2C_FIELD(temp_a0, u16 *, 0x2C), 0x429C0000);
        break;
    }
    if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
        func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
        if (((*(u8 *)D_00591F24) != 5) && ((*(u8 *)D_00591F24) != 3) && ((*(u8 *)D_00591F24) != 6) && ((*(u8 *)D_00591F24) != 2)) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0;
        } else {
            temp_a2 = M2C_FIELD(arg0, void **, 0);
            temp_a0_2 = M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), u16 *, 0x30);
            switch (temp_a0_2) {                    /* switch 2; irregular */
            case 0x426:                             /* switch 2 */
                M2C_FIELD(temp_a2, s16 *, 0x18) = 0xF;
                break;
            case 0x38C:                             /* switch 2 */
            case 0x48E:                             /* switch 2 */
                M2C_FIELD(temp_a2, s8 *, 0x16) = 0xFD;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 5;
                break;
            case 0x2BD:                             /* switch 2 */
            case 0x40A:                             /* switch 2 */
                if ((*(u8 *)D_00591F24) == 0) {
                    M2C_FIELD(temp_a2, s8 *, 0x16) = 0xFD;
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xC;
                } else {
                    M2C_FIELD(temp_a2, u16 *, 0x2C) = (u16) M2C_FIELD(temp_a2, u16 *, 0x26);
                    temp_a2_2 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_a2_2, u16 *, 0x42) = (u16) M2C_FIELD(temp_a2_2, u16 *, 0x2C);
                    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), f32 *, 0x28) = (f32) (*D_003E74CC / 2.0f);
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x4E) = (u8) (*(u8 *)D_00591BE4);
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 4;
                }
                break;
            default:                                /* switch 2 */
                func_00B67B80(arg0, (*(u8 *)D_00591F24), temp_a2);
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0x35;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x10;
                break;
            }
        }
    }
}
