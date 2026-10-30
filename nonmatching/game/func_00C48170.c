/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_009B30B0(u16, u16);                        /* extern */
M2C_UNK func_009B3500(void *, s32, M2C_UNK);        /* extern */
s32 func_00A13E50(s32, s32);                        /* extern */
s32 func_00A1FE80(s32, s32);                        /* extern */
s32 func_00A9E080(void *, u16, u16, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_00BBB8C0(M2C_UNK, s32);                    /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E70[];
extern char Pes6MatchSquads[];

s32 func_00C48170(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    f32 temp_f3;
    f32 temp_f5;
    s32 temp_s3;
    s32 temp_s6;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    u32 temp_s4;
    u8 temp_a1;

    var_s1 = arg2;
    temp_s4 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U);
    temp_s6 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7E) & 0x7F, 0x32U) * 5;
    if (M2C_FIELD(arg0, s32 *, 0x1C) < 0xC00) {
        goto block_1;
    }
    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), arg4) & 0xFFFF) >= 0x60) {
        var_s3 = 0xC00;
    } else {
block_1:
        if ((arg1 & 0xFFFF) == 0x26D) {
            temp_s3 = temp_s4 * 2;
            var_v0 = func_00A13E50(func_00A1FE80(arg3 + temp_s3, temp_s3 + 0xC00), temp_s3 + 0x1400);
        } else {
            func_009B3500(arg0, arg1, 0);
            temp_f3 = (f32) (temp_s4 * 2);
            temp_f5 = 2.0f * (*(f32 *)D_00591E70);
            var_v0 = func_00A13E50(func_00A1FE80((s32) ((f32) temp_s6 + (1024.0f + ((f32) arg3 + temp_f5) + temp_f3)), (s32) (4096.0f + temp_f5 + temp_f3)), (s32) (6144.0f + (*(f32 *)D_00591E70) + (f32) (temp_s4 * 5)));
        }
        var_s3 = var_v0;
    }
    if (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 9) {
        temp_a1 = M2C_FIELD(arg0, u8 *, 0x12);
        if (((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a1 * 0x6900))), u8 *, 0x86) << 0x39) >> 0x3F) != 0) {
            var_s3 += func_00BBB8C0(0x200, temp_a1 * 0x69) + 0x200;
        }
    }
    if (arg3 >= 0x600) {
        if ((func_009B30B0(arg4, M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) >= 0x18) {
            var_s3 = func_00A1FE80(func_00A9E080(arg0, arg4, M2C_FIELD(arg0, u16 *, 0x28), var_s3, 0x60, 0), (s32) (4096.0f + (*(f32 *)D_00591E70) + (f32) (temp_s4 * 2)));
        }
    }
    if (arg3 >= 0xC01) {
        temp_v0 = arg3 - 0xC00;
        if (var_s1 < temp_v0) {
            var_s1 = temp_v0;
        }
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) == 0x3E8) {
        var_s3 += 0x600;
    }
    if (var_s3 < var_s1) {
        var_s1 = var_s3;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_s1;
    return var_s1;
}
