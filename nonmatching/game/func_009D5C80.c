/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB8C0(s32);
extern s32 func_00A07B40(void);
extern s32 func_00BBB780(s64);
extern u32 func_00288670(u32, u32);
extern s32 func_009B3220(s32, s32, s32);
s32 func_00BC03A0(u8);                              /* extern */
s32 func_00BC13A0(M2C_UNK);                         /* extern */
extern char Pes6MatchSquads[];
extern char D_00CBBE01[];

void func_009D5C80(void *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_s0;

    M2C_FIELD(arg0, s8 *, 0x66) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) = (u8) M2C_FIELD(arg0, u8 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    temp_a0 = (*(u8 *)D_00CBBE01) & 0xE0;
    if ((temp_a0 != 0x60) && (temp_a0 != 0xC0)) {
        var_s0 = 0x274;
        var_v0 = M2C_FIELD(arg0, s32 *, 0x1C) + 0x200;
        goto block_3;
    }
    var_s1 = 0;
    if (func_00BBB8C0(3) == 0) {
        temp_s0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6B) & 0x7F, 0x14U);
        temp_v1 = temp_s0 + func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x70) & 0x7F, 0x32U);
        var_v0_2 = temp_v1 >> 1;
        if (temp_v1 < 0) {
            var_v0_2 = (s32) (temp_v1 + 1) >> 1;
        }
        if (func_00BBB780((s64) ((s64) var_v0_2 << 0x30) >> 0x30) != 0) {
            var_s1 = 1;
        } else {
            goto block_18;
        }
    } else {
block_18:
        if (func_00A07B40() != 0) {
            var_s1 = 2;
        }
    }
    if (var_s1 == 0) {
        var_s0 = func_00BC13A0(0x43) & 0xFFFF;
        M2C_FIELD(arg0, s16 *, 0x38) = 0x38E;
    } else {
        var_s0 = func_00BC13A0(0x44) & 0xFFFF;
        var_v0 = M2C_FIELD(arg0, s32 *, 0x1C) + 0x200;
block_3:
        M2C_FIELD(arg0, s32 *, 0x1C) = var_v0;
    }
    if ((var_s0 & 0xFFFF) == 0x274) {
        M2C_FIELD(arg0, u16 *, 0x2C) = (u16) (M2C_FIELD(arg0, u16 *, 0x28) + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) * 0x3000));
        M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220((s32) M2C_FIELD(arg0, u16 *, 0x2C), (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x2000);
    }
    if (func_00BC03A0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2C)) == 0x44) {
        M2C_FIELD(arg0, u16 *, 0x26) = func_009B3220((s32) M2C_FIELD(arg0, u16 *, 0x2C), (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x2000);
    }
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) (var_s0 & 0xFFFF);
}
