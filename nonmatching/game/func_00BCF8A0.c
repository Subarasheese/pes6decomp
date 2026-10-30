/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154490(s32, s32);
extern void func_009B45B0(u32);
extern s32 func_00152130(s32, s8);
extern int func_002DCA30(void);
s32 func_00849850(M2C_UNK);                         /* extern */
s32 func_009B4700();                                /* extern */
M2C_UNK func_009B6630(M2C_UNK, f32);                /* extern */
extern s32 D_003EA73C;
extern char D_00CBAA00[];
extern char D_00CBAA02[];
extern char D_00CBAA04[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
s32 func_00BCF8A0(void) {
    f32 var_f20;
    s32 temp_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;

    if ((*(u16 *)D_00CBAA00) != (*(u16 *)D_00CBAA02)) {
        var_v0 = (*(u16 *)D_00CBAA00) - ((s32) ((*(u16 *)D_00CBAA04) + 0x11C) % 300);
        if (var_v0 <= 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 >= 0x10) {
            var_f20 = 1.0f;
        } else {
            var_f20 = 0.5f;
        }
        if (func_002DCA30() != 0) {
            var_f20 = 0.5f * (1.0f + var_f20);
        }
        func_009B6630(0, var_f20 * 0.5f);
    }
    if (D_003EA73C == 0) {
        if ((*(u16 *)D_00CBAA00) != (*(u16 *)D_00CBAA02)) {
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
                goto block_20;
            }
        } else {
block_20:
            D_003EA73C = 1;
        }
    }
    if (D_003EA73C != 0) {
        if (func_00152130(1, 0x10) != 0) {
            var_v0_2 = 1;
        } else {
            goto block_24;
        }
    } else {
block_24:
        var_v0_2 = 0;
    }
    if (var_v0_2 != 0) {
        func_009B45B0(6U);
    }
    return 0;
}
