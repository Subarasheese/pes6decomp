/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
extern void *Pes6Ball_Current;

s32 func_00A0FC40(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v0;
    u16 temp_v1_2;
    void *temp_a0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 4);
    temp_v1_2 = M2C_FIELD(temp_v1, u16 *, 0x30);
    temp_s0 = (s32) M2C_FIELD(temp_v1, f32 *, 0x38);
    var_s1 = arg2;
    switch (temp_v1_2) {                            /* switch 1; irregular */
    case 0x39A:                                     /* switch 1 */
    case 0xC8:                                      /* switch 1 */
    case 0xBC:                                      /* switch 1 */
    case 0x6F:                                      /* switch 1 */
        return (var_s1 + 0x100) >= arg1;
    case 0x13:                                      /* switch 1 */
    case 0x24:                                      /* switch 1 */
    case 0x12:                                      /* switch 1 */
    case 0x11:                                      /* switch 1 */
        if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0xB) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x60)) {
            temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x1C);
            var_s1 = 0x100;
            var_v0 = temp_v1_3 >> 6;
            if (temp_v1_3 < 0) {
                var_v0 = (s32) (temp_v1_3 + 0x3F) >> 6;
            }
            if (arg1 < (var_v0 + 0x100)) {
                goto block_105;
            }
            goto block_18;
        }
    default:                                        /* switch 1 */
block_18:
        temp_v1_4 = M2C_FIELD(arg0, s32 *, 0x1C);
        var_a0 = temp_v1_4 >> 7;
        if (temp_v1_4 < 0) {
            var_a0 = (s32) (temp_v1_4 + 0x7F) >> 7;
        }
        if ((var_a0 + (var_s1 * 2)) < arg1) {
            return 0;
        }
        if (M2C_FIELD(arg0, u8 *, 0x41) == 0) {
            temp_a0 = M2C_FIELD(arg0, void **, 4);
            temp_v0 = M2C_FIELD(temp_a0, u16 *, 0x30);
            switch (temp_v0) {                      /* switch 2; irregular */
            case 0x1A4:                             /* switch 2 */
                var_s1 = 0x20;
                if (arg1 < ((M2C_FIELD(arg0, s32 *, 0x1C) / 80) + ((u32) temp_v1_4 >> 0x1F) + 0x20)) {
                    goto block_105;
                }
block_56:
                switch (temp_v0) {                  /* switch 3; irregular */
                case 0x2C3:                         /* switch 3 */
                case 0x2C2:                         /* switch 3 */
                    if (!(M2C_FIELD(temp_a0, f32 *, 0x38) < 8.0f) && ((var_s1 * 3) < arg1)) {
                        return 0;
                    }
                case 0x2C4:                         /* switch 3 */
                    if (func_00207D10(temp_a0) != 0) {
                        func_00209A00(M2C_FIELD(arg0, void **, 4), 0, 0);
                        func_00207390(M2C_FIELD(arg0, void **, 4), 4);
                        return 0;
                    }
block_105:
                    return 1;
                case 0x39A:                         /* switch 3 */
                case 0xC0:                          /* switch 3 */
                case 0xC8:                          /* switch 3 */
                case 0xBC:                          /* switch 3 */
                    goto block_105;
                default:                            /* switch 3 */
                    if ((var_s1 * 2) < arg1) {
                        return 0;
                    }
                    switch (temp_v0) {              /* switch 4; irregular */
                    case 0x114:                     /* switch 4 */
                        if (var_s1 < 0x20) {
                            temp_v1_5 = var_s1 * 3;
                            var_v0_2 = temp_v1_5 >> 1;
                            if (temp_v1_5 < 0) {
                                var_v0_2 = (s32) (temp_v1_5 + 1) >> 1;
                            }
                            if (var_v0_2 < arg1) {
                                goto block_97;
                            }
                            goto block_104;
                        }
block_104:
                        if (temp_s0 >= (M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 2) * 2)) {
                            goto block_105;
                        }
block_97:
                        return 0;
                    case 0x383:                     /* switch 4 */
                    case 0x381:                     /* switch 4 */
                    case 0x112:                     /* switch 4 */
                    case 0x0:                       /* switch 4 */
                    case 0x12E:                     /* switch 4 */
                    case 0x1A7:                     /* switch 4 */
                    case 0x6B:                      /* switch 4 */
                        if (var_s1 >= arg1) {
                            goto block_105;
                        }
block_101:
                    default:                        /* switch 4 */
                        return 0;
                    case 0xC8:                      /* switch 4 */
                    case 0x2C2:                     /* switch 4 */
                        goto block_105;
                    case 0x3D2:                     /* switch 4 */
                    case 0x1:                       /* switch 4 */
                    case 0x2:                       /* switch 4 */
                        if ((M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 2) * 2) < temp_s0) {
                            goto block_105;
                        }
                        goto block_101;
                    }
                    break;
                }
                break;
            case 0xC1:                              /* switch 2 */
            case 0x1:                               /* switch 2 */
            case 0x6B:                              /* switch 2 */
            case 0x2:                               /* switch 2 */
                if (arg1 < (var_s1 + 0x20 + ((M2C_FIELD(arg0, s32 *, 0x1C) / 80) + ((u32) temp_v1_4 >> 0x1F)))) {
                    goto block_105;
                }
                goto block_56;
            case 0x13:                              /* switch 2 */
            case 0x24:                              /* switch 2 */
            case 0x12:                              /* switch 2 */
            case 0x11:                              /* switch 2 */
                var_s1 = 0x140;
                var_a1 = temp_v1_4 >> 6;
                if (temp_v1_4 < 0) {
                    var_a1 = (s32) (temp_v1_4 + 0x3F) >> 6;
                }
                if (arg1 < (var_a1 + 0x140)) {
                    goto block_105;
                }
                goto block_56;
            case 0x114:                             /* switch 2 */
            case 0x11A:                             /* switch 2 */
                if (temp_s0 < (M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 2) * 2)) {
                    var_s1 = 0x10;
                }
                /* fallthrough */
            default:                                /* switch 2 */
                var_a1_2 = temp_v1_4 >> 8;
                if (temp_v1_4 < 0) {
                    var_a1_2 = (s32) (temp_v1_4 + 0xFF) >> 8;
                }
                if (arg1 < (var_s1 - 8 + var_a1_2)) {
                    goto block_105;
                }
                goto block_56;
            }
        } else {
            return 0;
        }
        break;
    case 0xC0:                                      /* switch 1 */
    case 0x2BB:                                     /* switch 1 */
        return 0;
    }
}
