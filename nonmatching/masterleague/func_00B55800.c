/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_00B55EE0(s16 *, s32, u16 *);               /* extern */
extern char D_00B80B80[];

void func_00B55800(s32 arg0, s32 arg1, s16 *arg2, s32 arg3) {
    u16 sp9E;
    s16 *var_a0_5;
    s16 *var_s2_2;
    s16 *var_s3;
    s16 *var_s3_2;
    s16 *var_t0;
    s16 *var_v1;
    s16 var_s2;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0_2;
    s32 var_a2;
    s32 var_a7;
    s32 var_s4;
    s32 var_s6;
    s32 var_v1_10;
    s64 temp_a0;
    s64 temp_a0_4;
    s8 var_a1_2;
    s8 var_a1_4;
    u16 temp_a5;
    u16 temp_a6;
    u16 temp_s0_2;
    u16 temp_s0_3;
    u16 temp_s0_4;
    u16 var_v1_6;
    u16 var_v1_9;
    u32 temp_a1;
    u32 temp_a1_2;
    u64 var_v1_3;
    u8 *var_a2_2;
    u8 *var_v1_2;
    u8 var_a0;
    u8 var_a0_3;
    u8 var_v1_5;
    u8 var_v1_8;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *var_a0_2;
    void *var_a0_4;
    void *var_a1;
    void *var_a1_3;
    void *var_v1_4;
    void *var_v1_7;

    if (arg2 != NULL) {
        var_a2 = 0;
        var_v1 = arg2;
        do {
            M2C_FIELD(var_v1, s16 *, 0) = 0;
            var_a2 += 8;
            M2C_FIELD(var_v1, s16 *, 2) = 0;
            M2C_FIELD(var_v1, s16 *, 4) = 0;
            M2C_FIELD(var_v1, s16 *, 6) = 0;
            M2C_FIELD(var_v1, s16 *, 8) = 0;
            M2C_FIELD(var_v1, s16 *, 0xA) = 0;
            M2C_FIELD(var_v1, s16 *, 0xC) = 0;
            M2C_FIELD(var_v1, s16 *, 0xE) = 0;
            var_v1 += 0x10;
        } while (var_a2 < 0x268);
        temp_s1 = arg0 & 0xFF;
        temp_s0 = arg1 & 0xFF;
        var_s2 = 0;
        var_s3 = arg2;
        do {
            temp_v0 = func_00228A80();
            if (temp_v0 == NULL) {
                var_v1_2 = NULL;
            } else {
                temp_a0 = (s64) ((var_s2 & 0xFFFF) << 0x30) >> 0x30;
                if (temp_a0 >= 0x268) {
                    var_v1_2 = NULL;
                } else if (temp_a0 < 0x25E) {
                    var_v1_2 = temp_v0 + temp_a0 + 0x102BE;
                } else {
                    var_v1_2 = temp_v0 + (temp_a0 - 0x25E) + 0x10530;
                }
            }
            if (var_v1_2 != NULL) {
                var_v1_3 = (u64) ((s64) *var_v1_2 << 0x3D) >> 0x3F;
            } else {
                var_v1_3 = 0;
            }
            if (temp_s1 != 3) {
                if (temp_s1 >= 3) {
                    var_a0 = 0;
                } else {
                    temp_a1 = var_s2 & 0xFFFF;
                    if (temp_a1 >= 0x267U) {
                        var_a0_2 = NULL;
                    } else if ((s32) temp_a1 >= 0x268) {
                        var_a0_2 = NULL;
                    } else {
                        var_a0_2 = ((void *)D_00B80B80) + (temp_a1 << 5);
                    }
                    if (var_a0_2 == NULL) {
                        var_a0 = 0;
                    } else {
                        var_a0 = M2C_FIELD((temp_s1 + var_a0_2), u8 *, 0x13);
                    }
                }
                if (var_a0 & 0xFF) {
                    goto block_31;
                }
            } else {
block_31:
                if (temp_s0 != 5) {
                    if (temp_s0 >= 5) {
                        var_a0_3 = 0;
                    } else {
                        temp_a1_2 = var_s2 & 0xFFFF;
                        if (temp_a1_2 >= 0x267U) {
                            var_a0_4 = NULL;
                        } else if ((s32) temp_a1_2 >= 0x268) {
                            var_a0_4 = NULL;
                        } else {
                            var_a0_4 = ((void *)D_00B80B80) + (temp_a1_2 << 5);
                        }
                        if (var_a0_4 == NULL) {
                            var_a0_3 = 0;
                        } else {
                            var_a0_3 = M2C_FIELD((temp_s0 + var_a0_4), u8 *, 0x16);
                        }
                    }
                    if (var_a0_3 & 0xFF) {
                        goto block_45;
                    }
                } else {
block_45:
                    if (var_v1_3 & 0xFF & 0xFF) {
                        if (arg3 == 1) {
                            temp_v0_2 = func_00B55EE0(arg2, var_s2 & 0xFFFF, &sp9E);
                            if (temp_v0_2 > 0) {
                                arg2[sp9E] = var_s2;
                            } else if (temp_v0_2 >= 0) {
                                goto block_51;
                            }
                        } else {
block_51:
                            *var_s3 = var_s2;
                            var_s3 += 2;
                        }
                    }
                }
            }
            var_s2 += 1;
        } while (var_s2 < 0x268);
        var_s4 = 0;
        var_s3_2 = arg2;
        do {
            temp_s0_2 = (u16) *var_s3_2;
            if (temp_s0_2 != 0) {
                if (temp_s0_2 >= 0x267U) {
                    var_v1_4 = NULL;
                } else if ((s32) temp_s0_2 >= 0x268) {
                    var_v1_4 = NULL;
                } else {
                    var_v1_4 = ((void *)D_00B80B80) + (temp_s0_2 << 5);
                }
                if (var_v1_4 != NULL) {
                    var_v1_5 = M2C_FIELD(var_v1_4, u8 *, 0x12);
                } else {
                    var_v1_5 = 0;
                }
                temp_a0_2 = var_v1_5 & 0xFF;
                switch (temp_a0_2) {                /* switch 1; irregular */
                case 11:                            /* switch 1 */
                    /* fallthrough */
                case 13:                            /* switch 1 */
                case 8:                             /* switch 1 */
                case 9:                             /* switch 1 */
                case 10:                            /* switch 1 */
                    if ((s32) temp_s0_2 >= 0x268) {
                        var_v1_6 = 0;
                    } else {
                        temp_v0_3 = func_00228A80();
                        if (temp_v0_3 == NULL) {
                            var_v1_6 = 0;
                        } else if ((s32) temp_s0_2 < 0x25E) {
                            var_v1_6 = M2C_FIELD((temp_v0_3 + ((temp_s0_2 & 0xFFFF) * 2)), u16 *, 0xFE02);
                        } else {
                            var_v1_6 = M2C_FIELD((temp_v0_3 + (temp_s0_2 * 2)), u16 *, 0x10060);
                        }
                    }
                    temp_s1_2 = var_v1_6 & 0xFFFF;
                    if (temp_s1_2 != 0) {
                        var_s6 = 0;
                        var_s2_2 = arg2;
loop_81:
                        temp_s0_3 = (u16) *var_s2_2;
                        if (temp_s0_3 != 0) {
                            if (temp_s0_3 >= 0x267U) {
                                var_v1_7 = NULL;
                            } else if ((s32) temp_s0_3 >= 0x268) {
                                var_v1_7 = NULL;
                            } else {
                                var_v1_7 = ((void *)D_00B80B80) + (temp_s0_3 << 5);
                            }
                            if (var_v1_7 != NULL) {
                                var_v1_8 = M2C_FIELD(var_v1_7, u8 *, 0x12);
                            } else {
                                var_v1_8 = 0;
                            }
                            temp_a0_3 = var_v1_8 & 0xFF;
                            switch (temp_a0_3) {    /* switch 2; irregular */
                            case 7:                 /* switch 2 */
                                /* fallthrough */
                            case 12:                /* switch 2 */
                            case 4:                 /* switch 2 */
                            case 5:                 /* switch 2 */
                            case 6:                 /* switch 2 */
                                if ((s32) temp_s0_3 >= 0x268) {
                                    var_v1_9 = 0;
                                } else {
                                    temp_v0_4 = func_00228A80();
                                    if (temp_v0_4 == NULL) {
                                        var_v1_9 = 0;
                                    } else if ((s32) temp_s0_3 < 0x25E) {
                                        var_v1_9 = M2C_FIELD((((temp_s0_3 & 0xFFFF) * 2) + temp_v0_4), u16 *, 0xFE02);
                                    } else {
                                        var_v1_9 = M2C_FIELD(((temp_s0_3 * 2) + temp_v0_4), u16 *, 0x10060);
                                    }
                                }
                                if (temp_s1_2 == (var_v1_9 & 0xFFFF)) {
                                    temp_s0_4 = (u16) *var_s3_2;
                                    temp_v0_5 = func_00228A80();
                                    if (temp_v0_5 == NULL) {
                                        var_a2_2 = NULL;
                                    } else {
                                        temp_a0_4 = (s64) ((s64) temp_s0_4 << 0x30) >> 0x30;
                                        if (temp_a0_4 >= 0x268) {
                                            var_a2_2 = NULL;
                                        } else if (temp_a0_4 < 0x25E) {
                                            var_a2_2 = temp_v0_5 + temp_a0_4 + 0x102BE;
                                        } else {
                                            var_a2_2 = temp_v0_5 + (temp_a0_4 - 0x25E) + 0x10530;
                                        }
                                    }
                                    if (var_a2_2 != NULL) {
                                        *var_a2_2 = (*var_a2_2 & ~4) | ((0 & 1) * 4);
                                    }
                                    *var_s3_2 = 0;
                                } else {
                                    goto block_119;
                                }
                                break;
                            }
                        } else {
block_119:
                            var_s6 += 1;
                            var_s2_2 += 2;
                            if (var_s6 < 0x268) {
                                goto loop_81;
                            }
                        }
                    }
                    break;
                }
            }
            var_s4 += 1;
            var_s3_2 += 2;
        } while (var_s4 < 0x268);
        if (arg3 == 1) {
            var_v1_10 = 0;
            var_a0_5 = arg2;
            do {
                var_a7 = var_v1_10 + 1;
                if (var_a7 < 0x268) {
                    var_t0 = &arg2[var_a7];
                    do {
                        temp_a6 = (u16) *var_t0;
                        if (temp_a6 != 0) {
                            temp_a5 = (u16) *var_a0_5;
                            if (temp_a5 != 0) {
                                if (temp_a5 >= 0x267U) {
                                    var_a1 = NULL;
                                } else if ((s32) temp_a5 >= 0x268) {
                                    var_a1 = NULL;
                                } else {
                                    var_a1 = ((void *)D_00B80B80) + (temp_a5 << 5);
                                }
                                if (var_a1 != NULL) {
                                    var_a1_2 = M2C_FIELD(var_a1, s8 *, 0x11);
                                } else {
                                    var_a1_2 = -0x80;
                                }
                                if (temp_a6 >= 0x267U) {
                                    var_a1_3 = NULL;
                                } else if ((s32) temp_a6 >= 0x268) {
                                    var_a1_3 = NULL;
                                } else {
                                    var_a1_3 = ((void *)D_00B80B80) + ((temp_a6 & 0xFFFF) << 5);
                                }
                                if (var_a1_3 == NULL) {
                                    var_a1_4 = -0x80;
                                } else {
                                    var_a1_4 = M2C_FIELD(var_a1_3, s8 *, 0x11);
                                }
                                if (((s64) ((s64) var_a1_4 << 0x38) >> 0x38) < ((s64) (((s64) ((s64) var_a1_2 << 0x38) >> 0x38) << 0x38) >> 0x38)) {
                                    goto block_150;
                                }
                            } else {
block_150:
                                *var_t0 = (s16) temp_a5;
                                *var_a0_5 = (s16) temp_a6;
                            }
                        }
                        var_a7 += 1;
                        var_t0 += 2;
                    } while (var_a7 < 0x268);
                }
                var_v1_10 += 1;
                var_a0_5 += 2;
            } while (var_v1_10 < 0x267);
        }
    }
}
