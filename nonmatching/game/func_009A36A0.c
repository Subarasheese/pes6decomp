/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_009B4440(void);
extern s32 func_00B29390(void);
extern void func_00278400(void);
extern u8 func_00BF6280(void);
extern void func_009B4450(u32);
M2C_UNK func_002562B0(M2C_UNK);                     /* extern */
s32 func_00997C30(M2C_UNK *);                       /* extern */
M2C_UNK func_0099B600();                            /* extern */
s32 func_009A3580(void *, s32, M2C_UNK);            /* extern */
s32 func_009A3EE0(void *, s32, s32, s32);           /* extern */
s32 func_009B4860();                                /* extern */
M2C_UNK func_009B5820();                            /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_00B26FA0();                            /* extern */
s32 func_00B2A3B0();                                /* extern */
M2C_UNK func_00B2A3E0(M2C_UNK);                     /* extern */
extern char D_0058E7F0[];
extern char D_00591DB4[];
extern char D_00591DB5[];
extern char D_00CB62B0[];
extern char D_00CB62BC[];

void func_009A36A0(void *arg0) {
    M2C_UNK *var_s3_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 var_a4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    u32 temp_a0_3;
    u32 temp_a1;
    u32 temp_s3;
    u32 temp_v1_3;
    u32 temp_v1_5;
    u32 var_a3;
    void *temp_s0;
    void *temp_s0_2;
    void *var_a2;

    var_s4 = 0;
    var_s3 = 0;
    var_s2 = 0;
    var_s1 = 0;
    temp_s0 = arg0 + 8;
    if (M2C_FIELD(arg0, s32 *, 0x24) == 0) {
        temp_a1 = M2C_FIELD(temp_s0, u32 *, 4);
        var_a4 = 0;
        var_a3 = 0;
        if (temp_a1 != 0) {
            var_a2 = M2C_FIELD(arg0, void **, 8);
loop_3:
            if (M2C_FIELD(var_a2, s32 *, 4) == 0) {
                var_a3 += 1;
                var_a2 += 0x10DA0;
                if (var_a3 < temp_a1) {
                    goto loop_3;
                }
            } else {
                var_a4 = 1;
            }
        }
        if ((var_a4 != 0) && (((((*(s32 *)D_00CB62B0) & 1) == 1) && (func_00B29390() == 1) && (func_009B4860() != 0) && ((*(s8 *)D_00591DB4) != 0) && ((*(s8 *)D_00591DB5) == 0)) || (func_00B2A3B0() != 0))) {
            if (func_00B2A3B0() == 0) {
                var_s1 = 1;
            }
            func_00B2A3E0(0);
            var_s3 = 1;
            (*(s8 *)D_00591DB4) = 0;
        } else {
            goto block_18;
        }
    } else {
block_18:
        temp_a1_2 = M2C_FIELD(temp_s0, s32 *, 0x1C);
        if (temp_a1_2 == 0) {
            goto block_19;
        }
        if ((((*(s32 *)D_00CB62BC) & 0x20) == 0x20) || (((*(s32 *)D_00CB62B0) & 0x800) == 0x800)) {
            temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x18);
            M2C_FIELD(temp_s0, s32 *, 0x18) = (s32) (temp_a0 + 1);
            temp_a1_3 = M2C_FIELD(arg0, s32 *, 0x20);
            if (temp_a1_3 < 0) {
                if ((M2C_FIELD(arg0, s32 *, 0x1C) + temp_a1_3) < 0) {
                    do {
                        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + M2C_FIELD(arg0, u32 *, 0xC));
                    } while ((M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x20)) < 0);
                }
            } else if ((u32) (M2C_FIELD(arg0, s32 *, 0x1C) + temp_a1_3) >= (u32) M2C_FIELD(arg0, u32 *, 0xC)) {
                do {
                    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, u32 *, 0xC));
                } while ((u32) (M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x20)) >= (u32) M2C_FIELD(arg0, u32 *, 0xC));
            }
            temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x18);
            if ((M2C_FIELD((M2C_FIELD(arg0, void **, 8) + (M2C_FIELD(temp_s0, u32 *, 0x14) * 0x10DA0) + (temp_v1 * 0x10DA0)), s32 *, 4) != 0) && (temp_v1 != 0) && (temp_v1 != M2C_FIELD(temp_s0, u32 *, 4))) {
                var_s4 = 1;
            }
            if (var_s4 == 0) {
                M2C_FIELD(temp_s0, s32 *, 0x18) = temp_a0;
            }
        } else {
block_19:
            if ((temp_a1_2 != 0) && ((((*(s32 *)D_00CB62BC) & 0x80) == 0x80) || (((*(s32 *)D_00CB62B0) & 0x400) == 0x400))) {
                temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x18);
                M2C_FIELD(temp_s0, s32 *, 0x18) = (s32) (temp_a0_2 - 1);
                temp_a1_4 = M2C_FIELD(arg0, s32 *, 0x20);
                if (temp_a1_4 < 0) {
                    if ((M2C_FIELD(arg0, s32 *, 0x1C) + temp_a1_4) < 0) {
                        do {
                            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + M2C_FIELD(arg0, u32 *, 0xC));
                        } while ((M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x20)) < 0);
                    }
                } else if ((u32) (M2C_FIELD(arg0, s32 *, 0x1C) + temp_a1_4) >= (u32) M2C_FIELD(arg0, u32 *, 0xC)) {
                    do {
                        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, u32 *, 0xC));
                    } while ((u32) (M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x20)) >= (u32) M2C_FIELD(arg0, u32 *, 0xC));
                }
                temp_v1_2 = M2C_FIELD(temp_s0, s32 *, 0x18);
                if ((M2C_FIELD((M2C_FIELD(arg0, void **, 8) + (M2C_FIELD(temp_s0, u32 *, 0x14) * 0x10DA0) + (temp_v1_2 * 0x10DA0)), s32 *, 4) != 0) && (temp_v1_2 != -1) && (temp_v1_2 != (M2C_FIELD(temp_s0, u32 *, 4) - 1))) {
                    var_s4 = 1;
                }
                if (var_s4 == 0) {
                    M2C_FIELD(temp_s0, s32 *, 0x18) = temp_a0_2;
                }
            }
        }
    }
    if ((var_s4 == 0) && (var_s3 == 0)) {
        if (M2C_FIELD(temp_s0, s32 *, 0x1C) != 0) {
            if ((((*(s32 *)D_00CB62BC) & 1) != 1) && (((*(s32 *)D_00CB62BC) & 0x2000) != 0x2000) && (((*(s32 *)D_00CB62BC) & 0x4000) != 0x4000) && (((*(s32 *)D_00CB62BC) & 0x8000) != 0x8000)) {
                if (((*(s32 *)D_00CB62BC) & 0x1000) == 0x1000) {
                    goto block_101;
                }
            } else {
block_101:
                M2C_FIELD(temp_s0, s32 *, 0x1C) = 0;
                var_s1 = 1;
                temp_s3 = func_009B4440() & 0xFF;
                func_009B5820();
                M2C_FIELD(temp_s0, u32 *, 0x14) = (u32) M2C_FIELD(temp_s0, u32 *, 0x10);
                temp_v1_3 = M2C_FIELD(temp_s0, u32 *, 4);
                M2C_FIELD(((((s32) (M2C_FIELD(temp_s0, u32 *, 0x14) + (temp_v1_3 - 1)) % (s32) temp_v1_3) * 0x10DA0) + M2C_FIELD(arg0, void **, 8)), s32 *, 4) = 1;
                func_009B4450(temp_s3);
                M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
                if ((func_009E1C90(1) & 0xFF) != 0xC) {
                    goto block_102;
                }
                if (func_00BF6280() == 0) {
                    (*(s8 *)D_00591DB4) = 0;
                } else {
block_102:
                    (*(s8 *)D_00591DB4) = 1;
                }
                var_s4_2 = 0;
                var_s3_2 = ((void *)D_0058E7F0);
                do {
                    if (func_00997C30(var_s3_2) != 0) {
                        func_00278400();
                        func_0099B600();
                    }
                    var_s4_2 += 1;
                    var_s3_2 += 0x240;
                } while (var_s4_2 < 0x16);
                M2C_FIELD(temp_s0, s32 *, 0x54) = 0;
            }
        }
    } else {
        if (var_s3 != 0) {
            M2C_FIELD(temp_s0, s32 *, 0x2C) = (s32) M2C_FIELD(temp_s0, s32 *, 0x28);
            func_00B26FA0();
            M2C_FIELD(temp_s0, u32 *, 0x14) = (u32) (M2C_FIELD(temp_s0, u32 *, 0x14) + (M2C_FIELD(temp_s0, u32 *, 4) - 1));
            M2C_FIELD(temp_s0, u32 *, 0x14) = (u32) ((u32) M2C_FIELD(temp_s0, u32 *, 0x14) % (u32) M2C_FIELD(temp_s0, u32 *, 4));
            M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
            temp_a1_5 = M2C_FIELD(temp_s0, s32 *, 0x18);
            if (temp_a1_5 < 0) {
                if ((M2C_FIELD(temp_s0, u32 *, 0x14) + temp_a1_5) < 0) {
                    do {
                        M2C_FIELD(temp_s0, s32 *, 0x18) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x18) + M2C_FIELD(temp_s0, u32 *, 4));
                    } while ((M2C_FIELD(temp_s0, u32 *, 0x14) + M2C_FIELD(temp_s0, s32 *, 0x18)) < 0);
                }
            } else if ((u32) (M2C_FIELD(temp_s0, u32 *, 0x14) + temp_a1_5) >= (u32) M2C_FIELD(temp_s0, u32 *, 4)) {
                do {
                    M2C_FIELD(temp_s0, s32 *, 0x18) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x18) - M2C_FIELD(temp_s0, u32 *, 4));
                } while ((u32) (M2C_FIELD(temp_s0, u32 *, 0x14) + M2C_FIELD(temp_s0, s32 *, 0x18)) >= (u32) M2C_FIELD(temp_s0, u32 *, 4));
            }
            M2C_FIELD(temp_s0, s32 *, 0x18) = (s32) (func_009A3580(temp_s0, M2C_FIELD(temp_s0, u32 *, 0x14) + M2C_FIELD(temp_s0, s32 *, 0x18), 1) - M2C_FIELD(temp_s0, u32 *, 0x14));
            temp_v1_4 = M2C_FIELD(temp_s0, s32 *, 0x18);
            if (temp_v1_4 < 0) {
                if ((M2C_FIELD(temp_s0, u32 *, 0x14) + temp_v1_4) < 0) {
                    do {
                        M2C_FIELD(temp_s0, s32 *, 0x18) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x18) + M2C_FIELD(temp_s0, u32 *, 4));
                    } while ((M2C_FIELD(temp_s0, u32 *, 0x14) + M2C_FIELD(temp_s0, s32 *, 0x18)) < 0);
                }
            } else if ((u32) (M2C_FIELD(temp_s0, u32 *, 0x14) + temp_v1_4) >= (u32) M2C_FIELD(temp_s0, u32 *, 4)) {
                do {
                    M2C_FIELD(temp_s0, s32 *, 0x18) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x18) - M2C_FIELD(temp_s0, u32 *, 4));
                } while ((u32) (M2C_FIELD(temp_s0, u32 *, 0x14) + M2C_FIELD(temp_s0, s32 *, 0x18)) >= (u32) M2C_FIELD(temp_s0, u32 *, 4));
            }
        } else {
            var_s2 = 1;
        }
        M2C_FIELD(temp_s0, s32 *, 0x1C) = 1;
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_a3 >= 0) {
            if ((u32) (M2C_FIELD(arg0, s32 *, 0x1C) + temp_a3) >= (u32) M2C_FIELD(arg0, u32 *, 0xC)) {
                do {
                    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, u32 *, 0xC));
                } while ((u32) (M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x20)) >= (u32) M2C_FIELD(arg0, u32 *, 0xC));
            }
        } else if ((M2C_FIELD(arg0, s32 *, 0x1C) + temp_a3) < 0) {
            do {
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + M2C_FIELD(arg0, u32 *, 0xC));
            } while ((M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x20)) < 0);
        }
        temp_a3_2 = M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x20);
        temp_s0_2 = M2C_FIELD(arg0, void **, 8) + (temp_a3_2 * 0x10DA0);
        if (func_009A3EE0(temp_s0_2, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 0x70), temp_a3_2) != 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(temp_s0_2, s32 *, 8);
            M2C_FIELD(arg0, u32 *, 0x18) = (u32) (M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x20) + 1);
            temp_a0_3 = M2C_FIELD(arg0, u32 *, 0xC);
            temp_v1_5 = M2C_FIELD(arg0, u32 *, 0x18);
            if (temp_v1_5 >= temp_a0_3) {
                M2C_FIELD(arg0, u32 *, 0x18) = (u32) (temp_v1_5 - temp_a0_3);
            }
            M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        }
    }
    if (var_s2 != 0) {
        func_002562B0(5);
    }
    if (var_s1 != 0) {
        func_002562B0(0);
    }
}
