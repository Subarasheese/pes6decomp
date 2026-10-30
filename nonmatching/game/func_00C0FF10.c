/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C13870(s8 *);                        /* extern */
s16 func_00C18C50(s8 *, f32, f32);                  /* extern */

void func_00C0FF10(s32 arg0, void *arg1) {
    s8 sp40;
    u8 sp41;
    s16 sp42;
    s32 temp_a1_2;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_a7;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    s32 var_v1;
    s8 *temp_a1_3;
    s8 *var_a1;
    s8 var_s0;
    u8 temp_a0;
    void *temp_a1;
    void *temp_a2;

    var_v1 = 0x10;
    var_a1 = &sp40;
    if (var_a1 != NULL) {
        do {
            *var_a1 = 0;
            var_v1 -= 1;
            var_a1 += 1;
        } while (var_v1 != 0);
    }
    var_s0 = 0;
    switch (arg0) {                                 /* irregular */
    case 3:
        var_s0 = 0x1F;
        sp41 = M2C_FIELD(arg1, u8 *, 0);
        sp42 = func_00C18C50(var_a1, (f32) M2C_FIELD(arg1, s32 *, 0xC), (f32) M2C_FIELD(arg1, s32 *, 0x10));
        var_a2 = 0;
        do {
            temp_a1 = arg1 + var_a2;
            temp_t2 = var_a2 * 2;
            temp_v1 = (var_a2 + 1) * 2;
            temp_t1 = (var_a2 + 2) * 2;
            temp_t3 = ~(3 << temp_v1);
            temp_t0 = ~(3 << temp_t1);
            temp_a7 = (var_a2 + 3) * 2;
            temp_a6 = ~(3 << temp_a7);
            M2C_FIELD(&sp40, s32 *, 4) = (s32) ((M2C_FIELD(&sp40, s32 *, 4) & ~(3 << temp_t2)) | ((((s32) M2C_FIELD(temp_a1, u8 *, 1) >> 5) & 3 & 3) << temp_t2));
            temp_a5 = (var_a2 + 4) * 2;
            temp_a4 = ~(3 << temp_a5);
            var_a2 += 5;
            M2C_FIELD(&sp40, s32 *, 4) = (s32) ((M2C_FIELD(&sp40, s32 *, 4) & temp_t3) | ((((s32) M2C_FIELD(temp_a1, u8 *, 2) >> 5) & 3 & 3) << temp_v1));
            M2C_FIELD(&sp40, s32 *, 4) = (s32) ((M2C_FIELD(&sp40, s32 *, 4) & temp_t0) | ((((s32) M2C_FIELD(temp_a1, u8 *, 3) >> 5) & 3 & 3) << temp_t1));
            M2C_FIELD(&sp40, s32 *, 4) = (s32) ((M2C_FIELD(&sp40, s32 *, 4) & temp_a6) | ((((s32) M2C_FIELD(temp_a1, u8 *, 4) >> 5) & 3 & 3) << temp_a7));
            M2C_FIELD(&sp40, s32 *, 4) = (s32) ((M2C_FIELD(&sp40, s32 *, 4) & temp_a4) | ((((s32) M2C_FIELD(temp_a1, u8 *, 5) >> 5) & 3 & 3) << temp_a5));
        } while (var_a2 < 6);
        temp_a1_2 = var_a2 * 2;
        M2C_FIELD(&sp40, s32 *, 4) = (s32) ((M2C_FIELD(&sp40, s32 *, 4) & ~(3 << temp_a1_2)) | ((((s32) M2C_FIELD((var_a2 + arg1), u8 *, 1) >> 5) & 3 & 3) << temp_a1_2));
        break;
    case 2:
    case 1:
        var_s0 = 0x1E;
        sp41 = M2C_FIELD(arg1, u8 *, 0);
        sp42 = func_00C18C50(var_a1, (f32) M2C_FIELD(arg1, s32 *, 0xC), (f32) M2C_FIELD(arg1, s32 *, 0x10));
        var_a3 = 0;
        do {
            temp_a2 = arg1 + var_a3;
            temp_a1_3 = &(&sp40)[var_a3];
            temp_a0 = M2C_FIELD(temp_a2, u8 *, 1);
            var_a3 += 5;
            M2C_FIELD(temp_a1_3, u8 *, 4) = temp_a0;
            M2C_FIELD(temp_a1_3, u8 *, 5) = (u8) M2C_FIELD(temp_a2, u8 *, 2);
            M2C_FIELD(temp_a1_3, u8 *, 6) = (u8) M2C_FIELD(temp_a2, u8 *, 3);
            M2C_FIELD(temp_a1_3, u8 *, 7) = (u8) M2C_FIELD(temp_a2, u8 *, 4);
            M2C_FIELD(temp_a1_3, u8 *, 8) = (u8) M2C_FIELD(temp_a2, u8 *, 5);
        } while (var_a3 < 6);
        M2C_FIELD(&(&sp40)[var_a3], u8 *, 4) = (u8) M2C_FIELD((var_a3 + arg1), u8 *, 1);
        break;
    case 4:
        var_s0 = 0x20;
        sp41 = M2C_FIELD(arg1, u8 *, 0);
        sp42 = func_00C18C50(var_a1, (f32) M2C_FIELD(arg1, s32 *, 0xC), (f32) M2C_FIELD(arg1, s32 *, 0x10));
        break;
    }
    if (var_s0 & 0xFF) {
        sp40 = var_s0;
        func_00C13870(&sp40);
    }
}
