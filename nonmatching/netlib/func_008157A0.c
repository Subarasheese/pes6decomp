/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
M2C_UNK func_00D0F680(M2C_UNK);                     /* extern */
M2C_UNK func_00D0FBE0(M2C_UNK);                     /* extern */
M2C_UNK func_00D0FD50(M2C_UNK *, s32, s32, s32);    /* extern */
extern char D_008A35F0[];

s32 func_008157A0(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a2;
    s32 var_a3;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s64 var_s2;
    s8 var_v0_10;
    s8 var_v0_11;
    s8 var_v0_3;
    s8 var_v0_4;
    s8 var_v0_5;
    s8 var_v0_6;
    s8 var_v0_7;
    s8 var_v0_8;
    s8 var_v0_9;
    void *temp_a0;

    var_s2 = 0;
    var_s1 = 8;
    if (func_0082C2A0() == 0) {
        goto block_130;
    }
    if (((void *)D_008A35F0) != NULL) {
        if (M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) < 0) {
            return 0;
        }
        if (M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) >= 0x10) {
            return 0;
        }
        if (arg1 == 0) {
            return 0;
        }
        if (arg0 != 0) {
            temp_a2 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) << 6;
            var_a3 = 0;
            do {
                temp_a0 = ((void *)D_008A35F0) + temp_a2 + (var_a3 * 8);
                if ((M2C_FIELD(temp_a0, s32 *, 0x10) == 0) && (M2C_FIELD(temp_a0, s32 *, 0x14) == 0)) {
                    var_s2 = 1;
                    var_s1 = var_a3;
                }
                var_a3 += 1;
            } while (var_a3 < 8);
            if (((s64) (var_s2 << 0x38) >> 0x38) == 0) {
                return 0;
            }
            if (var_s1 >= 0) {
                if (var_s1 < 8) {
                    temp_a1 = var_s1 * 8;
                    M2C_FIELD((temp_a1 + (temp_a2 + ((void *)D_008A35F0))), s32 *, 0x10) = arg0;
                    M2C_FIELD((temp_a1 + ((M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) << 6) + ((void *)D_008A35F0))), s32 *, 0x14) = arg1;
                    M2C_FIELD((var_s1 + ((void *)D_008A35F0)), s8 *, 0x410) = 0;
                    if (((void *)D_008A35F0) == NULL) {
                        goto block_72;
                    }
                    if (((void *)D_008A35F0) != NULL) {
                        var_v0 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
                    } else {
                        var_v0 = 9;
                    }
                    if (var_v0 != 0) {
                        if (((void *)D_008A35F0) != NULL) {
                            var_v1 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
                        } else {
                            var_v1 = 9;
                        }
                        if (var_v1 != 1) {
                            if (((void *)D_008A35F0) != NULL) {
                                var_v1_2 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
                            } else {
                                var_v1_2 = 9;
                            }
                            if (var_v1_2 != 8) {
                                var_v0_2 = 1;
                            } else {
                                goto block_49;
                            }
                        } else {
                            goto block_49;
                        }
                    } else {
block_49:
                        if (((void *)D_008A35F0) != NULL) {
                            var_v1_3 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
                        } else {
                            var_v1_3 = 9;
                        }
                        if (var_v1_3 == 8) {
                            if (((void *)D_008A35F0) != NULL) {
                                var_v0_3 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41E);
                            } else {
                                var_v0_3 = 0;
                            }
                            if (((s64) ((s64) var_v0_3 << 0x38) >> 0x38) == 0) {
                                var_v0_2 = 1;
                            } else {
                                if (((void *)D_008A35F0) != NULL) {
                                    var_v0_4 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41F);
                                } else {
                                    var_v0_4 = 0;
                                }
                                if (((s64) ((s64) var_v0_4 << 0x38) >> 0x38) != 1) {
                                    if (((void *)D_008A35F0) != NULL) {
                                        var_v0_5 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x420);
                                    } else {
                                        var_v0_5 = 0;
                                    }
                                    if (((s64) ((s64) var_v0_5 << 0x38) >> 0x38) == 1) {
                                        goto block_71;
                                    }
                                    goto block_72;
                                }
block_71:
                                var_v0_2 = 1;
                            }
                        } else {
block_72:
                            var_v0_2 = 0;
                        }
                    }
                    if (var_v0_2 == 0) {
                        if (((void *)D_008A35F0) == NULL) {
                            goto block_97;
                        }
                        if (((void *)D_008A35F0) != NULL) {
                            var_v1_4 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
                        } else {
                            var_v1_4 = 9;
                        }
                        if (var_v1_4 != 8) {
                            goto block_97;
                        }
                        if (((void *)D_008A35F0) != NULL) {
                            var_v0_6 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41E);
                        } else {
                            var_v0_6 = 0;
                        }
                        if (((s64) ((s64) var_v0_6 << 0x38) >> 0x38) != 0) {
                            if (((void *)D_008A35F0) != NULL) {
                                var_v0_7 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41F);
                            } else {
                                var_v0_7 = 0;
                            }
                            if (((s64) ((s64) var_v0_7 << 0x38) >> 0x38) != 1) {
                                if (((void *)D_008A35F0) != NULL) {
                                    var_v0_8 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x420);
                                } else {
                                    var_v0_8 = 0;
                                }
                                var_v1_5 = 1;
                                if (((s64) ((s64) var_v0_8 << 0x38) >> 0x38) == 1) {
                                    goto block_97;
                                }
                            } else {
                                goto block_97;
                            }
                        } else {
block_97:
                            var_v1_5 = 0;
                        }
                        if (var_v1_5 == 0) {
                            if (((void *)D_008A35F0) != NULL) {
                                M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41D) = 1;
                            }
                            if (M2C_FIELD(((void *)D_008A35F0), s8 *, 0x418) == 1) {
                                func_00D0FD50(((void *)D_008A35F0), temp_a1, temp_a2, var_a3);
                                func_00D0FBE0(1);
                                func_00D0F680(1);
                            }
                        } else {
                            goto block_103;
                        }
                    } else {
block_103:
                        if (((void *)D_008A35F0) == NULL) {
                            goto block_126;
                        }
                        if (((void *)D_008A35F0) != NULL) {
                            var_v1_6 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
                        } else {
                            var_v1_6 = 9;
                        }
                        if (var_v1_6 != 8) {
                            goto block_126;
                        }
                        if (((void *)D_008A35F0) != NULL) {
                            var_v0_9 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41E);
                        } else {
                            var_v0_9 = 0;
                        }
                        if (((s64) ((s64) var_v0_9 << 0x38) >> 0x38) != 0) {
                            if (((void *)D_008A35F0) != NULL) {
                                var_v0_10 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41F);
                            } else {
                                var_v0_10 = 0;
                            }
                            if (((s64) ((s64) var_v0_10 << 0x38) >> 0x38) != 1) {
                                if (((void *)D_008A35F0) != NULL) {
                                    var_v0_11 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x420);
                                } else {
                                    var_v0_11 = 0;
                                }
                                var_v1_7 = 1;
                                if (((s64) ((s64) var_v0_11 << 0x38) >> 0x38) == 1) {
                                    goto block_126;
                                }
                            } else {
                                goto block_126;
                            }
                        } else {
block_126:
                            var_v1_7 = 0;
                        }
                        if ((var_v1_7 == 1) && (((void *)D_008A35F0) != NULL)) {
                            M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41E) = 0;
                        }
                    }
block_130:
                    return 1;
                }
                goto block_29;
            }
block_29:
            return 0;
        }
        return 0;
    }
    return 0;
}
