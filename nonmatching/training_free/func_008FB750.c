/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FD660();                                /* extern */
s32 func_008FD730(s32);                             /* extern */
s32 func_00901830();                                /* extern */
s32 func_00901870();                                /* extern */
extern void *D_003EA6C0;
extern char D_00591F24[];

void func_008FB750(void) {
    s32 *temp_a1;
    s32 *temp_a1_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    void *var_a2;
    void *var_a2_2;

    temp_v0 = func_008FD660();
    if (temp_v0 >= 0) {
        if ((*(u8 *)D_00591F24) != 2) {
            var_v0 = 0;
        } else {
            var_v0 = 1;
        }
        if (var_v0 != 0) {
            var_a0 = 0xC0029;
        } else {
            var_a0 = 0xC001C;
        }
        M2C_FIELD(((temp_v0 * 4) + D_003EA6C0), s32 *, 0x108) = var_a0;
        if (func_008FD730(var_a0) != 0) {
            M2C_FIELD((temp_v0 + D_003EA6C0), s8 *, 0x154) = 0;
        } else {
            M2C_FIELD((temp_v0 + D_003EA6C0), s8 *, 0x154) = 1;
        }
    }
    var_a2 = D_003EA6C0;
    var_s0 = 0;
    temp_a1 = var_a2 + 0x20;
    if (M2C_FIELD(var_a2, s32 *, 0x20) > 0) {
loop_17:
        if (M2C_FIELD(var_a2, s32 *, 0x108) != 0xC0004) {
            var_s0 += 1;
            var_a2 += 4;
            if (var_s0 >= *temp_a1) {
                goto block_23;
            }
            goto loop_17;
        }
    } else {
block_23:
        var_s0 = -1;
    }
    if (var_s0 >= 0) {
        M2C_FIELD((var_s0 + D_003EA6C0), s8 *, 0x154) = (s8) (func_00901830() == 0);
    }
    var_a2_2 = D_003EA6C0;
    var_s0_2 = 0;
    temp_a1_2 = var_a2_2 + 0x20;
    if (M2C_FIELD(var_a2_2, s32 *, 0x20) > 0) {
loop_28:
        if (M2C_FIELD(var_a2_2, s32 *, 0x108) != 0xB002E) {
            var_s0_2 += 1;
            var_a2_2 += 4;
            if (var_s0_2 >= *temp_a1_2) {
                goto block_33;
            }
            goto loop_28;
        }
    } else {
block_33:
        var_s0_2 = -1;
    }
    if (var_s0_2 > 0) {
        M2C_FIELD((var_s0_2 + D_003EA6C0), s8 *, 0x154) = (s8) (func_00901870() == 0);
    }
}
