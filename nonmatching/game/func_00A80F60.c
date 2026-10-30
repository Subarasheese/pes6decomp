/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_00A7F570(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_00591F38[];
extern char D_005926D8[];
extern char D_005926DE[];
extern char D_005926EC[];
extern char D_005926F4[];
extern char D_005926FC[];

s32 func_00A80F60(void *arg0, u16 arg1, u16 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    u16 temp_v0;
    u8 temp_s2;

    if ((s32) (*(u8 *)D_005926F4) >= 0) {
        var_f0 = (f32) (*(u8 *)D_005926F4);
    } else {
        var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926F4) >> 1) | ((*(u8 *)D_005926F4) & 1));
    }
    if (!((*(f32 *)D_005926D8) < var_f0)) {
        if (((func_009B30B0(arg1, arg3) & 0xFFFF) < 0x21) && ((func_009B30B0(arg3, arg2) & 0xFFFF) < 0x11)) {
            return 1;
        }
        goto block_6;
    }
block_6:
    if ((*(s32 *)D_00591F38) != 0x7FFF) {
        if ((s32) (*(u8 *)D_005926FC) >= 0) {
            var_f0_2 = (f32) (*(u8 *)D_005926FC);
        } else {
            var_f0_2 = 2.0f * (f32) (((u8) (*(u8 *)D_005926FC) >> 1) | ((*(u8 *)D_005926FC) & 1));
        }
        if (!((*(f32 *)D_005926D8) < var_f0_2)) {
            goto block_11;
        }
        goto block_19;
    }
block_11:
    if ((s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x6E) < (s32) (*(u8 *)D_005926EC)) {
        if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= -160.0f)) {
            var_v0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
            if (var_v0 <= 0) {
                var_v0 = -var_v0;
            }
            if (var_v0 < 0xEB0) {
                goto block_16;
            }
            goto block_19;
        }
        goto block_19;
    }
block_16:
    temp_s2 = M2C_FIELD(Pes6Ball_Current, u8 *, 0x68);
    if (((s32) temp_s2 >= (s32) ((u32) (func_009B30B0(arg2, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) >> 2)) && (func_00A7F570(arg0) != 0)) {
        return 6;
    }
block_19:
    if (arg5 < 0x1100) {
        if ((s32) (*(u8 *)D_005926FC) >= 0) {
            var_f0_3 = (f32) (*(u8 *)D_005926FC);
        } else {
            var_f0_3 = 2.0f * (f32) (((u8) (*(u8 *)D_005926FC) >> 1) | ((*(u8 *)D_005926FC) & 1));
        }
        if (!((*(f32 *)D_005926D8) < var_f0_3) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x1900)) {
            return 7;
        }
        goto block_26;
    }
block_26:
    if ((s32) (*(u8 *)D_005926EC) >= 0) {
        var_f0_4 = (f32) (*(u8 *)D_005926EC);
    } else {
        var_f0_4 = 2.0f * (f32) (((u8) (*(u8 *)D_005926EC) >> 1) | ((*(u8 *)D_005926EC) & 1));
    }
    if (!((*(f32 *)D_005926D8) < var_f0_4) || (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x2000)) {
        temp_v0 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x6E);
        if ((s32) (*(u8 *)D_005926FC) >= (s32) temp_v0) {
            if ((s32) (*(u8 *)D_005926DE) >= (s32) temp_v0) {
                return 2;
            }
            if ((arg6 < 0x80) && ((arg4 & 0xFFFF) < 0x11)) {
                return 3;
            }
            temp_f1 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC);
            var_a1 = 0;
            if (!(temp_f1 <= -160.0f)) {
                var_a0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
                if (var_a0 <= 0) {
                    var_a0 = -var_a0;
                }
                if (var_a0 < 0xEB0) {
                    var_a1 = 1;
                }
            }
            if ((var_a1 == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x201U) && ((0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C))) {
                return 4;
            }
            var_a1_2 = 0;
            if (!(temp_f1 <= -160.0f)) {
                var_a0_2 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
                if (var_a0_2 <= 0) {
                    var_a0_2 = -var_a0_2;
                }
                if (var_a0_2 < 0xEB0) {
                    var_a1_2 = 1;
                }
            }
            if (((var_a1_2 == 0) || ((arg4 & 0xFFFF) < 0x49)) && (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x1900)) {
                if (arg6 >= (arg7 + 0xE0)) {
                    return 4;
                }
                if ((((*(u8 *)D_005926EC) & 0xFF) >= (s32) temp_v0) && ((arg7 + 0x80) < arg6)) {
                    return 5;
                }
                goto block_61;
            }
            goto block_61;
        }
    }
block_61:
    return 0;
}
