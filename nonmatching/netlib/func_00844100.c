/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
extern u16 func_002DCE40(u16);
M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_001C8590(void *, void *, M2C_UNK);     /* extern */
s32 func_00844D40(M2C_UNK, M2C_UNK, s16 *, M2C_UNK, s16); /* extern */
extern s32 D_003EA29C;
extern s32 D_003EA2B0;
extern char D_008B09E0[];

s32 func_00844100(void) {
    s16 sp70;
    s16 sp72;
    s8 sp74;
    M2C_UNK *var_s4;
    s16 *var_s0;
    s16 *var_s1;
    s16 *var_s2;
    s16 *var_s3;
    s16 temp_a4;
    s32 temp_v1;
    s32 var_s5;

    var_s4 = ((void *)D_008B09E0);
    if (func_002DCA40() != 0) {
        func_001C48E8(&sp70, 0, 0x188);
        var_s3 = &sp70;
        sp70 = 7;
        var_s5 = 0;
        var_s2 = var_s3;
        var_s1 = var_s3;
        var_s0 = var_s3;
        temp_v1 = D_003EA29C + 1;
        D_003EA29C = temp_v1;
        sp72 = (s16) temp_v1;
        sp74 = D_003EA2B0 != 1;
        do {
            func_001C8590(var_s3 + 5, var_s4 + 0x1C, 0x20);
            M2C_FIELD(var_s2, s32 *, 0x108) = (s32) M2C_FIELD(var_s4, s32 *, 0x10);
            temp_a4 = M2C_FIELD(var_s4, s16 *, 0);
            var_s5 += 1;
            var_s3 += 0x20;
            M2C_FIELD(var_s1, u16 *, 0x128) = func_002DCE40(M2C_FIELD(var_s4, u16 *, 0xE));
            M2C_FIELD(var_s0, s8 *, 0x138) = (s8) temp_a4;
            M2C_FIELD(var_s2, s32 *, 0x140) = (s32) M2C_FIELD(var_s4, s32 *, 4);
            M2C_FIELD(var_s0, u8 *, 0x160) = (u8) M2C_FIELD(var_s4, u8 *, 0x51);
            var_s2 += 4;
            M2C_FIELD(var_s0, u8 *, 0x168) = (u8) M2C_FIELD(var_s4, u8 *, 0x52);
            M2C_FIELD(var_s1, s16 *, 0x178) = (s16) M2C_FIELD(var_s4, s32 *, 0x40);
            M2C_FIELD(var_s0, s8 *, 0x170) = (s8) M2C_FIELD(var_s4, s8 *, 0x50);
            var_s1 += 2;
            var_s0 += 1;
            var_s4 += 0x88;
        } while (var_s5 < 8);
        return -(func_00844D40(-2, 1, &sp70, 0x188, temp_a4) < 0);
    }
    return 0;
}
