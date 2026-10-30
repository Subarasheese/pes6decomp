/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BCF3A0(s32);
extern void func_00BF2A00(void);
M2C_UNK func_001C4730(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern s32 D_003EB080;
extern char D_00CE5EC0[];
extern char D_00CE64C2[];
extern char D_00CE64C3[];
extern M2C_UNK *D_00CE64D0;

s32 func_00BEB910(s8 *arg0) {
    M2C_UNK *temp_s0;
    M2C_UNK *temp_s0_2;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_s1;
    s64 var_v0;
    s64 var_v0_2;
    s8 temp_v0_3;
    s8 temp_v0_4;
    s8 temp_v1;
    s8 temp_v1_10;
    s8 temp_v1_3;
    s8 temp_v1_7;
    s8 temp_v1_9;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_6;
    u8 temp_v1_8;

    var_s1 = 0;
    switch (D_003EB080) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_001C4730(((void *)D_00CE5EC0), D_00CE64D0, 0xF8);
        func_00BF2A00();
        D_003EB080 = 1;
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
                                    D_003EB080 = 0;
                                    func_001C4730(D_00CE64D0, ((void *)D_00CE5EC0), 0xF8);
                                    var_s1 = 1;
                                }
                                func_0026E840(0x84008401);
                            }
                        } else {
                            temp_v1 = *arg0;
                            switch (temp_v1) {      /* switch 5; irregular */
                            case 0:                 /* switch 5 */
                                var_a1 = M2C_FIELD(D_00CE64D0, u8 *, 0x65) + 0x94;
                                temp_v1_2 = M2C_FIELD(D_00CE64D0, u8 *, 0x64) + 0x94;
                                if (var_a1 < 0xCE) {
                                    if (var_a1 < temp_v1_2) {
                                        var_a1 = temp_v1_2;
                                    }
                                    M2C_FIELD(D_00CE64D0, u8 *, 0x64) = (u8) (temp_v1_2 - 0x94);
                                    M2C_FIELD(D_00CE64D0, u8 *, 0x65) = (u8) (var_a1 - 0x94);
                                    M2C_FIELD(D_00CE64D0, u8 *, 0xF4) = (u8) ((M2C_FIELD(D_00CE64D0, u8 *, 0xF4) & ~8) | 8);
                                }
                                var_s1 = 1;
                                D_003EB080 = 0;
                                (*(s8 *)D_00CE64C2) = 1;
                                (*(s8 *)D_00CE64C3) = 1;
                                break;
                            default:                /* switch 5 */
                                *arg0 = 0;
                                break;
                            case 1:                 /* switch 5 */
                                M2C_FIELD(D_00CE64D0, u8 *, 0xF4) = (u8) ((M2C_FIELD(D_00CE64D0, u8 *, 0xF4) & ~8) | ((0 & 1) * 8));
                                M2C_FIELD(D_00CE64D0, u8 *, 0x64) = 0x1BU;
                                M2C_FIELD(D_00CE64D0, u8 *, 0x65) = 0x1BU;
                                (*(s8 *)D_00CE64C2) = 1;
                                (*(s8 *)D_00CE64C3) = 1;
                                func_00BF2A00();
                                D_003EB080 = 0;
                                var_s1 = 1;
                                break;
                            }
                            func_0026E840(0x84028400);
                        }
                    } else {
                        temp_v1_3 = *arg0;
                        temp_s0 = D_00CE64D0;
                        switch (temp_v1_3) {        /* switch 4; irregular */
                        case 4:                     /* switch 4 */
                            if (M2C_FIELD(temp_s0, u8 *, 0x66) != 0) {
                                M2C_FIELD(temp_s0, u8 *, 0x66) = 0U;
                            } else {
                                M2C_FIELD(temp_s0, u8 *, 0x66) = 1U;
                            }
                            func_00BF2A00();
                            func_0026E840(0x8400F802);
                            break;
                        case 3:                     /* switch 4 */
                            temp_v1_4 = M2C_FIELD(temp_s0, u8 *, 0x65);
                            if ((temp_v1_4 + 0x94) < 0xCD) {
                                M2C_FIELD(temp_s0, u8 *, 0x65) = (u8) (temp_v1_4 + 1);
                                func_0026E840(0x8400F802);
                            }
                            func_00BF2A00();
                            break;
                        case 2:                     /* switch 4 */
                            temp_v1_5 = M2C_FIELD(temp_s0, u8 *, 0x64);
                            if ((temp_v1_5 + 0x94) < 0xCD) {
                                M2C_FIELD(temp_s0, u8 *, 0x64) = (u8) (temp_v1_5 + 1);
                                func_0026E840(0x8400F802);
                            }
                            temp_v1_6 = M2C_FIELD(temp_s0, u8 *, 0x64);
                            if ((s32) M2C_FIELD(temp_s0, u8 *, 0x65) < (s32) temp_v1_6) {
                                M2C_FIELD(temp_s0, u8 *, 0x65) = temp_v1_6;
                            }
                            func_00BF2A00();
                            break;
                        case 0:                     /* switch 4 */
                            *arg0 = 1;
                            func_00BF2A00();
                            func_0026E840(0x8400F802);
                            break;
                        }
                    }
                } else {
                    temp_v1_7 = *arg0;
                    temp_s0_2 = D_00CE64D0;
                    switch (temp_v1_7) {            /* switch 3; irregular */
                    case 4:                         /* switch 3 */
                        if (M2C_FIELD(temp_s0_2, u8 *, 0x66) != 1) {
                            M2C_FIELD(temp_s0_2, u8 *, 0x66) = 1U;
                        } else {
                            M2C_FIELD(temp_s0_2, u8 *, 0x66) = 0U;
                        }
                        func_00BF2A00();
                        func_0026E840(0x8400F802);
                        break;
                    case 3:                         /* switch 3 */
                        temp_v0 = M2C_FIELD(temp_s0_2, u8 *, 0x65);
                        if ((s32) temp_v0 > 0) {
                            M2C_FIELD(temp_s0_2, u8 *, 0x65) = (u8) (temp_v0 - 1);
                            func_0026E840(0x8400F802);
                        }
                        temp_v1_8 = M2C_FIELD(temp_s0_2, u8 *, 0x65);
                        if ((s32) temp_v1_8 < (s32) M2C_FIELD(temp_s0_2, u8 *, 0x64)) {
                            M2C_FIELD(temp_s0_2, u8 *, 0x64) = temp_v1_8;
                        }
                        func_00BF2A00();
                        break;
                    case 2:                         /* switch 3 */
                        temp_v0_2 = M2C_FIELD(temp_s0_2, u8 *, 0x64);
                        if ((s32) temp_v0_2 > 0) {
                            M2C_FIELD(temp_s0_2, u8 *, 0x64) = (u8) (temp_v0_2 - 1);
                            func_0026E840(0x8400F802);
                        }
                        func_00BF2A00();
                        break;
                    case 1:                         /* switch 3 */
                        *arg0 = 0;
                        func_00BF2A00();
                        func_0026E840(0x8400F802);
                        break;
                    }
                }
            } else {
                temp_v1_9 = *arg0;
                if ((temp_v1_9 != 1) && (temp_v1_9 != 0)) {
                    temp_v0_3 = temp_v1_9 + 1;
                    *arg0 = temp_v0_3;
                    var_v0 = (s64) ((s64) temp_v0_3 << 0x38) >> 0x38;
                    if (var_v0 >= 5) {
                        var_v0 = 0;
                    } else if (var_v0 < 0) {
                        var_v0 = 4;
                    }
                } else {
                    var_v0 = 2;
                }
                *arg0 = (s8) var_v0;
                func_00BF2A00();
                func_0026E840(0x8400F802);
            }
        } else {
            temp_v1_10 = *arg0;
            switch (temp_v1_10) {                   /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                *arg0 = 0;
                break;
            default:                                /* switch 2 */
                temp_v0_4 = temp_v1_10 - 1;
                *arg0 = temp_v0_4;
                var_v0_2 = (s64) ((s64) temp_v0_4 << 0x38) >> 0x38;
                if (var_v0_2 >= 5) {
                    var_v0_2 = 0;
                } else if (var_v0_2 < 0) {
                    var_v0_2 = 4;
                }
block_18:
                *arg0 = (s8) var_v0_2;
                break;
            case 1:                                 /* switch 2 */
            case 0:                                 /* switch 2 */
                var_v0_2 = 4;
                goto block_18;
            }
            func_00BF2A00();
            func_0026E840(0x8400F802);
        }
        break;
    }
    return var_s1;
}
