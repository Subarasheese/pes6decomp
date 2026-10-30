/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u16 func_009B33F0(void *, void *);                  /* extern */
void **func_00B2A420(u8);                           /* extern */
s32 func_00B5C480(u8);                              /* extern */
s32 func_00BBB990(u16, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */
extern char D_00CBCDE1[];
extern char D_00CBCDE2[];

void func_00B44F30(void *arg0) {
    s16 var_a0_2;
    s32 temp_f0;
    s32 temp_f1;
    s32 temp_v0;
    s32 var_s0;
    s8 var_a0;
    u16 temp_a0;
    u16 temp_a1_2;
    u8 temp_a0_2;
    void **temp_s1;
    void *temp_a0_3;
    void *temp_a1;
    void *temp_a1_3;
    void *temp_a2;

    temp_s1 = func_00B2A420((*(u8 *)D_00CBCDE2));
    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C);
    if (temp_v0 >= 0x800) {
        var_s0 = 0;
    } else if (temp_v0 < 0) {
        var_s0 = 2;
    } else {
        var_s0 = 1;
    }
    if (((*(u8 *)D_00CBCDE1) != 3) && ((*(u8 *)D_00CBCDE1) != 4) && ((*(u8 *)D_00CBCDE1) != 2) && ((func_00B5C480((*(u8 *)D_00CBCDE1)) & 0xFF) != 1)) {
        if (M2C_FIELD(*temp_s1, u8 *, 0x13) != 0) {
            temp_a1 = M2C_FIELD(arg0, void **, 0);
            temp_a0 = M2C_FIELD(temp_a1, u16 *, 0x26);
            if (((s32) temp_a0 >= 0x3001) && ((s32) temp_a0 < 0xC000)) {
                if (((s32) temp_a0 >= 0x5000) && ((s32) temp_a0 < 0xB001)) {
                    switch (var_s0) {               /* switch 2; irregular */
                    case 0:                         /* switch 2 */
                        M2C_FIELD(temp_a1, u16 *, 0x2C) = 0U;
                        var_a0 = 0x3E;
                        goto block_38;
                    case 2:                         /* switch 2 */
                    case 1:                         /* switch 2 */
                        M2C_FIELD(temp_a1, u16 *, 0x2C) = 0U;
                        var_a0 = 0x3B;
                        goto block_38;
                    }
                } else {
                    switch (var_s0) {               /* switch 7; irregular */
                    case 0:                         /* switch 7 */
                        if (((s32) temp_a0 >= 0x3001) && ((s32) temp_a0 < 0x5000)) {
                            M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), s8 *, 0x2D) = 0;
                        } else {
                            M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), s8 *, 0x2D) = 1;
                        }
                        var_a0 = 0x40;
                        goto block_38;
                    case 2:                         /* switch 7 */
                    case 1:                         /* switch 7 */
                        if (((s32) temp_a0 >= 0x3001) && ((s32) temp_a0 < 0x5000)) {
                            M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), s8 *, 0x2D) = 1;
                        } else {
                            M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), s8 *, 0x2D) = 0;
                        }
                        var_a0 = 0x3D;
                        goto block_38;
                    }
                }
            } else {
                switch (var_s0) {                   /* switch 6; irregular */
                case 0:                             /* switch 6 */
                    var_a0 = 0x3F;
                    goto block_38;
                case 2:                             /* switch 6 */
                case 1:                             /* switch 6 */
                    var_a0 = 0x3C;
                    goto block_38;
                }
            }
        } else {
            temp_a2 = M2C_FIELD(arg0, void **, 0);
            temp_a1_2 = M2C_FIELD(temp_a2, u16 *, 0x26);
            if (((s32) temp_a1_2 >= 0x3001) && ((s32) temp_a1_2 < 0xC000)) {
                if (((s32) temp_a1_2 >= 0x5000) && ((s32) temp_a1_2 < 0xB001)) {
                    switch (var_s0) {               /* switch 1; irregular */
                    case 0:                         /* switch 1 */
                        var_a0 = 0x3F;
                        goto block_38;
                    case 2:                         /* switch 1 */
                    case 1:                         /* switch 1 */
                        var_a0 = 0x3C;
                        goto block_38;
                    }
                } else {
                    switch (var_s0) {               /* switch 5; irregular */
                    case 0:                         /* switch 5 */
                        if (((s32) temp_a1_2 >= 0x3001) && ((s32) temp_a1_2 < 0x5000)) {
                            M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), s8 *, 0x2D) = 1;
                        } else {
                            M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), s8 *, 0x2D) = 0;
                        }
                        var_a0 = 0x40;
                        goto block_38;
                    case 2:                         /* switch 5 */
                    case 1:                         /* switch 5 */
                        if (((s32) temp_a1_2 >= 0x3001) && ((s32) temp_a1_2 < 0x5000)) {
                            M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), s8 *, 0x2D) = 0;
                        } else {
                            M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), s8 *, 0x2D) = 1;
                        }
                        var_a0 = 0x3D;
                        goto block_38;
                    }
                }
            } else {
                switch (var_s0) {                   /* switch 4; irregular */
                case 0:                             /* switch 4 */
                    var_a0 = 0x3E;
                    M2C_FIELD(temp_a2, u16 *, 0x2C) = 0x8000U;
block_38:
                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = var_a0;
                    break;
                case 2:                             /* switch 4 */
                case 1:                             /* switch 4 */
                    var_a0 = 0x3B;
                    M2C_FIELD(temp_a2, u16 *, 0x2C) = 0x8000U;
                    goto block_38;
                }
            }
        }
        temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C);
        switch (temp_a0_2) {                        /* switch 3; irregular */
        case 0x4D:                                  /* switch 3 */
        case 0x40:                                  /* switch 3 */
        case 0x3F:                                  /* switch 3 */
        case 0x3E:                                  /* switch 3 */
        case 0x3D:                                  /* switch 3 */
        case 0x3C:                                  /* switch 3 */
        case 0x3B:                                  /* switch 3 */
        case 0x38:                                  /* switch 3 */
        case 0x30:                                  /* switch 3 */
        case 0x19:                                  /* switch 3 */
            var_a0_2 = 0x10;
block_54:
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_a0_2;
            break;
        case 0x3A:                                  /* switch 3 */
        case 0x39:                                  /* switch 3 */
            var_a0_2 = 0x12;
            goto block_54;
        }
        return;
    }
    temp_a0_3 = M2C_FIELD(arg0, void **, 0);
    temp_a1_3 = *temp_s1;
    temp_f1 = (s32) (M2C_FIELD(temp_a0_3, f32 *, 0xE0) - M2C_FIELD(temp_a1_3, f32 *, 0xE0));
    temp_f0 = (s32) (M2C_FIELD(temp_a0_3, f32 *, 0xE8) - M2C_FIELD(temp_a1_3, f32 *, 0xE8));
    if (((temp_f1 * temp_f1) + (temp_f0 * temp_f0)) >= 0x400000) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = func_009B33F0(temp_a0_3, temp_a1_3);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x6C) = (f32) (M2C_FIELD(*temp_s1, f32 *, 0xE0) - (f32) func_00BBB990(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C), 0x300));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x70) = (f32) (M2C_FIELD(*temp_s1, f32 *, 0xE8) - (f32) func_00BBB9C0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C), 0x300));
        func_00BD4040(arg0, 3);
        func_00BD3BA0(arg0, 0, 1);
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = func_009B33F0(temp_a0_3, temp_a1_3);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x6C) = (f32) (M2C_FIELD(*temp_s1, f32 *, 0xE0) - (f32) func_00BBB990(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C), 0x300));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x70) = (f32) (M2C_FIELD(*temp_s1, f32 *, 0xE8) - (f32) func_00BBB9C0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C), 0x300));
        func_00BD4040(arg0, 1);
        func_00BD3BA0(arg0, 0, 1);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xE;
}
