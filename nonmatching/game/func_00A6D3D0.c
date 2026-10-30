/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB8C0(s32);
extern s32 func_00BBB780(s64);
extern u32 func_00288670(u32, u32);
extern s32 func_009B30B0(s32, s32);
s32 func_00A1AC80(void *, s32, M2C_UNK, s32);       /* extern */
s32 func_00AB4850(M2C_UNK, M2C_UNK *, s32, s32);    /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchSquads[];

s32 func_00A6D3D0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_v1;
    u32 temp_a1_2;
    u32 temp_v0_2;
    u8 temp_a3;
    void *temp_a1;

    var_s3 = arg2;
    var_s1 = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 0x200)) {
        temp_a3 = M2C_FIELD(arg0, u8 *, 0x12);
        temp_a1 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a3 * 0x6900));
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != (M2C_FIELD(temp_a1, u8 *, 0x68) & 1 & 1)) {
            temp_s0 = func_00AB4850(0x100, ((void *)Pes6MatchSquads), temp_a3 * 0x69, temp_a3 * 0xF);
            var_s0 = (s32) (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x77) & 0x7F, 0x32U) << 8) / temp_s0;
        } else {
            var_s0 = func_00288670(M2C_FIELD(temp_a1, u8 *, 0x77) & 0x7F, 0x32U);
        }
    } else {
        var_s0 = 0;
    }
    temp_v0 = var_s0 + ((u32) (func_009B30B0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) >> 2);
    var_s0_2 = temp_v0 * 4;
    if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x1001) {
        if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x10C), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x60) {
            if (func_00BBB780((s64) (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x76) & 0x7F, 0x28U) << 0x30) >> 0x30) & 0xFF) {
                var_a0 = var_s0_2 >> 2;
                if (temp_v0 & 0x20000000) {
                    var_a0 = (s32) (var_s0_2 + 3) >> 2;
                }
                var_s0_2 -= func_00BBB8C0(var_a0);
            } else {
                var_a0_2 = var_s0_2 >> 1;
                if (temp_v0 & 0x20000000) {
                    var_a0_2 = (s32) (var_s0_2 + 1) >> 1;
                }
                var_s0_2 = func_00BBB8C0(var_a0_2);
            }
            var_s1 = func_00BBB8C0(5) + 8;
        }
    }
    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    if ((temp_v1 == 0xFF) || (temp_v1 == 0xED)) {
        temp_v0_2 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x77) & 0x7F, 0x32U);
        var_s1 += ((0x63 - temp_v0_2) / 10) + ((u32) (0x63 - temp_v0_2) >> 0x1F) + 8;
    }
    if (arg3 == 1) {
        var_s4_2 = (var_s3 / (s32) (var_s0_2 + 0x1E0)) + 0x1A + func_00BBB8C0(5);
    } else {
        if ((var_s3 >= 0x2801) && !(func_00A1AC80(arg0, arg1, 0x28, var_s3 * var_s3) & 0xFF)) {
            var_v0 = func_00BBB8C0(5);
            var_v1 = (var_s3 / (s32) (var_s0_2 + 0x240)) + 0xC;
        } else {
            var_v0 = func_00BBB8C0(5);
            var_v1 = (var_s3 / (s32) (var_s0_2 + 0x240)) + 0x12;
        }
        var_s4_2 = var_v1 + var_v0;
        if (var_s3 < 0x2800) {
            var_s4_2 += ((0x2800 - var_s3) / 640) + ((u32) (0x2800 - var_s3) >> 0x1F);
        }
    }
    temp_a1_2 = 0x190 - var_s0_2;
    if (var_s3 >= 0x2001) {
        var_s3 = 0x2000;
    }
    temp_v1_2 = ((temp_a1_2 * var_s3) / 40) + ((u32) (temp_a1_2 * var_s3) >> 0x1F);
    var_v0_2 = temp_v1_2 >> 0xD;
    if (temp_v1_2 < 0) {
        var_v0_2 = (s32) (temp_v1_2 + 0x1FFF) >> 0xD;
    }
    var_s4 = var_s4_2 + (((0x190 - var_s0_2) / 40) + (temp_a1_2 >> 0x1F)) + var_v0_2 + var_s1;
    if (var_s4 < 0x20) {
        var_s4 = 0x20;
    }
    if (var_s4 >= 0x61) {
        var_s4 = 0x60;
    }
    if (arg3 == 0) {
        temp_v0_3 = var_s3 * (-0xA00 - func_00BBB8C0(0x400));
        var_v1_2 = temp_v0_3 >> 0xD;
        if (temp_v0_3 < 0) {
            var_v1_2 = (s32) (temp_v0_3 + 0x1FFF) >> 0xD;
        }
        M2C_FIELD(Pes6Ball_Current, s32 *, 0x1440) = var_v1_2;
    }
    return var_s4;
}
