/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B22D0(f32);                             /* extern */
extern s32 D_003E758C;
extern char D_00CBAA02[];
extern char D_00CBAA04[];

s32 func_00BCDD00(void) {
    s32 var_s0_2;
    s32 var_s1;
    u16 var_s0;

    var_s0 = (*(u16 *)D_00CBAA04);
    var_s1 = 0x12C;
    if ((s32) (*(u16 *)D_00CBAA02) < (s32) var_s0) {
        if ((s32) var_s0 < 0x12C) {
loop_13:
            if (func_009B22D0((f32) M2C_FIELD((D_003E758C + ((var_s0 & 0xFFFF) * 0x354)), s16 *, 0x348)) == 0) {
                var_s0 = (var_s0 + 1) & 0xFFFF;
                if ((s32) var_s0 >= 0x12C) {

                } else {
                    goto loop_13;
                }
            } else {
                var_s1 = var_s0 & 0xFFFF;
            }
        }
        if ((var_s1 & 0xFFFF) == 0x12C) {
            var_s0_2 = 0;
            if ((s32) (*(u16 *)D_00CBAA02) >= 0) {
loop_4:
                if (func_009B22D0((f32) M2C_FIELD((D_003E758C + ((var_s0_2 & 0xFFFF) * 0x354)), s16 *, 0x348)) != 0) {
                    var_s1 = var_s0_2 & 0xFFFF;
                } else {
                    var_s0_2 = (var_s0_2 + 1) & 0xFFFF;
                    if ((s32) (*(u16 *)D_00CBAA02) < var_s0_2) {

                    } else {
                        goto loop_4;
                    }
                }
            }
        }
    } else if ((s32) (*(u16 *)D_00CBAA02) >= (s32) var_s0) {
loop_9:
        if (func_009B22D0((f32) M2C_FIELD((D_003E758C + ((var_s0 & 0xFFFF) * 0x354)), s16 *, 0x348)) != 0) {
            var_s1 = var_s0 & 0xFFFF;
        } else {
            var_s0 = (var_s0 + 1) & 0xFFFF;
            if ((s32) (*(u16 *)D_00CBAA02) >= (s32) var_s0) {
                goto loop_9;
            }
        }
    }
    return var_s1;
}
