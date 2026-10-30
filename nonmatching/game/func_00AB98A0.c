/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, s32);        /* extern */
s32 func_0099DFF0(M2C_UNK *, s32);                  /* extern */
s32 func_009B30B0(s32, u16);                        /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
s32 func_009F4B70(M2C_UNK, s32, f32);               /* extern */
s32 func_00A13E50(s32, s32);                        /* extern */
s32 func_00A1FE80(s32, M2C_UNK);                    /* extern */
s32 func_00A22C50(void *, M2C_UNK, s8, s32, s32, u16, s32, M2C_UNK, f32); /* extern */
M2C_UNK func_00AADED0(void *, u16, M2C_UNK, s32);   /* extern */
s16 func_00AB3B70(void *, u16, s32);                /* extern */
f32 func_00AB3C60(void *, s32);                     /* extern */
f32 func_00AB4270(void *);                          /* extern */
extern s32 Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_00591E7C[];
extern char D_005926E6[];
extern char Pes6MatchSquads[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64], gap at: 0x8. */
s32 func_00AB98A0(void *arg0, s8 arg1, s32 arg2) {
    f32 temp_f20;
    s32 temp_a0;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 var_s0;
    s8 var_s1;
    u16 temp_s0;
    u16 var_s4;
    u8 temp_a2;
    void *temp_v0;

    var_s1 = arg1;
    temp_a2 = M2C_FIELD(arg0, u8 *, 0x12);
    if ((M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a2 * 0x6900))), u8 *, 0x9E) & 0x7F) >= 0x46) {
        if (M2C_FIELD(arg0, u16 *, 0x1A) != 0xFF) {
            return 0;
        }
        if ((*(s32 *)D_00591E7C) == 0) {
            return 0;
        }
        if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4C)) {
            temp_s0 = M2C_FIELD(arg0, u16 *, 0x2C);
            temp_a0 = func_0099DFF0(((void *)Pes6MatchSquads), temp_a2 * 0x69) & 0xFFFF;
            if (arg2 != 0) {
                var_s1 = ((((temp_a0 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x26)) + 0x10000) & 0xFFFF) < 0x8001;
            }
            if (((func_009B30B0(temp_a0, temp_s0) & 0xFFFF) < 0x60) && (arg2 == 0)) {
                goto block_16;
            }
            temp_f20 = func_00AB4270(arg0);
            temp_s3 = func_00A1FE80(func_00A13E50(M2C_FIELD(arg0, s32 *, 0x1C) + 0x400, M2C_FIELD(arg0, s32 *, 0x58)), 0x1100);
            if (arg2 != 0) {
                var_s4 = M2C_FIELD(arg0, u16 *, 0x26);
                var_s0 = 0;
            } else {
                temp_v0 = ((*(u8 *)D_005926E6) * 4) + Pes6Ball_Current;
                var_s0 = 4;
                var_s4 = func_009B3480(arg0, M2C_FIELD(temp_v0, f32 *, 0x47C), M2C_FIELD(temp_v0, f32 *, 0xB7C)) & 0xFFFF;
            }
            temp_s3_2 = func_009F4B70(0x3AA, var_s0, temp_f20) & 0xFFFF;
            if (func_00A22C50(arg0, 0x3AA, var_s1, var_s0, temp_s3_2, var_s4, temp_s3, 0, temp_f20) != 0) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = var_s1;
                func_00209A00(M2C_FIELD(arg0, void **, 4), 0x3AA, var_s0 & 0xFFFF);
                func_00207390(M2C_FIELD(arg0, void **, 4), 3);
                M2C_FIELD(arg0, s8 *, 0x4A) = 8;
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28) = func_00AB3C60(arg0, temp_s3_2);
                func_00AADED0(arg0, var_s4, 0, temp_s3_2);
                M2C_FIELD(arg0, u16 *, 0x2C) = var_s4;
                M2C_FIELD(arg0, s16 *, 0x38) = func_00AB3B70(arg0, var_s4, temp_s3_2);
                M2C_FIELD(arg0, s8 *, 0x4D) = 0;
                M2C_FIELD(arg0, s8 *, 0x16) = 0x40;
                M2C_FIELD(arg0, s16 *, 0x18) = 0xA;
                return 1;
            }
block_16:
            return 0;
        }
        return 0;
    }
    return 0;
}
