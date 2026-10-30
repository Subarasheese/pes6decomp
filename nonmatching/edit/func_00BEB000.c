/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BCF3A0(s32);
extern void func_00BF2A00(void);
M2C_UNK func_001C4730(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern s32 D_003EB088;
extern char D_00CE60C0[];
extern char D_00CE64C2[];
extern char D_00CE64C3[];
extern M2C_UNK *D_00CE64D0;

s32 func_00BEB000(s8 *arg0) {
    s32 var_s0;
    s64 var_v0_3;
    s8 temp_v0_3;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 temp_v1_3;
    s8 temp_v1_4;
    s8 temp_v1_5;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 var_v0;
    u8 var_v0_2;

    var_s0 = 0;
    switch (D_003EB088) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_001C4730(((void *)D_00CE60C0), D_00CE64D0, 0xF8);
        func_00BF2A00();
        D_003EB088 = 1;
        /* fallthrough */
    case 1:                                         /* switch 1 */
        if (func_00BCF3A0(1) == 0) {
            if (func_00BCF3A0(8) == 0) {
                if (func_00BCF3A0(0x80) == 0) {
                    if (func_00BCF3A0(0x400) == 0) {
                        if (func_00BCF3A0(0x1000) == 0) {
                            if (func_00BCF3A0(0x4000) != 0) {
                                if (*arg0 != 0) {
                                    *arg0 = 0;
                                    func_00BF2A00();
                                } else {
                                    (*(s8 *)D_00CE64C2) = 1;
                                    (*(s8 *)D_00CE64C3) = 1;
                                    D_003EB088 = 0;
                                    func_001C4730(D_00CE64D0, ((void *)D_00CE60C0), 0xF8);
                                    var_s0 = 1;
                                }
                                func_0026E840(0x84008401);
                            }
                        } else {
                            temp_v1 = *arg0;
                            switch (temp_v1) {      /* switch 5; irregular */
                            case 0:                 /* switch 5 */
                                temp_v0 = M2C_FIELD(D_00CE64D0, u8 *, 0xEC);
                                if ((s32) temp_v0 < 2) {
                                    M2C_FIELD(D_00CE64D0, u8 *, 0xEC) = temp_v0;
                                    M2C_FIELD(D_00CE64D0, u8 *, 0xF4) = (u8) ((M2C_FIELD(D_00CE64D0, u8 *, 0xF4) & ~0x20) | ((1 & 1) << 5));
                                }
                                var_s0 = 1;
                                D_003EB088 = 0;
                                (*(s8 *)D_00CE64C2) = 1;
                                (*(s8 *)D_00CE64C3) = 1;
                                break;
                            default:                /* switch 5 */
                                *arg0 = 0;
                                break;
                            case 1:                 /* switch 5 */
                                M2C_FIELD(D_00CE64D0, u8 *, 0xF4) = (u8) ((M2C_FIELD(D_00CE64D0, u8 *, 0xF4) & ~0x20) | ((0 & 1) << 5));
                                M2C_FIELD(D_00CE64D0, u8 *, 0xEC) = 0U;
                                (*(s8 *)D_00CE64C2) = 1;
                                (*(s8 *)D_00CE64C3) = 1;
                                func_00BF2A00();
                                D_003EB088 = 0;
                                var_s0 = 1;
                                break;
                            }
                            func_0026E840(0x84028400);
                        }
                    } else {
                        temp_v1_2 = *arg0;
                        switch (temp_v1_2) {        /* switch 4; irregular */
                        case 2:                     /* switch 4 */
                            M2C_FIELD(D_00CE64D0, u8 *, 0xEC) = (u8) (M2C_FIELD(D_00CE64D0, u8 *, 0xEC) + 1);
                            var_v0 = M2C_FIELD(D_00CE64D0, u8 *, 0xEC);
                            if ((s32) var_v0 >= 2) {
                                var_v0 = 0;
                            } else if ((s32) var_v0 < 0) {
                                var_v0 = 1;
                            }
                            M2C_FIELD(D_00CE64D0, u8 *, 0xEC) = var_v0;
                            func_00BF2A00();
                            func_0026E840(0x8400F802);
                            break;
                        case 0:                     /* switch 4 */
                            *arg0 = 1;
                            func_00BF2A00();
                            func_0026E840(0x8400F802);
                            break;
                        }
                    }
                } else {
                    temp_v1_3 = *arg0;
                    switch (temp_v1_3) {            /* switch 3; irregular */
                    case 2:                         /* switch 3 */
                        temp_v0_2 = M2C_FIELD(D_00CE64D0, u8 *, 0xEC);
                        if (temp_v0_2 == 0) {
                            var_v0_2 = 1;
                        } else {
                            M2C_FIELD(D_00CE64D0, u8 *, 0xEC) = (u8) (temp_v0_2 - 1);
                            var_v0_2 = M2C_FIELD(D_00CE64D0, u8 *, 0xEC);
                            if ((s32) var_v0_2 >= 2) {
                                var_v0_2 = 0;
                            } else if ((s32) var_v0_2 < 0) {
                                var_v0_2 = 1;
                            }
                        }
                        M2C_FIELD(D_00CE64D0, u8 *, 0xEC) = var_v0_2;
                        func_00BF2A00();
                        func_0026E840(0x8400F802);
                        break;
                    case 1:                         /* switch 3 */
                        *arg0 = 0;
                        func_00BF2A00();
                        func_0026E840(0x8400F802);
                        break;
                    }
                }
            } else {
                temp_v1_4 = *arg0;
                if ((temp_v1_4 != 1) && (temp_v1_4 != 0)) {
                    temp_v0_3 = temp_v1_4 + 1;
                    *arg0 = temp_v0_3;
                    var_v0_3 = (s64) ((s64) temp_v0_3 << 0x38) >> 0x38;
                    if (var_v0_3 >= 3) {
                        var_v0_3 = 0;
                    } else if (var_v0_3 < 0) {
                        var_v0_3 = 2;
                    }
                } else {
                    var_v0_3 = 2;
                }
                *arg0 = (s8) var_v0_3;
                func_00BF2A00();
                func_0026E840(0x8400F802);
            }
        } else {
            temp_v1_5 = *arg0;
            switch (temp_v1_5) {                    /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                *arg0 = 0;
                break;
            case 1:                                 /* switch 2 */
            case 0:                                 /* switch 2 */
                *arg0 = 2;
                break;
            }
            func_00BF2A00();
            func_0026E840(0x8400F802);
        }
        break;
    }
    return var_s0;
}
