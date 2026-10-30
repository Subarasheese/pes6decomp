/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BCF3A0(s32);
extern void func_00BF2A00(void);
M2C_UNK func_001C4730(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern char D_00CE64C7[];
extern char D_00CE64C9[];
extern void *D_00CE64D0;

s32 func_00BEA630(s8 *arg0, s32 arg1) {
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s64 temp_s2;
    s64 temp_v0_13;
    s64 temp_v0_15;
    s64 var_s3;
    s8 temp_v0_12;
    s8 temp_v0_14;
    s8 temp_v1;
    s8 temp_v1_3;
    s8 temp_v1_5;
    s8 temp_v1_6;
    s8 temp_v1_7;
    s8 var_v1;
    u8 temp_a0;
    u8 temp_v0_11;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 temp_v0_8;
    u8 temp_v1_2;
    void *temp_s0;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_9;
    void *temp_v1_4;
    void *temp_v1_8;
    void *var_v0;

    var_s6 = 0;
    temp_s2 = (s64) (((*(s8 *)D_00CE64C7) + (*(s8 *)D_00CE64C9)) << 0x38) >> 0x38;
    switch (temp_s2) {                              /* switch 1; irregular */
    default:                                        /* switch 1 */
        var_s4 = 1;
        var_s5 = 0x63;
block_8:
        var_s3 = 4;
        break;
    case 28:                                        /* switch 1 */
    case 27:                                        /* switch 1 */
    case 26:                                        /* switch 1 */
        var_s4 = 1;
        var_s5 = 8;
        goto block_8;
    case 29:                                        /* switch 1 */
        var_s5 = 2;
        var_s4 = 0;
        var_s3 = 2;
        break;
    }
    if (func_00BCF3A0(0x1000) == 0) {
        if (func_00BCF3A0(0x4000) == 0) {
            if (func_00BCF3A0(1) == 0) {
                if (func_00BCF3A0(8) == 0) {
                    if (func_00BCF3A0(0x80) == 0) {
                        if (func_00BCF3A0(0x400) != 0) {
                            temp_v1 = *arg0;
                            temp_s3 = D_00CE64D0;
                            switch (temp_v1) {      /* switch 6; irregular */
                            case 4:                 /* switch 6 */
                                temp_v0 = (temp_s2 * 4) + temp_s3;
                                if (M2C_FIELD(temp_v0, u8 *, 0x6E) != 0) {
                                    M2C_FIELD(temp_v0, u8 *, 0x6E) = 0U;
                                } else {
                                    M2C_FIELD(temp_v0, u8 *, 0x6E) = 1U;
                                }
                                func_00BF2A00();
                                func_0026E840(0x8400F802);
                                break;
                            case 3:                 /* switch 6 */
                                temp_v0_2 = (temp_s2 * 4) + temp_s3;
                                temp_v0_3 = M2C_FIELD(temp_v0_2, u8 *, 0x6D);
                                if ((s32) temp_v0_3 < var_s5) {
                                    M2C_FIELD(temp_v0_2, u8 *, 0x6D) = (u8) (temp_v0_3 + 1);
                                    func_0026E840(0x8400F802);
                                }
                                func_00BF2A00();
                                break;
                            case 2:                 /* switch 6 */
                                temp_v0_4 = (temp_s2 * 4) + temp_s3;
                                temp_v0_5 = M2C_FIELD(temp_v0_4, u8 *, 0x6C);
                                if ((s32) temp_v0_5 < var_s5) {
                                    M2C_FIELD(temp_v0_4, u8 *, 0x6C) = (u8) (temp_v0_5 + 1);
                                    func_0026E840(0x8400F802);
                                }
                                if (temp_s2 != 0x1D) {
                                    temp_v1_2 = M2C_FIELD(temp_v0_4, u8 *, 0x6C);
                                    temp_v0_6 = (temp_s2 * 4) + temp_s3;
                                    if ((s32) M2C_FIELD(temp_v0_6, u8 *, 0x6D) < (s32) temp_v1_2) {
                                        M2C_FIELD(temp_v0_6, u8 *, 0x6D) = temp_v1_2;
                                    }
                                } else {
                                    M2C_FIELD(((temp_s2 * 4) + temp_s3), u8 *, 0x6D) = (u8) M2C_FIELD(temp_v0_4, u8 *, 0x6C);
                                }
                                func_00BF2A00();
                                break;
                            case 0:                 /* switch 6 */
                                *arg0 = 1;
                                func_00BF2A00();
                                func_0026E840(0x8400F802);
                                break;
                            }
                        }
                    } else {
                        temp_v1_3 = *arg0;
                        temp_s0 = D_00CE64D0;
                        switch (temp_v1_3) {        /* switch 5; irregular */
                        case 4:                     /* switch 5 */
                            temp_v1_4 = (temp_s2 * 4) + temp_s0;
                            if (M2C_FIELD(temp_v1_4, u8 *, 0x6E) != 1) {
                                M2C_FIELD(temp_v1_4, u8 *, 0x6E) = 1U;
                            } else {
                                M2C_FIELD(temp_v1_4, u8 *, 0x6E) = 0U;
                            }
                            func_00BF2A00();
                            func_0026E840(0x8400F802);
                            break;
                        case 3:                     /* switch 5 */
                            temp_v0_7 = (temp_s2 * 4) + temp_s0;
                            temp_v0_8 = M2C_FIELD(temp_v0_7, u8 *, 0x6D);
                            if (var_s4 < (s32) temp_v0_8) {
                                M2C_FIELD(temp_v0_7, u8 *, 0x6D) = (u8) (temp_v0_8 - 1);
                                func_0026E840(0x8400F802);
                            }
                            temp_a0 = M2C_FIELD(temp_v0_7, u8 *, 0x6D);
                            temp_v0_9 = (temp_s2 * 4) + temp_s0;
                            if ((s32) temp_a0 < (s32) M2C_FIELD(temp_v0_9, u8 *, 0x6C)) {
                                M2C_FIELD(temp_v0_9, u8 *, 0x6C) = temp_a0;
                            }
                            func_00BF2A00();
                            break;
                        case 2:                     /* switch 5 */
                            temp_v0_10 = (temp_s2 * 4) + temp_s0;
                            temp_v0_11 = M2C_FIELD(temp_v0_10, u8 *, 0x6C);
                            if (var_s4 < (s32) temp_v0_11) {
                                M2C_FIELD(temp_v0_10, u8 *, 0x6C) = (u8) (temp_v0_11 - 1);
                                func_0026E840(0x8400F802);
                            }
                            if (temp_s2 == 0x1D) {
                                M2C_FIELD(((temp_s2 * 4) + temp_s0), u8 *, 0x6D) = (u8) M2C_FIELD(temp_v0_10, u8 *, 0x6C);
                            }
                            func_00BF2A00();
                            break;
                        case 1:                     /* switch 5 */
                            *arg0 = 0;
                            func_00BF2A00();
                            func_0026E840(0x8400F802);
                            break;
                        }
                    }
                } else {
                    temp_v1_5 = *arg0;
                    if ((temp_v1_5 != 1) && (temp_v1_5 != 0)) {
                        temp_v0_12 = temp_v1_5 + 1;
                        *arg0 = temp_v0_12;
                        temp_v0_13 = (s64) ((s64) temp_v0_12 << 0x38) >> 0x38;
                        if (var_s3 < temp_v0_13) {
                            var_s3 = 0;
                        } else if (temp_v0_13 >= 0) {
                            var_s3 = temp_v0_13;
                        }
                        *arg0 = (s8) var_s3;
                    } else {
                        *arg0 = 2;
                    }
                    func_00BF2A00();
                    func_0026E840(0x8400F802);
                }
            } else {
                temp_v1_6 = *arg0;
                switch (temp_v1_6) {                /* switch 4; irregular */
                case 2:                             /* switch 4 */
                    *arg0 = 0;
                    break;
                default:                            /* switch 4 */
                    temp_v0_14 = temp_v1_6 - 1;
                    *arg0 = temp_v0_14;
                    temp_v0_15 = (s64) ((s64) temp_v0_14 << 0x38) >> 0x38;
                    if (var_s3 < temp_v0_15) {
                        var_s3 = 0;
                    } else if (temp_v0_15 >= 0) {
                        var_s3 = temp_v0_15;
                    }
                case 1:                             /* switch 4 */
                    *arg0 = (s8) var_s3;
                    break;
                case 0:                             /* switch 4 */
                    *arg0 = (s8) var_s3;
                    break;
                }
                func_00BF2A00();
                func_0026E840(0x8400F802);
            }
        } else {
            if (*arg0 != 0) {
                *arg0 = 0;
                func_00BF2A00();
            } else {
                func_001C4730(D_00CE64D0, arg1, 0xF8);
                var_s6 = 1;
            }
            func_0026E840(0x84008401);
        }
    } else {
        temp_v1_7 = *arg0;
        switch (temp_v1_7) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            temp_v1_8 = (temp_s2 * 4) + D_00CE64D0;
            if (temp_s2 < 0x1E) {
                M2C_FIELD(D_00CE64D0, s32 *, 0xF0) = (s32) (M2C_FIELD(D_00CE64D0, s32 *, 0xF0) | (1 << temp_s2));
                M2C_FIELD(temp_v1_8, u8 *, 0x6C) = (u8) M2C_FIELD(temp_v1_8, u8 *, 0x6C);
                M2C_FIELD(temp_v1_8, u8 *, 0x6D) = (u8) M2C_FIELD(temp_v1_8, u8 *, 0x6D);
            }
block_29:
            var_s6 = 1;
            break;
        default:                                    /* switch 2 */
            *arg0 = 0;
            break;
        case 1:                                     /* switch 2 */
            M2C_FIELD(D_00CE64D0, s32 *, 0xF0) = (s32) (M2C_FIELD(D_00CE64D0, s32 *, 0xF0) & ~(1 << temp_s2));
            switch (temp_s2) {                      /* switch 3; irregular */
            case 29:                                /* switch 3 */
                var_v1 = 2;
                var_v0 = (temp_s2 * 4) + D_00CE64D0;
                M2C_FIELD(var_v0, s8 *, 0x6C) = 2;
                break;
            case 28:                                /* switch 3 */
            case 27:                                /* switch 3 */
            case 26:                                /* switch 3 */
                var_v1 = 4;
                var_v0 = (temp_s2 * 4) + D_00CE64D0;
                M2C_FIELD(var_v0, s8 *, 0x6C) = 4;
                break;
            default:                                /* switch 3 */
                var_v1 = 0x46;
                var_v0 = (temp_s2 * 4) + D_00CE64D0;
                M2C_FIELD(var_v0, s8 *, 0x6C) = 0x46;
                break;
            }
            M2C_FIELD(var_v0, s8 *, 0x6D) = var_v1;
            func_00BF2A00();
            goto block_29;
        }
        func_0026E840(0x84028400);
    }
    return var_s6;
}
