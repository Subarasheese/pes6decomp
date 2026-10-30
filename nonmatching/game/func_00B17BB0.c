/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE630(s32);
extern u32 func_00288670(u32, u32);
extern s32 func_002AE670(s32);
M2C_UNK func_00284E60(void *, s32, s32, s32);       /* extern */
M2C_UNK func_00287120(void *);                      /* extern */
M2C_UNK func_00994F80(void *, M2C_UNK);             /* extern */
M2C_UNK func_00A97750(M2C_UNK);                     /* extern */
s32 func_00BBB7F0(M2C_UNK, u16);                    /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_00591E70[];
extern char D_005926D8[];
extern char D_005926E0[];
extern char Pes6MatchSquads[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x88, 0x8c, 0x90, 0x94, 0x98, 0x9c, 0xa0, 0xa4], gap at: 0x8. */
void func_00B17BB0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 temp_f20;
    f32 var_f0;
    s16 var_s5;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_5;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_fp;
    u16 temp_a1;
    u16 temp_v1_3;
    u16 temp_v1_4;

    var_s3 = arg1;
    var_s2 = arg2;
    var_s1 = arg3;
    var_s5 = func_00BBB8C0(0x10) + 0x48;
    var_s6 = 0;
    temp_a1 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x58);
    temp_fp = (((temp_a1 - (var_s3 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001;
    if ((arg4 < var_s1) && (var_s1 >= 0x20)) {
        var_s6 = 1;
        temp_f20 = (*(f32 *)D_005926D8);
        var_s3 = (var_s3 + (func_00BBB7F0(0x2800, temp_a1) & 0xFFFF)) & 0xFFFF;
        if (!(temp_f20 <= (f32) func_002AE670(0x28)) && (temp_s7 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50), ((temp_s7 < ((func_002AE630((s32) temp_f20) << 6) + 0x4800)) != 0))) {
            if (arg4 < var_s1) {
                temp_v1 = (var_s1 - arg4) * 0xBC;
                var_v0 = temp_v1 >> 1;
                if (temp_v1 < 0) {
                    var_v0 = (s32) (temp_v1 + 1) >> 1;
                }
                var_s2 += var_v0;
                var_s1 = arg4;
            }
        } else {
            temp_s0 = var_s1;
            temp_v0 = func_00BBB8C0(0x3C) + 0x14;
            var_s1 = ((var_s1 * temp_v0) / 100) + ((u32) (var_s1 * temp_v0) >> 0x1F);
            if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x30) <= 0.0f) && (func_00BBB8C0(3) == 0)) {
                var_s1 = -var_s1;
            }
            temp_v1_2 = (temp_s0 - var_s1) * 0xBC;
            var_v0_2 = temp_v1_2 >> 1;
            if (temp_v1_2 < 0) {
                var_v0_2 = (s32) (temp_v1_2 + 1) >> 1;
            }
            var_s2 += var_v0_2;
            var_s5 = func_00BBB8C0(0x10) + 0x32;
        }
    }
    if (var_s1 < -0x30) {
        var_s1 = -0x30;
    }
    func_00284E60(arg0, var_s3, var_s2, var_s1);
    (*(u8 *)D_00591E4C) = M2C_FIELD(arg0, u8 *, 0);
    func_00994F80(arg0, 1);
    func_00287120(arg0);
    if (var_s2 < 0x4001) {
        if ((var_s6 != 0) && (M2C_FIELD(arg0, u8 *, 0x10) != 0)) {
            goto block_20;
        }
        M2C_FIELD(Pes6Ball_Current, s16 *, 0x84) = 5;
        var_f0 = (f32) -(s32) (*(u8 *)D_005926E0);
    } else {
block_20:
        (*(u8 *)D_00591E4C) = 0;
        M2C_FIELD(Pes6Ball_Current, s16 *, 0) = 0xB;
        var_f0 = (f32) -func_002AE670(8 - func_00BBB8C0(4));
    }
    (*(f32 *)D_005926D8) = var_f0;
    M2C_FIELD(Pes6Ball_Current, s8 *, 0x6C) = temp_fp;
    M2C_FIELD(Pes6Ball_Current, s16 *, 0x6A) = var_s5;
    M2C_FIELD(Pes6Ball_Current, s8 *, 0x62) = 4;
    temp_v1_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    if ((temp_v1_3 != 0x2F) && (temp_v1_3 != 0x1E0) && (temp_v1_3 != 0x319)) {
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC);
    } else {
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) = (f32) (*(f32 *)D_00591E70);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    func_00A97750(4);
    temp_v1_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    switch (temp_v1_4) {                            /* irregular */
    case 0x33F:
        temp_a1_2 = -0x1400 - func_00BBB8C0(0x800);
        M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = (s32) (((temp_a1_2 * 7) / 10) + ((u32) (temp_a1_2 * 7) >> 0x1F));
        break;
    case 0x233:
        M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = (s32) (-0x200 - func_00BBB8C0(0x400));
        break;
    case 0x335:
    case 0x334:
        M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = (s32) (-0x100 - func_00BBB8C0(0x100));
        break;
    case 0x326:
    case 0x325:
        if (M2C_FIELD(arg0, u8 *, 0) == M2C_FIELD(Pes6Ball_Current, u8 *, 0x97)) {
            M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = (s32) -func_00BBB8C0(0x100);
        } else {
            M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = (s32) (-0x600 - (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x72) & 0x7F, 0x28U) * 7));
        }
        break;
    default:
        M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = (s32) (-0x1400 - func_00BBB8C0(0x800));
        if (var_s2 < 0xC00) {
            temp_v1_5 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x74);
            M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = (s32) (((temp_v1_5 * var_s2) / 3072) + ((u32) (temp_v1_5 * var_s2) >> 0x1F));
        }
        break;
    }
    M2C_FIELD(Pes6Ball_Current, u8 *, 0x65) = (u8) (*(u8 *)D_005926E0);
    M2C_FIELD(arg0, s8 *, 0x66) = 0;
}
