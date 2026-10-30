/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_001C80F0(s8 *);                            /* extern */
M2C_UNK func_001C8590(void *, s8 *, M2C_UNK);       /* extern */
extern char D_00888400[];

s32 func_0081A650(void *arg0) {
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a3;
    s32 var_fp;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s64 temp_v1;
    s64 temp_v1_2;
    s64 var_s6;
    s64 var_s7;
    s8 *var_s1;
    s8 var_a4_10;
    s8 var_a4_12;
    s8 var_a4_14;
    s8 var_a4_16;
    s8 var_a4_2;
    s8 var_a4_4;
    s8 var_a4_6;
    s8 var_a4_8;
    s8 var_v1_2;
    s8 var_v1_4;
    void *temp_v1_3;
    void *var_a0;
    void *var_a4;
    void *var_a4_11;
    void *var_a4_13;
    void *var_a4_15;
    void *var_a4_3;
    void *var_a4_5;
    void *var_a4_7;
    void *var_a4_9;
    void *var_s0;
    void *var_v1;
    void *var_v1_3;
    void *var_v1_5;
    void *var_v1_6;
    void *var_v1_7;

    if (arg0 == NULL) {
        var_fp = 0;
    } else {
        var_fp = M2C_FIELD(arg0, s32 *, 0x2DC);
    }
    var_s3 = 0;
    var_s2 = 0;
    if (arg0 == NULL) {
        return 0;
    }
    var_s4 = 0;
    do {
        var_s7 = 3;
        var_s1 = NULL;
        var_s6 = 0;
        if (arg0 == NULL) {
            var_v0 = 1;
        } else {
            var_v0 = M2C_FIELD(arg0, s32 *, 0x2E0);
        }
        if (var_s4 < var_fp) {
            if (arg0 == NULL) {
                var_v1 = NULL;
            } else if (var_s4 < 0) {
                var_v1 = NULL;
            } else if (var_s4 < 4) {
                var_v1 = arg0 + (var_s4 * 0x34) + 0x209;
            } else {
                var_v1 = NULL;
            }
            if (var_v1 != NULL) {
                var_v1_2 = M2C_FIELD(var_v1, s8 *, 0x31);
            } else {
                var_v1_2 = 3;
            }
            var_s7 = (s64) ((s64) var_v1_2 << 0x38) >> 0x38;
            if (arg0 == NULL) {
                var_v1_3 = NULL;
            } else if (var_s4 < 0) {
                var_v1_3 = NULL;
            } else if (var_s4 < 4) {
                var_v1_3 = arg0 + (var_s4 * 0x34) + 0x209;
            } else {
                var_v1_3 = NULL;
            }
            if (var_v1_3 != NULL) {
                var_v1_4 = M2C_FIELD(var_v1_3, s8 *, 0x32);
            } else {
                var_v1_4 = 0;
            }
            var_s6 = (s64) ((s64) var_v1_4 << 0x38) >> 0x38;
            if (arg0 == NULL) {
                var_s1 = NULL;
            } else if (var_s4 < 0) {
                var_s1 = NULL;
            } else if (var_s4 < 4) {
                var_s1 = arg0 + (var_s4 * 0x34) + 0x209;
            } else {
                var_s1 = NULL;
            }
            if (var_s1 != NULL) {
                if (*var_s1 == 0) {
                    goto block_53;
                }
            } else {
block_53:
                var_s1 = NULL;
            }
            if (var_v0 != 1) {
                temp_v1 = (s64) (var_s7 << 0x38) >> 0x38;
                if (temp_v1 != 0) {
                    var_a3 = var_s2;
                    if (((s64) (var_s6 << 0x38) >> 0x38) == 1) {
                        var_a3 = 0;
                    } else {
                        var_a2 = 0;
                        var_a1 = var_s4;
loop_219:
                        if (var_a1 < 4) {
                            if (arg0 == NULL) {
                                var_a4 = NULL;
                            } else if (var_a1 < 0) {
                                var_a4 = NULL;
                            } else if (var_a1 < 4) {
                                var_a4 = arg0 + (var_a1 * 0x34) + 0x209;
                            } else {
                                var_a4 = NULL;
                            }
                            if (var_a4 != NULL) {
                                var_a4_2 = M2C_FIELD(var_a4, s8 *, 0x31);
                            } else {
                                var_a4_2 = 3;
                            }
                            if (temp_v1 == ((s64) ((s64) var_a4_2 << 0x38) >> 0x38)) {
                                if (arg0 == NULL) {
                                    var_a4_3 = NULL;
                                } else if (var_a1 < 0) {
                                    var_a4_3 = NULL;
                                } else if (var_a1 < 4) {
                                    var_a4_3 = arg0 + (var_a1 * 0x34) + 0x209;
                                } else {
                                    var_a4_3 = NULL;
                                }
                                if (var_a4_3 != NULL) {
                                    var_a4_4 = M2C_FIELD(var_a4_3, s8 *, 0x32);
                                } else {
                                    var_a4_4 = 0;
                                }
                                if (((s64) ((s64) var_a4_4 << 0x38) >> 0x38) == 1) {
                                    var_a2 = 1;
                                }
                            }
                            var_a1 += 1;
                            goto loop_219;
                        }
                        if (var_a2 == 1) {
                            var_a3 += 1;
                        }
                    }
                    goto block_222;
                }
                var_a3 = 3 - var_s3;
                if (((s64) (var_s6 << 0x38) >> 0x38) == 1) {
                    var_a3 = 3;
                    goto block_183;
                }
                var_a2_2 = 0;
                var_a1_2 = var_s4;
loop_178:
                if (var_a1_2 < 4) {
                    if (arg0 == NULL) {
                        var_a4_5 = NULL;
                    } else if (var_a1_2 < 0) {
                        var_a4_5 = NULL;
                    } else if (var_a1_2 < 4) {
                        var_a4_5 = arg0 + (var_a1_2 * 0x34) + 0x209;
                    } else {
                        var_a4_5 = NULL;
                    }
                    if (var_a4_5 != NULL) {
                        var_a4_6 = M2C_FIELD(var_a4_5, s8 *, 0x31);
                    } else {
                        var_a4_6 = 3;
                    }
                    if (temp_v1 == ((s64) ((s64) var_a4_6 << 0x38) >> 0x38)) {
                        if (arg0 == NULL) {
                            var_a4_7 = NULL;
                        } else if (var_a1_2 < 0) {
                            var_a4_7 = NULL;
                        } else if (var_a1_2 < 4) {
                            var_a4_7 = arg0 + (var_a1_2 * 0x34) + 0x209;
                        } else {
                            var_a4_7 = NULL;
                        }
                        if (var_a4_7 != NULL) {
                            var_a4_8 = M2C_FIELD(var_a4_7, s8 *, 0x32);
                        } else {
                            var_a4_8 = 0;
                        }
                        if (((s64) ((s64) var_a4_8 << 0x38) >> 0x38) == 1) {
                            var_a2_2 = 1;
                        }
                    }
                    var_a1_2 += 1;
                    goto loop_178;
                }
                if (var_a2_2 != 1) {
                    var_s3 += 1;
                } else {
                    var_a3 -= 1;
block_183:
                    var_s3 += 1;
                }
            } else {
                temp_v1_2 = (s64) (var_s7 << 0x38) >> 0x38;
                if (temp_v1_2 != 0) {
                    var_a3 = 3 - var_s2;
                    if (((s64) (var_s6 << 0x38) >> 0x38) == 1) {
                        var_a3 = 3;
                        goto block_139;
                    }
                    var_a2_3 = 0;
                    var_a1_3 = var_s4;
loop_136:
                    if (var_a1_3 < 4) {
                        if (arg0 == NULL) {
                            var_a4_9 = NULL;
                        } else if (var_a1_3 < 0) {
                            var_a4_9 = NULL;
                        } else if (var_a1_3 < 4) {
                            var_a4_9 = arg0 + (var_a1_3 * 0x34) + 0x209;
                        } else {
                            var_a4_9 = NULL;
                        }
                        if (var_a4_9 != NULL) {
                            var_a4_10 = M2C_FIELD(var_a4_9, s8 *, 0x31);
                        } else {
                            var_a4_10 = 3;
                        }
                        if (temp_v1_2 == ((s64) ((s64) var_a4_10 << 0x38) >> 0x38)) {
                            if (arg0 == NULL) {
                                var_a4_11 = NULL;
                            } else if (var_a1_3 < 0) {
                                var_a4_11 = NULL;
                            } else if (var_a1_3 < 4) {
                                var_a4_11 = arg0 + (var_a1_3 * 0x34) + 0x209;
                            } else {
                                var_a4_11 = NULL;
                            }
                            if (var_a4_11 != NULL) {
                                var_a4_12 = M2C_FIELD(var_a4_11, s8 *, 0x32);
                            } else {
                                var_a4_12 = 0;
                            }
                            if (((s64) ((s64) var_a4_12 << 0x38) >> 0x38) == 1) {
                                var_a2_3 = 1;
                            }
                        }
                        var_a1_3 += 1;
                        goto loop_136;
                    }
                    if (var_a2_3 == 1) {
                        var_a3 -= 1;
block_139:
                        var_s2 += 1;
                    } else {
block_222:
                        var_s2 += 1;
                    }
                } else {
                    var_a3 = var_s3;
                    if (((s64) (var_s6 << 0x38) >> 0x38) == 1) {
                        var_a3 = 0;
                        goto block_100;
                    }
                    var_a1_4 = 0;
                    var_a2_4 = var_s4;
loop_95:
                    if (var_a2_4 < 4) {
                        if (arg0 == NULL) {
                            var_a4_13 = NULL;
                        } else if (var_a2_4 < 0) {
                            var_a4_13 = NULL;
                        } else if (var_a2_4 < 4) {
                            var_a4_13 = arg0 + (var_a2_4 * 0x34) + 0x209;
                        } else {
                            var_a4_13 = NULL;
                        }
                        if (var_a4_13 != NULL) {
                            var_a4_14 = M2C_FIELD(var_a4_13, s8 *, 0x31);
                        } else {
                            var_a4_14 = 3;
                        }
                        if (temp_v1_2 == ((s64) ((s64) var_a4_14 << 0x38) >> 0x38)) {
                            if (arg0 == NULL) {
                                var_a4_15 = NULL;
                            } else if (var_a2_4 < 0) {
                                var_a4_15 = NULL;
                            } else if (var_a2_4 < 4) {
                                var_a4_15 = arg0 + (var_a2_4 * 0x34) + 0x209;
                            } else {
                                var_a4_15 = NULL;
                            }
                            if (var_a4_15 != NULL) {
                                var_a4_16 = M2C_FIELD(var_a4_15, s8 *, 0x32);
                            } else {
                                var_a4_16 = 0;
                            }
                            if (((s64) ((s64) var_a4_16 << 0x38) >> 0x38) == 1) {
                                var_a1_4 = 1;
                            }
                        }
                        var_a2_4 += 1;
                        goto loop_95;
                    }
                    if (var_a1_4 != 1) {
                        var_s3 += 1;
                    } else {
                        var_a3 += 1;
block_100:
                        var_s3 += 1;
                    }
                }
            }
            if (arg0 == NULL) {
                var_a0 = NULL;
            } else if (var_s4 < 0) {
                var_a0 = NULL;
            } else if (var_s4 < 4) {
                var_a0 = arg0 + (var_s4 * 0x74) + 4;
            } else {
                var_a0 = NULL;
            }
            if (var_a0 != NULL) {
                temp_v1_3 = arg0 + (var_a3 * 8);
                if ((temp_v1_3 + 0x1D4) != NULL) {
                    M2C_FIELD(var_a0, M2C_UNK32 *, 0x18) = (M2C_UNK32) M2C_FIELD(temp_v1_3, M2C_UNK32 *, 0x1D4);
                    M2C_FIELD(var_a0, M2C_UNK32 *, 0x1C) = (M2C_UNK32) M2C_FIELD(temp_v1_3, M2C_UNK32 *, 0x1D8);
                } else {
                    M2C_FIELD(var_a0, M2C_UNK32 *, 0x18) = 0;
                    M2C_FIELD(var_a0, M2C_UNK32 *, 0x1C) = 0;
                }
                M2C_FIELD(var_a0, s8 *, 0x25) = 1;
            }
            if (arg0 == NULL) {
                var_v1_5 = NULL;
            } else if (var_s4 < 0) {
                var_v1_5 = NULL;
            } else if (var_s4 < 4) {
                var_v1_5 = arg0 + (var_s4 * 0x74) + 4;
            } else {
                var_v1_5 = NULL;
            }
            if (var_v1_5 != NULL) {
                M2C_FIELD(var_v1_5, f32 *, 0x20) = (f32) M2C_FIELD((arg0 + (var_a3 * 4)), f32 *, 0x1F4);
                M2C_FIELD(var_v1_5, s8 *, 0x25) = 1;
            }
        }
        if (arg0 == NULL) {
            var_s0 = NULL;
        } else if (var_s4 < 0) {
            var_s0 = NULL;
        } else if (var_s4 < 4) {
            var_s0 = arg0 + (var_s4 * 0x74) + 4;
        } else {
            var_s0 = NULL;
        }
        if (var_s0 != NULL) {
            func_001C48E8(var_s0 + 0x40, 0, 0x31);
            M2C_FIELD(var_s0, s8 *, 0x25) = 1;
            if (var_s1 == NULL) {
                func_001C8590(var_s0 + 0x40, ((void *)D_00888400), 1);
            } else if (func_001C80F0(var_s1) != 0) {
                func_001C8590(var_s0 + 0x40, var_s1, 0x30);
            } else {
                func_001C8590(var_s0 + 0x40, ((void *)D_00888400), 1);
            }
            M2C_FIELD(var_s0, s8 *, 0x70) = 0;
        }
        if (arg0 == NULL) {
            var_v1_6 = NULL;
        } else if (var_s4 < 0) {
            var_v1_6 = NULL;
        } else if (var_s4 < 4) {
            var_v1_6 = arg0 + (var_s4 * 0x74) + 4;
        } else {
            var_v1_6 = NULL;
        }
        if (var_v1_6 != NULL) {
            M2C_FIELD(var_v1_6, s8 *, 0x28) = (s8) var_s7;
            M2C_FIELD(var_v1_6, s8 *, 0x25) = 1;
        }
        if (arg0 == NULL) {
            var_v1_7 = NULL;
        } else if (var_s4 < 0) {
            var_v1_7 = NULL;
        } else if (var_s4 < 4) {
            var_v1_7 = arg0 + (var_s4 * 0x74) + 4;
        } else {
            var_v1_7 = NULL;
        }
        if (var_v1_7 != NULL) {
            M2C_FIELD(var_v1_7, s8 *, 0x29) = (s8) var_s6;
            M2C_FIELD(var_v1_7, s8 *, 0x25) = 1;
        }
        var_s4 += 1;
    } while (var_s4 < 4);
    return 1;
}
