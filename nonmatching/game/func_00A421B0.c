/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_009F4B70(M2C_UNK, s32, f32);               /* extern */
s32 func_00A22C50(void *, M2C_UNK, s32, M2C_UNK, s32, u16, s32, M2C_UNK, f32); /* extern */
s32 func_00A9C670();                                /* extern */
M2C_UNK func_00AADED0(void *, u16, M2C_UNK, s32);   /* extern */
extern f32 *D_003E74CC;
extern char Pes6MatchSquads[];

s32 func_00A421B0(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    u16 temp_a0;
    u8 temp_a4;

    var_s0 = func_00A9C670() - 0x400;
    temp_a0 = M2C_FIELD(func_00208310(0x2C8), u16 *, 0xA);
    temp_v1 = ((temp_a0 * 0x5A) / 100) + ((u32) (temp_a0 * 0x5A) >> 0x1F);
    if (var_s0 >= temp_v1) {
        var_s0 = temp_v1;
    }
    var_s1 = 6;
loop_3:
    temp_v0 = func_009F4B70(0x2C8, var_s1, *D_003E74CC);
    if (func_00A22C50(arg0, 0x2C8, M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x68) & 1 & 1, 0, temp_v0, M2C_FIELD(arg0, u16 *, 0x26), var_s0, 0, *D_003E74CC) == 0) {
        var_s1 -= 2;
        if (var_s1 < 0) {
            return 0;
        }
        goto loop_3;
    }
    temp_a4 = M2C_FIELD(arg0, u8 *, 0x12);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = (s8) (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a4 * 0x6900))), u8 *, 0x68) & 1 & 1);
    func_00209A00(M2C_FIELD(arg0, void **, 4), 0x2C8, var_s1 & 0xFFFF, ((void *)Pes6MatchSquads), temp_a4 * 0x69);
    func_00AADED0(arg0, M2C_FIELD(arg0, u16 *, 0x26), 0, temp_v0);
    func_00207390(M2C_FIELD(arg0, void **, 4), 6);
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
    return 1;
}
