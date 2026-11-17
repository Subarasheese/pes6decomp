/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_002AE630(s32);
extern s32 func_00288670(u32, u32);
extern s32 func_002AE670(s32);
s32 func_00A13E50(s32, s32, s32);
s32 func_00BBB780(s64);
s32 func_00BBB8C0(s32);
extern void *Pes6Ball_Current;
extern char D_005926D8[];
extern char Pes6MatchSquads[];

s32 func_00AA24E0(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    f32 temp_f20;
    s32 temp_a1;
    s32 s0;
    s32 var_s0;
    s32 s3;
    s32 s3b;
    s32 a0;
    s32 v;
    s32 t2;
    s32 s1;
    u16 id;
    u8 *e;
    u8 *sq;

    id = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    s0 = arg2;
    if (id == 0x369) {
        if (!((*(f32 *)D_005926D8) < (f32) func_002AE670(0x30)) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x3000)) {
            temp_f1 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
            if (!(temp_f1 <= 0.0f) && (temp_f1 < 12032.0f)) {
                s0 = 4;
            }
        }
    } else if (id == 0x1EC || id == 0x1EF || id == 0x362) {
        s0 = 6;
    } else if (id == 0x36A || id == 0x11E || id == 0x396 || id == 0x37A) {
        s0 = 2;
    }
    a0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
    if (a0 <= 0) {
        a0 = -a0;
    }
    sq = (u8 *)Pes6MatchSquads + M2C_FIELD(arg0, u8 *, 0x12) * 0x6900 + M2C_FIELD(arg0, u8 *, 0x11) * 0x348;
    if ((M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) + a0) >= 0x3401) {
        e = sq;
        if ((e[0xAC] & 0x7F) < 0x5F) {
            temp_a1 = (e[0x8C] >> 2) + 0x94;
            if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) < (f32) ((temp_a1 * -0x30) / 183))) {
                s0 = func_00A13E50(s0, 5, M2C_FIELD(arg0, u8 *, 0x12) * 0x69);
            } else {
                s0 = func_00A13E50(s0, 4, M2C_FIELD(arg0, u8 *, 0x12) * 0x69);
            }
        }
    }
    var_s0 = s0 << 8;
    v = (0x63 - func_00288670(sq[0x80] & 0x7F, 0x28U)) + 0x63;
    v = v / 2;
    s3 = (s32)((u32)v * (u32)arg1) / 198;
    s3b = s3 / 2;
    s3 = s3 / 4 + func_00BBB8C0(s3b);
    t2 = (s32)((u32)arg1 * 2);
    s3 = s3 + func_00BBB8C0(t2 / 10);
    v = (0x63 - func_00288670(sq[0x80] & 0x7F, 0x28U)) + 1;
    s3 = s3 + (s32)((u32)arg1 * (u32)v) / 100;
    if (M2C_FIELD(arg0, u8 *, 0x25) != 0) {
        var_s0 = (s32)((u32)var_s0 * 7) / 10;
    }
    s1 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
    if (((s32)((u32)func_00288670(sq[0x80] & 0x7F, 0x28U) * 0x1E + 0x4000)) < s1) {
        if ((*(f32 *)D_005926D8) < (f32) func_002AE670((s1 - 0x3C00) / 256 + 0x30)) {
            if (!((*(f32 *)D_005926D8) < (f32) func_002AE670(0x30)) && !(M2C_FIELD(Pes6Ball_Current, f32 *, 0x30) <= 3008.0f) && (func_00BBB780((s64)(s16)(func_00288670(sq[0x80] & 0x7F, 0x28U) - 0x46)) != 0)) {
                var_s0 = (s32)((u32)var_s0 * 7) / 10;
            } else {
                temp_f20 = (*(f32 *)D_005926D8);
                if (!(temp_f20 < (f32) func_002AE670(0x28)) && ((func_002AE630((s32) temp_f20) << 7) + 0x5000) >= M2C_FIELD(Pes6Ball_Current, s32 *, 0x50)) {
                    var_s0 = func_00BBB8C0(0x80) + 0x1C0;
                } else {
                    var_s0 = func_00BBB8C0(0x30) + 0x110;
                }
            }
        }
    }
    if (var_s0 < 0x140) {
        var_s0 = 0x140;
    }
    return (s32)((u32)s3 << 8) / var_s0;
}
