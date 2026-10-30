/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern s32 func_00207D10(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00208610(void *);                      /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B9E5D0(void *);                      /* extern */
extern char D_00591BE4[];
extern char D_00C9E2F0[];
extern char D_00C9E2F4[];
extern char D_00C9E2F8[];
extern char D_00C9E2FC[];
extern char D_00C9E300[];
extern char D_00C9E304[];
extern char D_00C9E308[];
extern char D_00C9E30C[];
extern char D_00CBCD70[];
extern char D_00CBCD72[];
extern char D_00CBCD81[];
extern char D_00CBCD83[];
extern char D_00CBCD84[];
extern char D_00CBCD8D[];

void func_00B92DF0(void *arg0) {
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    f32 var_f0;
    f32 var_f0_10;
    f32 var_f0_11;
    f32 var_f0_12;
    f32 var_f0_13;
    f32 var_f0_14;
    f32 var_f0_15;
    f32 var_f0_16;
    f32 var_f0_17;
    f32 var_f0_18;
    f32 var_f0_19;
    f32 var_f0_20;
    f32 var_f0_21;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;
    f32 var_f0_7;
    f32 var_f0_8;
    f32 var_f0_9;
    void **temp_s1;
    void **temp_v0_2;
    void **temp_v0_3;
    void **temp_v0_4;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *temp_a1;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *var_v0;

    sp68 = (*(s32 *)D_00C9E2F0);
    sp6C = (*(s32 *)D_00C9E2F4);
    sp60 = (*(s32 *)D_00C9E2F8);
    sp64 = (*(s32 *)D_00C9E2FC);
    sp58 = (*(s32 *)D_00C9E300);
    sp5C = (*(s32 *)D_00C9E304);
    sp50 = (*(s32 *)D_00C9E308);
    sp54 = (*(s32 *)D_00C9E30C);
    func_00B2ACF0();
    switch ((*(u8 *)D_00CBCD81)) {                           /* irregular */
    case 0x1:
        if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), sp68 - 1) != 0) {
            temp_v0 = M2C_FIELD(arg0, void **, 0);
            if (M2C_FIELD(temp_v0, u8 *, 0x4E) == 0) {
                M2C_FIELD(temp_v0, u8 *, 0x4E) = 1U;
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x52) = 1;
            }
        }
        if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), sp6C - 1) != 0) {
            temp_a0 = M2C_FIELD(arg0, void **, 0);
            if (M2C_FIELD(temp_a0, u8 *, 0x4E) != 0) {
                if (sp68 < 0) {
                    var_f0 = 2.0f * (f32) (((u32) sp68 >> 1) | (sp68 & 1));
                } else {
                    var_f0 = (f32) sp68;
                }
                M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), f32 *, 0x38) = var_f0;
                temp_a0_2 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_a0_2, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_a0_2, u8 *, 0x4E) - 1);
                if (((s32) (*(u8 *)D_00CBCD8D) > 0) && ((u32) M2C_FIELD(*func_00B2A420((*(u8 *)D_00CBCD83)), u32 *, 0x34) < (u8) (*(u8 *)D_00591BE4))) {
                    temp_v1 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_v1, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_v1, u8 *, 0x4E) + 1);
                }
            }
        }
        if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), sp6C) != 0) {
            temp_a0_3 = M2C_FIELD(arg0, void **, 0);
            if (M2C_FIELD(temp_a0_3, u8 *, 0x4E) == 0) {
                if (sp50 < 0) {
                    var_f0_2 = 2.0f * (f32) (((u32) sp50 >> 1) | (sp50 & 1));
                } else {
                    var_f0_2 = (f32) sp50;
                }
                M2C_FIELD(M2C_FIELD(temp_a0_3, void **, 4), f32 *, 0x38) = var_f0_2;
                func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
                (*(u8 *)D_00CBCD81) = 0xFF;
            }
        }
    default:
block_114:
        if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
            func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
            func_00B9E5D0(arg0);
        }
        return;
    case 0x2:
        temp_v0_2 = func_00B2A420((*(u8 *)D_00CBCD83));
        if (func_00207D80(M2C_FIELD(*temp_v0_2, void **, 4), 0) != 0) {
            if (sp6C < 0) {
                var_f0_3 = 2.0f * (f32) (((u32) sp6C >> 1) | (sp6C & 1));
            } else {
                var_f0_3 = (f32) sp6C;
            }
            M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), f32 *, 0x38) = var_f0_3;
            func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
        }
        if (func_00207D80(M2C_FIELD(*temp_v0_2, void **, 4), (s32) (*(u16 *)D_00CBCD70)) != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x4E) = 1U;
        }
        if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), sp64 - 1) != 0) {
            temp_a0_4 = M2C_FIELD(arg0, void **, 0);
            if (M2C_FIELD(temp_a0_4, u8 *, 0x4E) != 0) {
                if (sp60 < 0) {
                    var_f0_4 = 2.0f * (f32) (((u32) sp60 >> 1) | (sp60 & 1));
                } else {
                    var_f0_4 = (f32) sp60;
                }
                M2C_FIELD(M2C_FIELD(temp_a0_4, void **, 4), f32 *, 0x38) = var_f0_4;
                temp_v1_2 = M2C_FIELD(*temp_v0_2, void **, 4);
                if (sp58 >= 0) {
                    var_f0_5 = (f32) sp58;
                } else {
                    var_f0_5 = 2.0f * (f32) (((u32) sp58 >> 1) | (sp58 & 1));
                }
                if (!(M2C_FIELD(temp_v1_2, f32 *, 0x38) < var_f0_5)) {
                    if (sp58 < 0) {
                        var_f0_6 = 2.0f * (f32) (((u32) sp58 >> 1) | (sp58 & 1));
                    } else {
                        var_f0_6 = (f32) sp58;
                    }
                    M2C_FIELD(temp_v1_2, f32 *, 0x38) = var_f0_6;
                    func_00207390(M2C_FIELD(*temp_v0_2, void **, 4), 0xA);
                } else {
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x4E) = 2U;
                }
                temp_a0_5 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_a0_5, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_a0_5, u8 *, 0x4E) - 1);
                if (((s32) (*(u8 *)D_00CBCD8D) >= 2) && ((u32) M2C_FIELD(*func_00B2A420((*(u8 *)D_00CBCD84)), u32 *, 0x34) < (u8) (*(u8 *)D_00591BE4))) {
                    temp_v1_3 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_v1_3, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_v1_3, u8 *, 0x4E) + 1);
                }
            }
        }
        if (func_00207D80(M2C_FIELD(*temp_v0_2, void **, 4), sp5C) != 0) {
            temp_a0_6 = M2C_FIELD(arg0, void **, 0);
            if (M2C_FIELD(temp_a0_6, u8 *, 0x4E) == 0) {
                if (sp60 < 0) {
                    var_f0_7 = 2.0f * (f32) (((u32) sp60 >> 1) | (sp60 & 1));
                } else {
                    var_f0_7 = (f32) sp60;
                }
                M2C_FIELD(M2C_FIELD(temp_a0_6, void **, 4), f32 *, 0x38) = var_f0_7;
                if (sp54 >= 0) {
                    var_f0_8 = (f32) sp54;
                } else {
                    var_f0_8 = 2.0f * (f32) (((u32) sp54 >> 1) | (sp54 & 1));
                }
                M2C_FIELD(M2C_FIELD(*temp_v0_2, void **, 4), f32 *, 0x38) = var_f0_8;
                func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
                func_00207390(M2C_FIELD(*temp_v0_2, void **, 4), 0xA);
                (*(u8 *)D_00CBCD81) = 0xFF;
                return;
            }
        }
        if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), sp64) != 0) {
            temp_a0_7 = M2C_FIELD(arg0, void **, 0);
            if (M2C_FIELD(temp_a0_7, u8 *, 0x4E) != 0) {
                if (sp60 < 0) {
                    var_f0_9 = 2.0f * (f32) (((u32) sp60 >> 1) | (sp60 & 1));
                } else {
                    var_f0_9 = (f32) sp60;
                }
                M2C_FIELD(M2C_FIELD(temp_a0_7, void **, 4), f32 *, 0x38) = var_f0_9;
            }
        }
        if (func_00207D80(M2C_FIELD(*temp_v0_2, void **, 4), sp5C) != 0) {
            if (sp58 < 0) {
                var_f0_10 = 2.0f * (f32) (((u32) sp58 >> 1) | (sp58 & 1));
            } else {
                var_f0_10 = (f32) sp58;
            }
            var_v0 = M2C_FIELD(*temp_v0_2, void **, 4);
block_113:
            M2C_FIELD(var_v0, f32 *, 0x38) = var_f0_10;
        }
        goto block_114;
    case 0x3:
        temp_s1 = func_00B2A420((*(u8 *)D_00CBCD83));
        temp_v0_3 = func_00B2A420((*(u8 *)D_00CBCD84));
        temp_a1 = M2C_FIELD(arg0, void **, 0);
        if (sp60 >= 0) {
            var_f0_11 = (f32) sp60;
        } else {
            var_f0_11 = 2.0f * (f32) (((u32) sp60 >> 1) | (sp60 & 1));
        }
        if (!(M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), f32 *, 0x38) < var_f0_11)) {
            if (sp58 >= 0) {
                var_f0_12 = (f32) sp58;
            } else {
                var_f0_12 = 2.0f * (f32) (((u32) sp58 >> 1) | (sp58 & 1));
            }
            if (!(M2C_FIELD(M2C_FIELD(*temp_s1, void **, 4), f32 *, 0x38) < var_f0_12)) {
                if ((s32) (*(u16 *)D_00CBCD72) >= 0) {
                    var_f0_13 = (f32) (*(u16 *)D_00CBCD72);
                } else {
                    var_f0_13 = 2.0f * (f32) (((u16) (*(u16 *)D_00CBCD72) >> 1) | ((*(u16 *)D_00CBCD72) & 1));
                }
                if (!(M2C_FIELD(M2C_FIELD(*temp_v0_3, void **, 4), f32 *, 0x38) < var_f0_13)) {
                    M2C_FIELD(temp_a1, u8 *, 0x4E) = 0U;
                } else {
                    goto block_146;
                }
            } else {
                goto block_146;
            }
        } else {
block_146:
            M2C_FIELD(temp_a1, u8 *, 0x4E) = 1U;
        }
        temp_a0_8 = M2C_FIELD(arg0, void **, 0);
        if (M2C_FIELD(temp_a0_8, u8 *, 0x4E) == 0) {
            if (sp64 < 0) {
                var_f0_14 = 2.0f * (f32) (((u32) sp64 >> 1) | (sp64 & 1));
            } else {
                var_f0_14 = (f32) sp64;
            }
            M2C_FIELD(M2C_FIELD(temp_a0_8, void **, 4), f32 *, 0x38) = var_f0_14;
            if (sp5C >= 0) {
                var_f0_15 = (f32) sp5C;
            } else {
                var_f0_15 = 2.0f * (f32) (((u32) sp5C >> 1) | (sp5C & 1));
            }
            M2C_FIELD(M2C_FIELD(*temp_s1, void **, 4), f32 *, 0x38) = var_f0_15;
            func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
            func_00207390(M2C_FIELD(*temp_s1, void **, 4), 0xA);
            (*(u8 *)D_00CBCD81) = 0xFF;
        } else if (func_00207D80(M2C_FIELD(temp_a0_8, void **, 4), sp64 - 1) != 0) {
            temp_a0_9 = M2C_FIELD(arg0, void **, 0);
            if (M2C_FIELD(temp_a0_9, u8 *, 0x4E) != 0) {
                if (sp60 < 0) {
                    var_f0_16 = 2.0f * (f32) (((u32) sp60 >> 1) | (sp60 & 1));
                } else {
                    var_f0_16 = (f32) sp60;
                }
                M2C_FIELD(M2C_FIELD(temp_a0_9, void **, 4), f32 *, 0x38) = var_f0_16;
                temp_v1_4 = M2C_FIELD(*temp_s1, void **, 4);
                if (sp58 >= 0) {
                    var_f0_17 = (f32) sp58;
                } else {
                    var_f0_17 = 2.0f * (f32) (((u32) sp58 >> 1) | (sp58 & 1));
                }
                if (!(M2C_FIELD(temp_v1_4, f32 *, 0x38) < var_f0_17)) {
                    if (sp58 < 0) {
                        var_f0_18 = 2.0f * (f32) (((u32) sp58 >> 1) | (sp58 & 1));
                    } else {
                        var_f0_18 = (f32) sp58;
                    }
                    M2C_FIELD(temp_v1_4, f32 *, 0x38) = var_f0_18;
                    func_00207390(M2C_FIELD(*temp_s1, void **, 4), 0xA);
                } else {
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x4E) = 2U;
                }
                temp_v1_5 = M2C_FIELD(arg0, void **, 0);
                M2C_FIELD(temp_v1_5, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_v1_5, u8 *, 0x4E) - 1);
            }
        }
        goto block_114;
    case 0xFF:
        if ((s32) (*(u8 *)D_00CBCD8D) > 0) {
            temp_v0_4 = func_00B2A420((*(u8 *)D_00CBCD83));
            if (func_00207D80(M2C_FIELD(*temp_v0_4, void **, 4), sp5C - 1) != 0) {
                if (sp60 < 0) {
                    var_f0_19 = 2.0f * (f32) (((u32) sp60 >> 1) | (sp60 & 1));
                } else {
                    var_f0_19 = (f32) sp60;
                }
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), f32 *, 0x38) = var_f0_19;
                if (sp54 >= 0) {
                    var_f0_20 = (f32) sp54;
                } else {
                    var_f0_20 = 2.0f * (f32) (((u32) sp54 >> 1) | (sp54 & 1));
                }
                M2C_FIELD(M2C_FIELD(*temp_v0_4, void **, 4), f32 *, 0x38) = var_f0_20;
                func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
                func_00207390(M2C_FIELD(*temp_v0_4, void **, 4), 0xA);
            }
            if (func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), sp64) != 0) {
                if (!(M2C_FIELD(M2C_FIELD(*temp_v0_4, void **, 4), f32 *, 0x38) <= 392.0f)) {
                    if (sp50 < 0) {
                        var_f0_10 = 2.0f * (f32) (((u32) sp50 >> 1) | (sp50 & 1));
                    } else {
                        var_f0_10 = (f32) sp50;
                    }
                    var_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
                } else {
                    if (sp60 < 0) {
                        var_f0_10 = 2.0f * (f32) (((u32) sp60 >> 1) | (sp60 & 1));
                    } else {
                        var_f0_10 = (f32) sp60;
                    }
                    var_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
                }
                goto block_113;
            }
        } else if (func_00207D80(M2C_FIELD((*(u8 *)D_00CBCD8D), void **, 4), sp6C) != 0) {
            if (sp50 < 0) {
                var_f0_21 = 2.0f * (f32) (((u32) sp50 >> 1) | (sp50 & 1));
            } else {
                var_f0_21 = (f32) sp50;
            }
            M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), f32 *, 0x38) = var_f0_21;
            func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
        }
        goto block_114;
    }
}
