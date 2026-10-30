/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B29C50();                                /* extern */
s32 func_00BF6310();                                /* extern */
u8 func_00BF6BB0();                                 /* extern */
s32 func_00BF6CE0();                                /* extern */
s32 func_00BFB0D0();                                /* extern */
s32 func_00BFB240();                                /* extern */
s32 func_00BFB3B0();                                /* extern */
s32 func_00BFB4C0();                                /* extern */
s32 func_00BFB590();                                /* extern */
s32 func_00C00D60(M2C_UNK);                         /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */
M2C_UNK func_00C01540(s32, u8, u8, M2C_UNK, M2C_UNK); /* extern */
extern char D_00591C09[];
extern char D_00591E19[];
extern char D_00CBCDE2[];
extern char D_00CBCDE3[];

s32 func_00BFB670(s32 arg0) {
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    u8 temp_s0;
    u8 temp_s0_2;
    u8 temp_s0_3;
    u8 temp_s0_4;
    u8 temp_s0_5;
    u8 temp_v0;
    u8 var_s2;
    u8 var_s2_2;
    u8 var_s2_3;
    u8 var_s3_2;

    var_s4 = 0x2E;
    if (((*(u8 *)D_00591C09) == 5) && (func_00B29C50() == 0)) {
        return 0x2E;
    }
    if (func_00C01090(4) == 0) {
        var_s3 = 0;
        if (arg0 == 1) {
            var_s4 = func_00BFB590();
            if (var_s4 != 0x2E) {
                var_s3 = 1;
            }
        }
        if (var_s3 == 0) {
            if (arg0 == 1) {
                var_s4 = func_00BFB4C0();
                if (var_s4 != 0x2E) {
                    var_s3 = 1;
                }
            }
            if (var_s3 == 0) {
                if (arg0 == 1) {
                    var_s4 = func_00BFB3B0();
                    if (var_s4 != 0x2E) {
                        var_s3 = 1;
                    }
                }
                if (var_s3 == 0) {
                    if (arg0 == 1) {
                        var_s4 = func_00BFB240();
                        if (var_s4 != 0x2E) {
                            var_s3 = 1;
                        }
                    }
                    if (var_s3 == 0) {
                        if (arg0 == 1) {
                            var_s4 = func_00BFB0D0();
                            if (var_s4 != 0x2E) {
                                var_s3 = 1;
                            }
                        }
                        if (var_s3 == 0) {
                            if (arg0 == 1) {
                                temp_s0 = (*(u8 *)D_00591E19);
                                var_v0 = func_00C01090(0x10) != 0;
                                if (var_v0 != 0) {
                                    var_v0 = (temp_s0 & 0xFF) == func_00C00D60(0x10);
                                }
                                if (var_v0 == 0) {
                                    temp_s0_2 = (*(u8 *)D_00591E19);
                                    var_v0_2 = func_00C01090(0x11) != 0;
                                    if (var_v0_2 != 0) {
                                        var_v0_2 = (temp_s0_2 & 0xFF) == func_00C00D60(0x11);
                                    }
                                    if (var_v0_2 == 0) {
                                        temp_s0_3 = (*(u8 *)D_00591E19);
                                        var_v0_3 = func_00C01090(0x12) != 0;
                                        if (var_v0_3 != 0) {
                                            var_v0_3 = (temp_s0_3 & 0xFF) == func_00C00D60(0x12);
                                        }
                                        if (var_v0_3 == 0) {
                                            temp_s0_4 = (*(u8 *)D_00591E19);
                                            var_v0_4 = func_00C01090(0x1C) != 0;
                                            if (var_v0_4 != 0) {
                                                var_v0_4 = (temp_s0_4 & 0xFF) == func_00C00D60(0x1C);
                                            }
                                            if (var_v0_4 == 0) {
                                                temp_s0_5 = (*(u8 *)D_00591E19);
                                                var_v0_5 = func_00C01090(0x1D) != 0;
                                                if (var_v0_5 != 0) {
                                                    var_v0_5 = (temp_s0_5 & 0xFF) == func_00C00D60(0x1D);
                                                }
                                                if (var_v0_5 == 0) {
                                                    var_s2 = 0x17;
                                                    var_s4 = 0x2E;
                                                    if (func_00BF6CE0() != 0) {
                                                        var_s4 = 2;
                                                        var_s2 = (*(u8 *)D_00591E19);
                                                    }
                                                    if ((*(u8 *)D_00591C09) != 5) {
                                                        goto block_52;
                                                    }
                                                    if (func_00B29C50() != 0) {
block_52:
                                                        if (var_s4 < 0x2E) {
                                                            func_00C01540(var_s4, var_s2, 0x17U, 0xC, 6);
                                                        }
                                                    }
                                                    if (var_s4 != 0x2E) {
                                                        var_s3 = 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if (var_s3 == 0) {
                                if (arg0 == 1) {
                                    var_s2_2 = 0x17;
                                    var_s4 = 0x2E;
                                    temp_v0 = func_00BF6BB0();
                                    if (temp_v0 != 0) {
                                        var_s2_2 = temp_v0;
                                        var_s4 = 3;
                                    }
                                    if ((*(u8 *)D_00591C09) != 5) {
                                        goto block_61;
                                    }
                                    if (func_00B29C50() != 0) {
block_61:
                                        if (var_s4 < 0x2E) {
                                            func_00C01540(var_s4, var_s2_2, 0x17U, 0xC, 6);
                                        }
                                    }
                                    if (var_s4 != 0x2E) {
                                        var_s3 = 1;
                                    }
                                }
                                if (var_s3 == 0) {
                                    if (arg0 == 1) {
                                        var_s3_2 = 0x17;
                                        var_s4 = 0x2E;
                                        var_s2_3 = 0x17;
                                        if (func_00BF6310() != 0) {
                                            var_s4 = 0x2D;
                                            var_s3_2 = (*(u8 *)D_00CBCDE2);
                                            var_s2_3 = (*(u8 *)D_00CBCDE3);
                                        }
                                        if ((*(u8 *)D_00591C09) != 5) {
                                            goto block_70;
                                        }
                                        if (func_00B29C50() != 0) {
block_70:
                                            if (var_s4 < 0x2E) {
                                                func_00C01540(var_s4, var_s3_2, var_s2_3, 0xC, 6);
                                            }
                                        }
                                        if (var_s4 != 0x2E) {

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return var_s4;
}
