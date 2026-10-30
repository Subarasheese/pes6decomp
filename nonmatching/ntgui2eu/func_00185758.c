/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00185758(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, void *arg7, void *arg_sp0, void *arg_sp8) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_a7;
    s32 var_s0;
    s32 var_s2;
    s32 var_t8;
    void *temp_a0_3;
    void *temp_a3_2;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t0_3;
    void *temp_t0_4;
    void *temp_t0_5;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_t1_3;
    void *temp_t1_4;
    void *temp_t1_5;
    void *temp_t2;
    void *temp_t2_2;
    void *temp_t2_3;
    void *temp_t2_4;
    void *temp_t2_5;
    void *temp_v1;
    void *var_t0;
    void *var_t1;
    void *var_t2;

    if (arg1 != 1) {
        var_s2 = -1;
        switch (arg1) {                             /* irregular */
        case 3:
            var_s2 = 1;
            var_t8 = 1;
            break;
        case 2:
            var_t8 = 1;
            break;
        }
    } else {
        var_s2 = 1;
        var_t8 = -1;
    }
    temp_a0 = (s32) ((arg6 > -1) ? arg6 : (arg6 + 3)) >> 2;
    temp_a6 = (var_t8 * arg5) + arg3;
    M2C_FIELD(arg7, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + arg2);
    temp_a3 = (var_t8 * (arg5 - temp_a0)) + arg3;
    temp_a7 = (var_s2 * arg4) + arg2;
    temp_a2 = arg6 - temp_a0;
    M2C_FIELD(arg7, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a3);
    temp_t1 = arg7 + 0x20;
    temp_a1 = (s32) (arg6 + ((u32) arg6 >> 0x1F)) >> 1;
    temp_a0_2 = (var_s2 * (arg4 - temp_a0)) + arg2;
    temp_a5 = (var_t8 * (arg5 + temp_a2)) + arg3;
    var_s0 = 0xB;
    M2C_FIELD(temp_t1, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + arg2);
    temp_a4 = (var_t8 * (arg5 + temp_a1)) + arg3;
    temp_a1_2 = (var_s2 * (arg4 + temp_a1)) + arg2;
    temp_a2_2 = (var_s2 * (arg4 + temp_a2)) + arg2;
    M2C_FIELD(temp_t1, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a6);
    M2C_FIELD(arg_sp0, s64 *, 0) = (s64) M2C_FIELD(arg7, s64 *, 0x20);
    M2C_FIELD(arg_sp0, s64 *, 8) = (s64) M2C_FIELD(temp_t1, s64 *, 8);
    M2C_FIELD(arg_sp0, s64 *, 0x10) = (s64) M2C_FIELD(temp_t1, s16 *, 0x10);
    temp_t1_2 = temp_t1 + 0x20;
    M2C_FIELD(arg_sp0, s64 *, 0x18) = (s64) M2C_FIELD(temp_t1, s64 *, 0x18);
    temp_t0 = arg_sp0 + 0x20;
    M2C_FIELD(temp_t0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + arg2);
    M2C_FIELD(temp_t0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a4);
    M2C_FIELD(arg_sp8, s64 *, 0) = (s64) M2C_FIELD(arg_sp0, s64 *, 0x20);
    M2C_FIELD(arg_sp8, s64 *, 8) = (s64) M2C_FIELD(temp_t0, s64 *, 8);
    M2C_FIELD(arg_sp8, s64 *, 0x10) = (s64) M2C_FIELD(temp_t0, s16 *, 0x10);
    temp_t0_2 = temp_t0 + 0x20;
    M2C_FIELD(arg_sp8, s64 *, 0x18) = (s64) M2C_FIELD(temp_t0, s64 *, 0x18);
    temp_t2 = arg_sp8 + 0x20;
    M2C_FIELD(temp_t2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + arg2);
    M2C_FIELD(temp_t2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a5);
    temp_t2_2 = temp_t2 + 0x20;
    M2C_FIELD(temp_t1_2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_a0_2);
    M2C_FIELD(temp_t1_2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a3);
    temp_t1_3 = temp_t1_2 + 0x20;
    M2C_FIELD(temp_t1_3, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_a7);
    M2C_FIELD(temp_t1_3, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a6);
    M2C_FIELD(temp_t0, s64 *, 0x20) = (s64) M2C_FIELD(temp_t1_2, s64 *, 0x20);
    M2C_FIELD(temp_t0_2, s64 *, 8) = (s64) M2C_FIELD(temp_t1_3, s64 *, 8);
    M2C_FIELD(temp_t0_2, s64 *, 0x10) = (s64) M2C_FIELD(temp_t1_3, s16 *, 0x10);
    temp_t1_4 = temp_t1_3 + 0x20;
    M2C_FIELD(temp_t0_2, s64 *, 0x18) = (s64) M2C_FIELD(temp_t1_3, s64 *, 0x18);
    temp_t0_3 = temp_t0_2 + 0x20;
    M2C_FIELD(temp_t0_3, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_a1_2);
    M2C_FIELD(temp_t0_3, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a4);
    M2C_FIELD(temp_t2, s64 *, 0x20) = (s64) M2C_FIELD(temp_t0_2, s64 *, 0x20);
    M2C_FIELD(temp_t2_2, s64 *, 8) = (s64) M2C_FIELD(temp_t0_3, s64 *, 8);
    M2C_FIELD(temp_t2_2, s64 *, 0x10) = (s64) M2C_FIELD(temp_t0_3, s16 *, 0x10);
    temp_t0_4 = temp_t0_3 + 0x20;
    M2C_FIELD(temp_t2_2, s64 *, 0x18) = (s64) M2C_FIELD(temp_t0_3, s64 *, 0x18);
    temp_t2_3 = temp_t2_2 + 0x20;
    M2C_FIELD(temp_t2_3, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_a2_2);
    M2C_FIELD(temp_t2_3, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a5);
    temp_t2_4 = temp_t2_3 + 0x20;
    M2C_FIELD(temp_t1_4, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_a0_2);
    M2C_FIELD(temp_t1_4, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + arg3);
    temp_t1_5 = temp_t1_4 + 0x20;
    M2C_FIELD(temp_t1_5, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_a7);
    M2C_FIELD(temp_t1_5, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + arg3);
    M2C_FIELD(temp_t0_3, s64 *, 0x20) = (s64) M2C_FIELD(temp_t1_4, s64 *, 0x20);
    M2C_FIELD(temp_t0_4, s64 *, 8) = (s64) M2C_FIELD(temp_t1_5, s64 *, 8);
    M2C_FIELD(temp_t0_4, s64 *, 0x10) = (s64) M2C_FIELD(temp_t1_5, s16 *, 0x10);
    var_t1 = temp_t1_5 + 0x20;
    M2C_FIELD(temp_t0_4, s64 *, 0x18) = (s64) M2C_FIELD(temp_t1_5, s64 *, 0x18);
    temp_a3_2 = var_t1 - 0x20;
    temp_t0_5 = temp_t0_4 + 0x20;
    M2C_FIELD(temp_t0_5, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_a1_2);
    M2C_FIELD(temp_t0_5, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + arg3);
    M2C_FIELD(temp_t2_3, s64 *, 0x20) = (s64) M2C_FIELD(temp_t0_4, s64 *, 0x20);
    M2C_FIELD(temp_t2_4, s64 *, 8) = (s64) M2C_FIELD(temp_t0_5, s64 *, 8);
    M2C_FIELD(temp_t2_4, s64 *, 0x10) = (s64) M2C_FIELD(temp_t0_5, s16 *, 0x10);
    var_t0 = temp_t0_5 + 0x20;
    M2C_FIELD(temp_t2_4, s64 *, 0x18) = (s64) M2C_FIELD(temp_t0_5, s64 *, 0x18);
    temp_a0_3 = var_t0 - 0x20;
    temp_t2_5 = temp_t2_4 + 0x20;
    M2C_FIELD(temp_t2_5, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_a2_2);
    M2C_FIELD(temp_t2_5, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + arg3);
    var_t2 = temp_t2_5 + 0x20;
    temp_v1 = var_t2 - 0x20;
    do {
        var_s0 -= 1;
        M2C_FIELD(var_t1, s64 *, 0) = (s64) M2C_FIELD(temp_a3_2, s64 *, 0);
        M2C_FIELD(var_t1, s64 *, 8) = (s64) M2C_FIELD(temp_a3_2, s64 *, 8);
        M2C_FIELD(var_t1, s64 *, 0x10) = (s64) M2C_FIELD(temp_a3_2, s64 *, 0x10);
        M2C_FIELD(var_t1, s64 *, 0x18) = (s64) M2C_FIELD(temp_a3_2, s64 *, 0x18);
        var_t1 += 0x20;
        M2C_FIELD(var_t0, s64 *, 0) = (s64) M2C_FIELD(temp_a0_3, s64 *, 0);
        M2C_FIELD(var_t0, s64 *, 8) = (s64) M2C_FIELD(temp_a0_3, s64 *, 8);
        M2C_FIELD(var_t0, s64 *, 0x10) = (s64) M2C_FIELD(temp_a0_3, s64 *, 0x10);
        M2C_FIELD(var_t0, s64 *, 0x18) = (s64) M2C_FIELD(temp_a0_3, s64 *, 0x18);
        var_t0 += 0x20;
        M2C_FIELD(var_t2, s64 *, 0) = (s64) M2C_FIELD(temp_v1, s64 *, 0);
        M2C_FIELD(var_t2, s64 *, 8) = (s64) M2C_FIELD(temp_v1, s64 *, 8);
        M2C_FIELD(var_t2, s64 *, 0x10) = (s64) M2C_FIELD(temp_v1, s64 *, 0x10);
        M2C_FIELD(var_t2, s64 *, 0x18) = (s64) M2C_FIELD(temp_v1, s64 *, 0x18);
        var_t2 += 0x20;
    } while (var_s0 >= 0);
}
