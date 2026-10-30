/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002C9C40(u8);
extern u8 func_008C3750(void *);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
u8 func_002C9B50(u8, u8, M2C_UNK);                  /* extern */
s64 func_002C9BE0(u8);                              /* extern */
M2C_UNK func_008C3130(void *, u8, u8, u8);          /* extern */
s32 func_008C3430(void *);                          /* extern */
M2C_UNK func_008C3630(void *);                      /* extern */
M2C_UNK func_008C3690(void *, s64);                 /* extern */
M2C_UNK func_008C3740(void *, u8);                  /* extern */
M2C_UNK func_008C3760(void *, M2C_UNK);             /* extern */
M2C_UNK func_008C3830(void *, u8, s32);             /* extern */
s32 func_008C3840(void *);                          /* extern */
s16 func_008C3850(void *);                          /* extern */
s32 func_008C3860(void *);                          /* extern */
s32 func_008D4030(s32 *, s32, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_008D90A0(s32);                             /* extern */
s32 func_008D9300(s32);                             /* extern */
extern char D_00591DF0[];

s32 func_008C1750(void *arg0, s32 arg1) {
    s32 sp68;
    s16 sp6C;
    M2C_UNK var_s0;
    f32 var_f0;
    f32 var_f2;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s1;
    s64 temp_s2_2;
    s64 temp_v1_2;
    u8 temp_s0;
    u8 temp_s0_3;
    u8 temp_s0_4;
    u8 temp_s1;
    u8 temp_s1_2;

    temp_v0 = func_008C3750(arg0 + 8);
    if (temp_v0 < 0) {
        var_f2 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    } else {
        var_f2 = (f32) temp_v0;
    }
    if ((s32) (*(u8 *)D_00591DF0) < 0) {
        var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_00591DF0) >> 1) | ((*(u8 *)D_00591DF0) & 1));
    } else {
        var_f0 = (f32) (*(u8 *)D_00591DF0);
    }
    var_s1 = (s32) (var_f2 / (360.0f / var_f0));
    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, u8 *, 0);
        if (func_008C3430(arg0 + 8) != 0) {
            func_008C3130(arg0 + 8, temp_s0, M2C_FIELD(arg0, u8 *, 2), M2C_FIELD(arg0, u8 *, 4));
            func_008C3760(arg0 + 8, 0);
        }
        if (func_008C3860(arg0 + 8) == 0) {
            sp68 = func_008C3840(arg0 + 8);
            sp6C = func_008C3850(arg0 + 8);
            temp_s2 = func_002C9BE0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF;
            temp_s0_2 = func_002C9C40(M2C_FIELD(arg0, u8 *, 0));
            temp_v1 = func_008D90A0(arg1) & 0x11E0;
            switch (temp_v1) {                      /* switch 1; irregular */
            case 0x80:                              /* switch 1 */
                temp_s0_3 = M2C_FIELD(arg0, u8 *, 4);
                M2C_FIELD(arg0, u8 *, 4) = (u8) (temp_s0_3 - 1);
                M2C_FIELD(arg0, u8 *, 4) = func_002C9B50(M2C_FIELD(arg0, u8 *, 0), M2C_FIELD(arg0, u8 *, 4), 1);
                if ((temp_s0_3 & 0xFF) != M2C_FIELD(arg0, u8 *, 4)) {
                    temp_s1 = M2C_FIELD(arg0, u8 *, 0);
                    if ((temp_s1 == 0) || (temp_s1 == 9)) {
                        func_008C3630(arg0 + 8);
                    }
                    func_008C3690(arg0 + 8, (s64) (func_002C9BE0(temp_s1) << 0x38) >> 0x38);
                    func_008C3130(arg0 + 8, temp_s1, M2C_FIELD(arg0, u8 *, 2), M2C_FIELD(arg0, u8 *, 4));
                    func_008C3830(arg0 + 8, (u8) sp68, 1);
                    func_008C3760(arg0 + 8, 0);
                    func_0026E840(0x8400F802);
                    M2C_FIELD(arg0, u8 *, 1) = (u8) sp68;
                    func_008C3850(arg0 + 8);
                    func_008C3830(arg0 + 8, (u8) sp68, 1);
                    func_008C3760(arg0 + 8, 0);
block_76:
                    return 3;
                }
                return 0;
            case 0x100:                             /* switch 1 */
                temp_s0_4 = M2C_FIELD(arg0, u8 *, 4);
                M2C_FIELD(arg0, u8 *, 4) = (u8) (temp_s0_4 + 1);
                M2C_FIELD(arg0, u8 *, 4) = func_002C9B50(M2C_FIELD(arg0, u8 *, 0), M2C_FIELD(arg0, u8 *, 4), 0);
                if ((temp_s0_4 & 0xFF) != M2C_FIELD(arg0, u8 *, 4)) {
                    temp_s1_2 = M2C_FIELD(arg0, u8 *, 0);
                    if ((temp_s1_2 == 0) || (temp_s1_2 == 9)) {
                        func_008C3630(arg0 + 8);
                    }
                    func_008C3690(arg0 + 8, (s64) (func_002C9BE0(temp_s1_2) << 0x38) >> 0x38);
                    func_008C3130(arg0 + 8, temp_s1_2, M2C_FIELD(arg0, u8 *, 2), M2C_FIELD(arg0, u8 *, 4));
                    func_008C3830(arg0 + 8, (u8) sp68, 1);
                    func_008C3760(arg0 + 8, 0);
                    func_0026E840(0x8400F802);
                    M2C_FIELD(arg0, u8 *, 1) = (u8) sp68;
                    func_008C3850(arg0 + 8);
                    func_008C3830(arg0 + 8, (u8) sp68, 1);
                    func_008C3760(arg0 + 8, 0);
                    goto block_76;
                }
                return 0;
            case 0x1000:                            /* switch 1 */
                return 6;
            case 0x20:                              /* switch 1 */
                func_0026E840(0x84028400);
                return 2;
            case 0x40:                              /* switch 1 */
                func_0026E840(0x84008401);
                return 1;
            default:                                /* switch 1 */
                temp_v0_2 = func_008D9300(arg1);
                switch (temp_v0_2) {                /* switch 2; irregular */
                case 0x200000:                      /* switch 2 */
                case 0x100000:                      /* switch 2 */
                    var_s1 = 1;
                    /* fallthrough */
                case 0x4:                           /* switch 2 */
                case 0x8:                           /* switch 2 */
                case 0x2:                           /* switch 2 */
                case 0x1:                           /* switch 2 */
                    temp_v0_3 = func_008D4030(&sp68, arg1, 0, temp_s2, 0xA);
                    switch (temp_v0_3) {            /* switch 3; irregular */
                    case 4:                         /* switch 3 */
                        func_008C3740(arg0 + 8, (u8) sp6C);
                        /* fallthrough */
                    case 3:                         /* switch 3 */
                        M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(((sp68 * 3) + temp_s0_2), u8 *, 1);
                        M2C_FIELD(arg0, u8 *, 4) = func_002C9B50(M2C_FIELD(arg0, u8 *, 0), M2C_FIELD(arg0, u8 *, 4), 0);
                        var_s0 = 0;
                        func_0026E840(0x8400F802);
                        M2C_FIELD(arg0, u8 *, 1) = (u8) sp68;
                        temp_s2_2 = (s64) ((((u8) sp68 & 0xFF) - func_008C3850(arg0 + 8)) << 0x30) >> 0x30;
                        func_008C3830(arg0 + 8, (u8) sp68, var_s1);
                        if (var_s1 != 1) {
                            temp_v1_2 = (s64) (temp_s2_2 << 0x30) >> 0x30;
                            if (temp_v1_2 >= 0xA) {
                                goto block_74;
                            }
                            if (temp_v1_2 < 0) {
block_74:
                                var_s0 = 1;
                            }
                        }
                        func_008C3760(arg0 + 8, var_s0);
                        goto block_76;
                    default:                        /* switch 3 */
                        return 0;
                    }
                    break;
                default:                            /* switch 2 */
                    return 0;
                }
                break;
            }
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
