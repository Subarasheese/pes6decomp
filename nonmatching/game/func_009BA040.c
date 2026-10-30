/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB8C0(s32);
extern s32 func_00A07B40(void);
extern s32 func_002AE670(s32);
extern s32 func_009B3070(s32, s32);
extern s32 func_009B30B0(s32, s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
extern s32 D_003E74CC;
extern void *Pes6Ball_Current;
extern char Pes6MatchState_Current[];
extern char D_00591E19[];

s32 func_009BA040(void *arg0) {
    s16 var_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v1;
    u16 temp_v1_3;
    u8 temp_v1_2;
    void *temp_a0;

    M2C_FIELD(arg0, s8 *, 0x66) = 3;
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0x135:                                     /* switch 1 */
        M2C_FIELD(arg0, u16 *, 0x26) = (u16) (M2C_FIELD(arg0, u16 *, 0x26) - ((((M2C_FIELD(temp_a0, u8 *, 0x2D) != 0) ? -1 : 1) << 0xE) & 0xFFFF));
        /* fallthrough */
    case 0x3DD:                                     /* switch 1 */
    case 0x3DF:                                     /* switch 1 */
    case 0x3E3:                                     /* switch 1 */
    case 0x3DA:                                     /* switch 1 */
    case 0x3D8:                                     /* switch 1 */
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 0);
        if (temp_v1_2 != (*(u8 *)Pes6MatchState_Current)) {
            if (temp_v1_2 != (*(u8 *)D_00591E19)) {
                func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58));
                temp_v1_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
                switch (temp_v1_3) {                /* switch 2; irregular */
                case 0x3E3:                         /* switch 2 */
                case 0x3DA:                         /* switch 2 */
                case 0x3D8:                         /* switch 2 */
                case 0x26D:                         /* switch 2 */
                case 0x272:                         /* switch 2 */
                case 0x26B:                         /* switch 2 */
                case 0x26A:                         /* switch 2 */
                    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
                    if (temp_v0 < 0xF01) {
                        if ((temp_v0 >= 0xC01) && (func_00BBB8C0(2) != 0)) {
                            goto block_35;
                        }
                        goto block_33;
                    }
block_35:
                    if ((func_00A07B40() == 0) || (((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xE)) & 0xFFFF) & 0xFFFF) < 0x21) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0xA8), (s32) M2C_FIELD(arg0, u16 *, 0x2A)) & 0xFFFF) >= 0x51))) {
                        func_00209A00(M2C_FIELD(arg0, void **, 4), 0x288, 0);
                        func_00207390(M2C_FIELD(arg0, void **, 4), 8);
                        M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
                        var_v1 = 0xB0;
                        M2C_FIELD(arg0, s16 *, 0x38) = (s16) (0x8000 / func_002AE670(M2C_FIELD(((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) * 4) + D_003E74CC), s32 *, 0x2FD8) - 2));
                        M2C_FIELD(arg0, s32 *, 0xE4) = 0;
                        M2C_FIELD(arg0, s32 *, 0xF4) = 0;
                        M2C_FIELD(arg0, s8 *, 0x16) = 0x84;
block_43:
                        M2C_FIELD(arg0, s16 *, 0x18) = var_v1;
                        return 1;
                    }
block_33:
                default:                            /* switch 2 */
                    return 0;
                case 0x3DF:                         /* switch 2 */
                case 0x26F:                         /* switch 2 */
                    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x1C);
                    if ((temp_v0_2 < 0xF01) && ((temp_v0_2 < 0xC01) || (func_00BBB8C0(2) == 0))) {
                        goto block_33;
                    }
                    if ((func_00A07B40() == 0) || (((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x21) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0xA8), (s32) M2C_FIELD(arg0, u16 *, 0x2A)) & 0xFFFF) >= 0x51))) {
                        func_00209A00(M2C_FIELD(arg0, void **, 4), 0x289, 0);
                        func_00207390(M2C_FIELD(arg0, void **, 4), 8);
                        var_v1 = 0xC0;
                        M2C_FIELD(arg0, u16 *, 0x26) = (u16) (M2C_FIELD(arg0, u16 *, 0x28) - (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xA));
                        M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
                        M2C_FIELD(arg0, s32 *, 0xE4) = 0;
                        M2C_FIELD(arg0, s32 *, 0xF4) = 0;
                        M2C_FIELD(arg0, s8 *, 0x16) = 0x84;
                        goto block_43;
                    }
                    goto block_33;
                }
            } else {
                goto block_34;
            }
        } else {
block_34:
            return 0;
        }
        break;
    default:                                        /* switch 1 */
        return 0;
    }
}
