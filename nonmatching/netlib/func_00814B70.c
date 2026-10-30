/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
M2C_UNK func_0081EFE0(M2C_UNK *);                   /* extern */
extern char D_008A35F0[];

s32 func_00814B70(s32 arg0) {
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s8 var_v0;
    s8 var_v0_10;
    s8 var_v0_11;
    s8 var_v0_2;
    s8 var_v0_3;
    s8 var_v0_6;
    s8 var_v0_7;
    s8 var_v0_8;
    s8 var_v0_9;

    if (func_0082C2A0() == 0) {
        goto block_115;
    }
    if (((void *)D_008A35F0) == NULL) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 4) {
        if (M2C_FIELD(((void *)D_008A35F0), s32 *, 8) == 4) {
            if (M2C_FIELD((arg0 + ((void *)D_008A35F0)), s8 *, 0x418) != 1) {
                return 0;
            }
            if (((void *)D_008A35F0) != NULL) {
                var_v1 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
            } else {
                var_v1 = 9;
            }
            if (var_v1 != 2) {
                return 0;
            }
            if (((void *)D_008A35F0) == NULL) {
                goto block_46;
            }
            if (((void *)D_008A35F0) != NULL) {
                var_v1_2 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
            } else {
                var_v1_2 = 9;
            }
            if (var_v1_2 != 8) {
                goto block_46;
            }
            if (((void *)D_008A35F0) != NULL) {
                var_v0 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41E);
            } else {
                var_v0 = 0;
            }
            if (((s64) ((s64) var_v0 << 0x38) >> 0x38) != 0) {
                if (((void *)D_008A35F0) != NULL) {
                    var_v0_2 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41F);
                } else {
                    var_v0_2 = 0;
                }
                if (((s64) ((s64) var_v0_2 << 0x38) >> 0x38) != 1) {
                    if (((void *)D_008A35F0) != NULL) {
                        var_v0_3 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x420);
                    } else {
                        var_v0_3 = 0;
                    }
                    var_v1_3 = 1;
                    if (((s64) ((s64) var_v0_3 << 0x38) >> 0x38) == 1) {
                        goto block_46;
                    }
                } else {
                    goto block_46;
                }
            } else {
block_46:
                var_v1_3 = 0;
            }
            if (var_v1_3 == 1) {
                return 0;
            }
            if (((void *)D_008A35F0) == NULL) {
                goto block_91;
            }
            if (((void *)D_008A35F0) != NULL) {
                var_v0_4 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
            } else {
                var_v0_4 = 9;
            }
            if (var_v0_4 != 0) {
                if (((void *)D_008A35F0) != NULL) {
                    var_v1_4 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
                } else {
                    var_v1_4 = 9;
                }
                if (var_v1_4 != 1) {
                    if (((void *)D_008A35F0) != NULL) {
                        var_v1_5 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
                    } else {
                        var_v1_5 = 9;
                    }
                    if (var_v1_5 != 8) {
                        var_v0_5 = 1;
                    } else {
                        goto block_68;
                    }
                } else {
                    goto block_68;
                }
            } else {
block_68:
                if (((void *)D_008A35F0) != NULL) {
                    var_v1_6 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
                } else {
                    var_v1_6 = 9;
                }
                if (var_v1_6 == 8) {
                    if (((void *)D_008A35F0) != NULL) {
                        var_v0_6 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41E);
                    } else {
                        var_v0_6 = 0;
                    }
                    if (((s64) ((s64) var_v0_6 << 0x38) >> 0x38) == 0) {
                        var_v0_5 = 1;
                    } else {
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
                            if (((s64) ((s64) var_v0_8 << 0x38) >> 0x38) == 1) {
                                goto block_90;
                            }
                            goto block_91;
                        }
block_90:
                        var_v0_5 = 1;
                    }
                } else {
block_91:
                    var_v0_5 = 0;
                }
            }
            if (var_v0_5 == 0) {
                return 0;
            }
            if (((void *)D_008A35F0) != NULL) {
                var_v0_9 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41E);
            } else {
                var_v0_9 = 0;
            }
            if (((s64) ((s64) var_v0_9 << 0x38) >> 0x38) == 1) {
                return 0;
            }
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
                if (((s64) ((s64) var_v0_11 << 0x38) >> 0x38) != 1) {
                    M2C_FIELD(((void *)D_008A35F0), s32 *, 8) = arg0;
                    func_0081EFE0(((void *)D_008A35F0));
block_115:
                    return 1;
                }
                goto block_113;
            }
block_113:
            return 0;
        }
        return 0;
    }
    return 0;
}
