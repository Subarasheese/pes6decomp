/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
extern u8 func_00BF6260(void);
extern s32 func_00C01090(s32);
extern s64 func_002BE490(s32, s32);
extern void * func_00B2A420(u32);
extern char D_00591DCD[];
extern char Pes6MatchSquads[];

s32 func_00B5EC30(void) {
    s32 var_s2;
    s64 temp_s0_2;
    s64 temp_s0_3;
    s64 temp_s0_4;
    s64 temp_s0_5;
    s64 temp_s0_6;
    s64 temp_s0_7;
    s64 temp_s0_8;
    s64 temp_s0_9;
    s64 temp_s2;
    s64 temp_s2_2;
    s64 temp_s2_3;
    s64 temp_s2_4;
    s64 temp_s2_5;
    s64 temp_s2_6;
    s64 temp_s2_7;
    s64 temp_s2_8;
    u64 temp_a0_2;
    u64 temp_a0_3;
    void **temp_s0;
    void **temp_s1;
    void *temp_a0;
    void *temp_v0;

    var_s2 = 2;
    temp_s1 = func_00B2A420(func_00BF6270());
    temp_s0 = func_00B2A420(func_00BF6260());
    switch ((*(u8 *)D_00591DCD)) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        temp_a0 = *temp_s1;
        temp_a0_2 = (u64) ((s64) M2C_FIELD(((M2C_FIELD(temp_a0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_a0, u8 *, 0x12) * 0x6900))), u8 *, 0x89) << 0x3B) >> 0x3E;
        switch (temp_a0_2) {                        /* switch 2; irregular */
        case 3:                                     /* switch 2 */
            if (func_00C01090(0xD) == 0) {
                temp_s2 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s2 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_2 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                    if ((temp_s0_2 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) <= 0) {
                        var_s2 = 2;
                    } else {
                        goto block_62;
                    }
                } else {
                    goto block_62;
                }
            } else {
block_62:
                var_s2 = 1;
            }
            break;
        case 2:                                     /* switch 2 */
            if (func_00C01090(0xD) == 0) {
                temp_s2_2 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s2_2 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_3 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                    if ((temp_s0_3 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) <= 0) {
                        var_s2 = 3;
                    } else {
                        var_s2 = 2;
                    }
                } else {
                    var_s2 = 2;
                }
            } else {
                goto block_62;
            }
            break;
        case 1:                                     /* switch 2 */
            if (func_00C01090(0xD) != 0) {
                temp_s2_3 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s2_3 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_4 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                    if ((temp_s0_4 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) <= 0) {
                        var_s2 = 2;
                    } else {
                        goto block_62;
                    }
                } else {
                    goto block_62;
                }
            } else {
                var_s2 = 3;
            }
            break;
        case 0:                                     /* switch 2 */
            if (func_00C01090(0xD) != 0) {
                temp_s2_4 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s2_4 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_5 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                    if ((temp_s0_5 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) <= 0) {
                        var_s2 = 2;
                    } else {
                        goto block_62;
                    }
                } else {
                    var_s2 = 2;
                }
            } else {
                var_s2 = 3;
            }
            break;
        }
        break;
    default:                                        /* switch 1 */
    case 1:                                         /* switch 1 */
        temp_v0 = *temp_s1;
        temp_a0_3 = (u64) ((s64) M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v0, u8 *, 0x12) * 0x6900))), u8 *, 0x89) << 0x3B) >> 0x3E;
        switch (temp_a0_3) {                        /* switch 3; irregular */
        case 3:                                     /* switch 3 */
            if (func_00C01090(0xD) == 0) {
                temp_s2_5 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s2_5 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_6 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                    if ((temp_s0_6 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) <= 0) {
                        var_s2 = 2;
                    } else {
                        goto block_62;
                    }
                } else {
                    var_s2 = 2;
                }
            } else {
                goto block_62;
            }
            break;
        case 2:                                     /* switch 3 */
            if (func_00C01090(0xD) == 0) {
                temp_s2_6 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s2_6 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_7 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                    if ((temp_s0_7 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) <= 0) {
                        var_s2 = 3;
                    } else {
                        var_s2 = 2;
                    }
                } else {
                    var_s2 = 3;
                }
            } else {
                temp_s2_7 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s2_7 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_8 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                    if ((temp_s0_8 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) <= 0) {
                        var_s2 = 2;
                    } else {
                        goto block_62;
                    }
                } else {
                    var_s2 = 2;
                }
            }
            break;
        case 1:                                     /* switch 3 */
            if (func_00C01090(0xD) != 0) {
                temp_s2_8 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s2_8 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_9 = (s64) (func_002BE490((s32) M2C_FIELD(*temp_s1, u8 *, 0x12), 1) << 0x30) >> 0x30;
                    if ((temp_s0_9 - ((s64) (func_002BE490((s32) M2C_FIELD(*temp_s0, u8 *, 0x12), 1) << 0x30) >> 0x30)) <= 0) {
                        var_s2 = 3;
                    } else {
                        var_s2 = 2;
                    }
                } else {
                    var_s2 = 2;
                }
            } else {
                var_s2 = 3;
            }
            break;
        default:                                    /* switch 3 */
            var_s2 = (temp_a0_3 == 0) ? 3 : 2;
            break;
        }
        break;
    }
    return var_s2;
}
