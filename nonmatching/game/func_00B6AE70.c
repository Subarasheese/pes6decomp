/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, u16);                        /* extern */
s32 func_009B33A0(void *, s32, s32);                /* extern */
s16 func_009B33F0(void *, void *);                  /* extern */
u16 func_009B3480(void *, f32, f32);                /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00B67B80(void *);                      /* extern */
s32 func_00B67E00(s8, u8);                          /* extern */
s32 func_00B68390(void *, M2C_UNK);                 /* extern */
s32 func_00BA8B40(void *, s8);                      /* extern */
s8 func_00BBB8C0(M2C_UNK);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E57[];
extern char D_0059237C[];

s32 func_00B6AE70(void *arg0) {
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s8 temp_v0_10;
    s8 temp_v0_4;
    s8 temp_v0_5;
    s8 temp_v0_6;
    s8 temp_v0_7;
    s8 temp_v0_8;
    s8 temp_v0_9;
    s8 var_s0;
    s8 var_s0_2;
    s8 var_s1;
    s8 var_s1_2;
    s8 var_v1;
    s8 var_v1_2;
    s8 var_v1_3;
    s8 var_v1_4;
    s8 var_v1_5;
    s8 var_v1_6;
    u16 temp_v1;
    void **temp_s1;
    void **temp_s2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_s1 = func_00B2A420((*(u8 *)D_00591E57));
    temp_s2 = func_00B2A420(0U);
    if ((*(u8 *)D_0059237C) == 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        temp_v1 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u16 *, 0x30);
        if ((temp_v1 != 0x24) && (temp_v1 != 0x2C2) && (temp_v1 != 0x2C5)) {
            if (M2C_FIELD(temp_a0, u8 *, 0x10) == 0) {
                return 0;
            }
            if ((func_009B3070(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26), func_009B3480(temp_a0, M2C_FIELD(Pes6Ball_Current, f32 *, 0x47C), M2C_FIELD(Pes6Ball_Current, f32 *, 0xB7C))) & 0xFFFF) >= 0x4000) {
                return 0;
            }
            temp_v0 = M2C_FIELD(arg0, void **, 0);
            if ((func_009B3070(M2C_FIELD(temp_v0, u16 *, 0x26), M2C_FIELD(temp_v0, u16 *, 0x28)) & 0xFFFF) >= 0x800) {
                return 0;
            }
            temp_s0 = func_009B33A0(M2C_FIELD(arg0, void **, 0), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x480), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0xB80));
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x13) == M2C_FIELD(*temp_s1, u8 *, 0x13)) {
                temp_v0_2 = func_00B68390(arg0, 1);
                switch (temp_v0_2) {                /* switch 1; irregular */
                case 3:                             /* switch 1 */
                    func_00B67B80(arg0);
                    temp_v0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C);
                    if (temp_v0_3 < 0x801) {
                        if (temp_v0_3 > 0) {
                            temp_v0_4 = func_00BBB8C0(2);
                            switch (temp_v0_4) {    /* switch 2; irregular */
                            case 0:                 /* switch 2 */
                                var_s0 = 0x13;
                                break;
                            default:                /* switch 2 */
                            case 1:                 /* switch 2 */
                                var_s0 = 0x1F;
                                break;
                            }
                            if ((func_00BA8B40(arg0, var_s0) != 0) && (func_00B67E00(var_s0, 0U) == 0)) {
                                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
                                goto block_28;
                            }
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
                            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0x35;
                        } else {
                            temp_v0_5 = func_00BBB8C0(4);
                            switch (temp_v0_5) {    /* switch 6; irregular */
                            case 0:                 /* switch 6 */
                                var_v1 = 0x12;
                                break;
                            case 1:                 /* switch 6 */
                                var_v1 = 0x1E;
                                break;
                            case 2:                 /* switch 6 */
                                var_v1 = 7;
                                break;
                            default:                /* switch 6 */
                            case 3:                 /* switch 6 */
                                var_v1 = 0xB;
                                break;
                            }
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
                            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_v1;
                        }
                    } else {
                        temp_v0_6 = func_00BBB8C0(4);
                        switch (temp_v0_6) {        /* switch 5; irregular */
                        case 0:                     /* switch 5 */
                            var_s0 = 0x19;
                            break;
                        case 1:                     /* switch 5 */
                            var_s0 = 0x1A;
                            break;
                        case 2:                     /* switch 5 */
                            var_s0 = 0x25;
                            break;
                        default:                    /* switch 5 */
                        case 3:                     /* switch 5 */
                            var_s0 = 0x23;
                            break;
                        }
                        if ((func_00BA8B40(arg0, var_s0) != 0) && (func_00B67E00(var_s0, 0U) == 0)) {
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
block_28:
                            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_s0;
                        } else {
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
                            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0x33;
                        }
                    }
                    return 1;
                case 4:                             /* switch 1 */
                    func_00B67B80(arg0);
                    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) >= 0x801) {
                        temp_v0_7 = func_00BBB8C0(5);
                        var_s0_2 = 4;
                        switch (temp_v0_7) {        /* switch 3; irregular */
                        case 1:                     /* switch 3 */
                            break;
                        case 0:                     /* switch 3 */
                            var_s0_2 = 8;
                            break;
                        case 2:                     /* switch 3 */
                            var_s0_2 = 1;
                            break;
                        case 3:                     /* switch 3 */
                            var_s0_2 = 3;
                            break;
                        default:                    /* switch 3 */
                        case 4:                     /* switch 3 */
                            var_s0_2 = 0x3A;
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B33F0(M2C_FIELD(arg0, void **, 0), *temp_s2);
                            break;
                        }
                        if ((func_00BA8B40(arg0, var_s0_2) != 0) && (func_00B67E00(var_s0_2, 0U) == 0)) {
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
                            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_s0_2;
                        } else {
                            var_v1_2 = 0x33;
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
                            goto block_50;
                        }
                    } else {
                        temp_v0_8 = func_00BBB8C0(2);
                        switch (temp_v0_8) {        /* switch 4; irregular */
                        case 0:                     /* switch 4 */
                            var_v1_2 = 9;
                            break;
                        default:                    /* switch 4 */
                        case 1:                     /* switch 4 */
                            var_v1_2 = 5;
                            break;
                        }
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
block_50:
                        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_v1_2;
                    }
                    return 1;
                case 5:                             /* switch 1 */
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B33F0(M2C_FIELD(arg0, void **, 0), *temp_s2);
                    temp_v1_2 = M2C_FIELD(arg0, void **, 0);
                    if (M2C_FIELD(temp_v1_2, s32 *, 0x1C) < 0x801) {
                        if ((func_00B67E00(0x3D, M2C_FIELD(temp_v1_2, u8 *, 0)) == 0) && (temp_s0 < 0x400000)) {
                            var_v1_3 = 0x3D;
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
                        } else {
                            func_00B67B80(arg0);
                            var_v1_3 = 0x35;
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
                        }
                        goto block_56;
                    }
                    temp_v0_9 = func_00BBB8C0(4);
                    switch (temp_v0_9) {            /* switch 7; irregular */
                    case 0:                         /* switch 7 */
                        var_s1 = 0x2C;
                        break;
                    case 1:                         /* switch 7 */
                        var_s1 = 0x2D;
                        break;
                    case 2:                         /* switch 7 */
                        var_s1 = 0x3C;
                        break;
                    default:                        /* switch 7 */
                    case 3:                         /* switch 7 */
                        var_s1 = 0x3B;
                        break;
                    }
                    if ((func_00BA8B40(arg0, var_s1) != 0) && (func_00B67E00(var_s1, M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0)) == 0) && (temp_s0 < 0x400000)) {
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
                        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_s1;
                    } else {
                        var_v1_3 = 0x33;
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
block_56:
                        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_v1_3;
                    }
                    return 1;
                case 6:                             /* switch 1 */
                    temp_a0_2 = M2C_FIELD(arg0, void **, 0);
                    if ((M2C_FIELD(temp_a0_2, s32 *, 0x1C) < 0x600) && (temp_s0 < 0x400000)) {
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B33F0(temp_a0_2, *temp_s2);
                        if ((func_00BA8B40(arg0, 0x2E) != 0) && (func_00B67E00(0x2E, 0U) == 0)) {
                            var_v1_4 = 0x2E;
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
                        } else {
                            func_00B67B80(arg0);
                            var_v1_4 = 0x35;
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
                        }
                        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_v1_4;
                        return 1;
                    }
                default:                            /* switch 1 */
                    return 0;
                }
            } else {
                if (func_00BBB8C0(2) == 0) {
                    func_00B67B80(arg0);
                    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) >= 0x801) {
                        if ((func_00BA8B40(arg0, 0x25) != 0) && (func_00B67E00(0x25, M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0)) == 0)) {
                            var_v1_5 = 0x25;
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
                        } else {
                            var_v1_5 = 0x33;
                            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
                        }
                    } else {
                        var_v1_5 = 0x35;
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
                    }
                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_v1_5;
                    return 1;
                }
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x2C) = func_009B33F0(M2C_FIELD(arg0, void **, 0), *temp_s2);
                temp_v1_3 = M2C_FIELD(arg0, void **, 0);
                if (M2C_FIELD(temp_v1_3, s32 *, 0x1C) < 0x801) {
                    if ((func_00B67E00(0x3D, M2C_FIELD(temp_v1_3, u8 *, 0)) == 0) && (temp_s0 < 0x400000)) {
                        var_v1_6 = 0x3D;
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
                    } else {
                        var_v1_6 = 0x35;
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
                    }
                    goto block_118;
                }
                temp_v0_10 = func_00BBB8C0(4);
                switch (temp_v0_10) {               /* switch 8; irregular */
                case 0:                             /* switch 8 */
                    var_s1_2 = 0x2C;
                    break;
                case 1:                             /* switch 8 */
                    var_s1_2 = 0x2D;
                    break;
                case 2:                             /* switch 8 */
                    var_s1_2 = 0x3C;
                    break;
                default:                            /* switch 8 */
                case 3:                             /* switch 8 */
                    var_s1_2 = 0x3B;
                    break;
                }
                if ((func_00BA8B40(arg0, var_s1_2) != 0) && (func_00B67E00(var_s1_2, M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0)) == 0) && (temp_s0 < 0x400000)) {
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_s1_2;
                } else {
                    var_v1_6 = 0x33;
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = func_00BBB8C0(0xF);
block_118:
                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_v1_6;
                }
                return 1;
            }
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
