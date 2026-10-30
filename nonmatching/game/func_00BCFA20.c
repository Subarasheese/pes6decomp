/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154490(s32, s32);
extern void func_009B45B0(u32);
extern s32 func_00152130(s32, s8);
extern int func_002DCA30(void);
s32 func_00849850(M2C_UNK);                         /* extern */
s32 func_009B4700();                                /* extern */
M2C_UNK func_009B5D20();                            /* extern */
M2C_UNK func_009B6630(M2C_UNK, f32);                /* extern */
s32 func_00BB6100(M2C_UNK);                         /* extern */
f32 func_00BB6770();                                /* extern */
extern s32 D_003EA73C;
extern char D_00592700[];
extern char D_00CBAA00[];
extern char D_00CBAA02[];

s32 func_00BCFA20(void) {
    M2C_UNK var_a0;
    s32 temp_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;

    var_v0 = 0;
    if ((*(u16 *)D_00CBAA00) != (*(u16 *)D_00CBAA02)) {
        if (func_002DCA30() != 0) {
            func_009B6630(0, 0.5f * (1.0f + func_00BB6770()));
        } else {
            func_009B6630(0, func_00BB6770());
        }
        func_009B5D20();
        if (((*(u8 *)D_00592700) != 5) && ((*(u8 *)D_00592700) != 6)) {
            var_a0 = 4;
        } else {
            var_a0 = 0xA;
        }
        var_v0 = func_00BB6100(var_a0);
    }
    if (D_003EA73C == 0) {
        if ((var_v0 == 0) && ((*(u16 *)D_00CBAA00) != (*(u16 *)D_00CBAA02))) {
            var_s1 = 0;
            temp_s0 = func_009B4700();
            if (func_002DCA30() == 0) {
                if (func_00154490(temp_s0, 8) != 0) {
                    var_s1 = 1;
                }
            } else {
                var_s1 = func_00849850(0) != 0;
            }
            if (var_s1 != 0) {
                goto block_19;
            }
        } else {
block_19:
            D_003EA73C = 1;
        }
    }
    if (D_003EA73C != 0) {
        if (func_00152130(1, 0x10) != 0) {
            var_v0_2 = 1;
        } else {
            goto block_23;
        }
    } else {
block_23:
        var_v0_2 = 0;
    }
    if (var_v0_2 != 0) {
        func_009B45B0(6U);
    }
    return 1;
}
