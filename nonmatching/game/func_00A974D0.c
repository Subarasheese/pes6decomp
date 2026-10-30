/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, s32);        /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_009B32D0(u16, u16, s32);                   /* extern */
s32 func_009F4B70(M2C_UNK, s32, f32);               /* extern */
s32 func_00A22C50(void *, M2C_UNK, s8, s32, s32, s16, s32, M2C_UNK, f32); /* extern */
M2C_UNK func_00AADED0(void *, s16, M2C_UNK, s32);   /* extern */
s32 func_00AB3590(void *, M2C_UNK);                 /* extern */
s16 func_00AB3B70(void *, s16, s32);                /* extern */
f32 func_00AB3C60(void *, s32);                     /* extern */
f32 func_00AB4270();                                /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchSquads[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x88, 0x8c, 0x90, 0x94, 0x98, 0x9c, 0xa0, 0xa4], gap at: 0x8. */
s32 func_00A974D0(void *arg0, u16 arg1, u16 arg2, s8 arg3, s32 arg4) {
    M2C_UNK var_s4;
    f32 temp_f20;
    s16 var_s3;
    s32 temp_v0;
    s8 var_s6;
    u16 temp_v1;
    u32 var_s5;

    var_s6 = arg3;
    temp_f20 = func_00AB4270();
    if ((func_009B30B0(arg2, arg1) & 0xFFFF) < 0x13) {
        var_s6 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x68) & 1 & 1;
    }
    var_s5 = (u32) (func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFFFF) >> 4;
    if ((s32) var_s5 >= 0) {
loop_3:
        if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x1500) {
            if ((func_009B30B0(arg2, arg1) & 0xFFFF) >= 8) {
                var_s4 = 0x1A2;
                var_s3 = func_009B32D0(arg2, arg1, func_00AB3590(arg0, 0x1A2) & 0xFFFF) & 0xFFFF;
            } else {
                var_s3 = arg1 & 0xFFFF;
                var_s4 = 0x2F5;
            }
        } else {
            var_s3 = func_009B32D0(arg2, arg1, 0x800) & 0xFFFF;
            var_s4 = 0xF;
        }
        temp_v0 = func_009F4B70(var_s4, (s32) var_s5, temp_f20);
        if (func_00A22C50(arg0, var_s4, var_s6, (s32) var_s5, temp_v0, var_s3, arg4, 0, temp_f20) == 0) {
            var_s5 -= 1;
            if ((s32) var_s5 < 0) {
                goto block_12;
            }
            goto loop_3;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = var_s6;
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        if ((temp_v1 == 0x49) || (temp_v1 == 0x2E) || (temp_v1 == 0x60)) {
            M2C_FIELD(arg0, s16 *, 0x26) = var_s3;
        }
        func_00209A00(M2C_FIELD(arg0, void **, 4), var_s4, var_s5 & 0xFFFF);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28) = func_00AB3C60(arg0, temp_v0);
        M2C_FIELD(arg0, s16 *, 0x38) = func_00AB3B70(arg0, var_s3, temp_v0);
        func_00AADED0(arg0, var_s3, 0, temp_v0);
        func_00207390(M2C_FIELD(arg0, void **, 4), 4);
        M2C_FIELD(arg0, s16 *, 0x2C) = var_s3;
        return 1;
    }
block_12:
    return 0;
}
