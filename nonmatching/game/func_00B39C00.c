/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00B364C0(void);
extern u8 func_00BF6270(void);
s32 func_009B3070(u16, u16);                        /* extern */
M2C_UNK func_009B3480(void *, f32, f32);            /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00B39ED0(void *, void *, u8);          /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_00CBCD80[];

u16 func_00B39C00(void *arg0) {
    s32 temp_s0_2;
    s32 temp_v1;
    s32 var_s2;
    s32 var_v0_2;
    u16 temp_s0;
    u16 temp_v0;
    u16 var_v0;
    u32 temp_s1;
    u8 temp_a2;
    u8 temp_v0_3;
    u8 temp_v1_2;
    void **temp_s0_3;
    void **temp_v0_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *var_v1;

    temp_v0_2 = func_00B2A420(func_00BF6270());
    temp_a1 = *temp_v0_2;
    var_s2 = 0;
    temp_a2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0);
    temp_s0 = M2C_FIELD(((temp_a2 * 2) + temp_a1), u16 *, 0x128);
    var_v1 = temp_a1 + (M2C_FIELD(temp_a1, u8 *, 0x13) * 0xB);
    temp_s1 = M2C_FIELD(((temp_a2 * 4) + temp_a1), u32 *, 0x158);
loop_1:
    if (M2C_FIELD(var_v1, u8 *, 0x1B4) != temp_a2) {
        var_s2 += 1;
        var_v1 += 1;
        if (var_s2 >= 0xB) {

        } else {
            goto loop_1;
        }
    }
    func_00B39ED0(arg0, temp_a1, temp_a2);
    temp_v1 = func_009B3070(M2C_FIELD(*temp_v0_2, u16 *, 0x26), temp_s0) & 0xFFFF;
    if (temp_s1 >= 0xE10000U) {
        if (temp_s1 < 0x03840000U) {
            if (((*(u8 *)D_00CBCD80) + 1) < var_s2) {
                if ((temp_v1 & 0xFFFF) < 0x4000) {
                    var_v0 = 9;
                } else {
                    goto block_9;
                }
            } else {
                var_v0 = 7;
            }
        } else {
            goto block_9;
        }
        goto block_10;
    }
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    func_009B3480(temp_a0, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70));
    temp_s0_2 = func_00BBB8C0(0x500) + 0xA00;
    if (temp_s1 >= (u32) (temp_s0_2 * (func_00BBB8C0(0x500) + 0xA00))) {
        goto block_12;
    }
    temp_s0_3 = func_00B2A420(func_00BF6270());
    temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x12);
    if ((temp_v1_2 != 3) && (temp_v1_2 != 4)) {
        goto block_22;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) < 0x681) {
        goto block_22;
    }
    temp_v0_3 = func_00B364C0();
    if ((temp_v0_3 != 2) && (temp_v0_3 != 3) && (temp_v0_3 != 1)) {
        temp_a0_2 = *temp_s0_3;
        if (M2C_FIELD(temp_a0_2, u8 *, 0x16) == 0x33) {
            if (M2C_FIELD(temp_a0_2, u16 *, 0x18) == 0) {
                goto block_22;
            }
            goto block_31;
        }
block_22:
        var_v0_2 = 0;
    } else {
block_31:
        var_v0_2 = 1;
    }
    if (var_v0_2 != 0) {
        func_00BD3BA0(arg0, 5, 0);
        func_00BD3BA0(arg0, 0, 0);
        var_v0 = 0xC;
        goto block_10;
    }
block_12:
    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x18);
    if ((u32) (temp_v0 - 8) >= 2U) {
        if (((*(u8 *)D_00CBCD80) + 1) >= var_s2) {
            if (temp_s1 >= 0x100000U) {
                if (temp_s1 < 0x400000U) {
block_9:
                    var_v0 = 8;
                } else {
                    var_v0 = 7;
                }
            } else {
                var_v0 = 9;
            }
        } else {
            var_v0 = 9;
        }
block_10:
        return var_v0;
    }
    return temp_v0;
}
