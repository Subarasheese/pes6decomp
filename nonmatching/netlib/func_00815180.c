/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A35F0[];

s32 func_00815180(void) {
    s32 var_a0;
    s32 var_a0_10;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_a0_7;
    s32 var_a0_8;
    s32 var_a0_9;
    s32 var_v1;
    s8 var_v0;
    s8 var_v1_2;
    s8 var_v1_3;
    s8 var_v1_4;
    s8 var_v1_5;
    s8 var_v1_6;

    if (((void *)D_008A35F0) == NULL) {
        goto block_102;
    }
    if (((void *)D_008A35F0) == NULL) {
        goto block_44;
    }
    if (((void *)D_008A35F0) != NULL) {
        var_v1 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
    } else {
        var_v1 = 9;
    }
    if (var_v1 != 0) {
        if (((void *)D_008A35F0) != NULL) {
            var_a0 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
        } else {
            var_a0 = 9;
        }
        if (var_a0 != 1) {
            if (((void *)D_008A35F0) != NULL) {
                var_a0_2 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
            } else {
                var_a0_2 = 9;
            }
            if (var_a0_2 != 8) {
                var_a0_3 = 1;
            } else {
                goto block_21;
            }
        } else {
            goto block_21;
        }
    } else {
block_21:
        if (((void *)D_008A35F0) != NULL) {
            var_a0_4 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
        } else {
            var_a0_4 = 9;
        }
        if (var_a0_4 == 8) {
            if (((void *)D_008A35F0) != NULL) {
                var_v1_2 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41E);
            } else {
                var_v1_2 = 0;
            }
            if (((s64) ((s64) var_v1_2 << 0x38) >> 0x38) == 0) {
                var_a0_3 = 1;
            } else {
                if (((void *)D_008A35F0) != NULL) {
                    var_v1_3 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41F);
                } else {
                    var_v1_3 = 0;
                }
                if (((s64) ((s64) var_v1_3 << 0x38) >> 0x38) != 1) {
                    if (((void *)D_008A35F0) != NULL) {
                        var_v1_4 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x420);
                    } else {
                        var_v1_4 = 0;
                    }
                    if (((s64) ((s64) var_v1_4 << 0x38) >> 0x38) == 1) {
                        goto block_43;
                    }
                    goto block_44;
                }
block_43:
                var_a0_3 = 1;
            }
        } else {
block_44:
            var_a0_3 = 0;
        }
    }
    if (var_a0_3 != 1) {
        goto block_102;
    }
    if (((void *)D_008A35F0) != NULL) {
        var_a0_5 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
    } else {
        var_a0_5 = 9;
    }
    if (var_a0_5 == 3) {
        return 1;
    }
    if (((void *)D_008A35F0) != NULL) {
        var_a0_6 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
    } else {
        var_a0_6 = 9;
    }
    if (var_a0_6 != 4) {
        if (((void *)D_008A35F0) != NULL) {
            var_a0_7 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
        } else {
            var_a0_7 = 9;
        }
        if (var_a0_7 != 5) {
            if (M2C_FIELD(((void *)D_008A35F0), s32 *, 8) != 4) {
                return 1;
            }
            if (((void *)D_008A35F0) != NULL) {
                var_a0_8 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
            } else {
                var_a0_8 = 9;
            }
            if (var_a0_8 != 6) {
                if (((void *)D_008A35F0) != NULL) {
                    var_a0_9 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
                } else {
                    var_a0_9 = 9;
                }
                if (var_a0_9 != 7) {
                    if (((void *)D_008A35F0) != NULL) {
                        var_a0_10 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
                    } else {
                        var_a0_10 = 9;
                    }
                    if (var_a0_10 == 8) {
                        goto block_84;
                    }
                    goto block_102;
                }
                goto block_84;
            }
block_84:
            if (((void *)D_008A35F0) != NULL) {
                var_v1_5 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41E);
            } else {
                var_v1_5 = 0;
            }
            if (((s64) ((s64) var_v1_5 << 0x38) >> 0x38) == 0) {
                return 1;
            }
            if (((void *)D_008A35F0) != NULL) {
                var_v1_6 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41F);
            } else {
                var_v1_6 = 0;
            }
            if (((s64) ((s64) var_v1_6 << 0x38) >> 0x38) != 1) {
                if (((void *)D_008A35F0) != NULL) {
                    var_v0 = M2C_FIELD(((void *)D_008A35F0), s8 *, 0x420);
                } else {
                    var_v0 = 0;
                }
                if (((s64) ((s64) var_v0 << 0x38) >> 0x38) == 1) {
                    goto block_101;
                }
block_102:
                return 0;
            }
block_101:
            return 1;
        }
        goto block_66;
    }
block_66:
    return 1;
}
