/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA4F4;
extern char D_00591DF0[];

void func_008BAE50(void *arg0, void *arg1, void *arg2, s32 arg3) {
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_a4_3;
    s32 temp_a4_4;
    s32 temp_a4_5;
    s32 temp_a4_6;
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_f0_3;
    s32 temp_f0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a2;
    s32 var_a4;
    s32 var_a5;
    s32 var_a5_2;
    s32 var_a5_3;
    s32 var_a7;
    s32 var_a7_2;
    s32 var_a7_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u8 var_a5_4;
    u8 var_t0;
    u8 var_t0_2;
    u8 var_t0_3;

    var_t0 = M2C_FIELD(arg2, u8 *, 0);
    if ((s32) (*(u8 *)D_00591DF0) >= 0) {
        var_f1 = (f32) (*(u8 *)D_00591DF0);
    } else {
        var_f1 = 2.0f * (f32) (((u8) (*(u8 *)D_00591DF0) >> 1) | ((*(u8 *)D_00591DF0) & 1));
    }
    temp_a4 = M2C_FIELD(arg1, u8 *, 0) & 0xFF;
    temp_v1 = var_t0 & 0xFF;
    temp_f0 = (s32) ((f32) arg3 * (var_f1 / 60.0f));
    var_a5 = (s32) D_003EA4F4 % temp_f0;
    if (temp_a4 >= temp_v1) {
        var_a7 = temp_a4 - temp_v1;
    } else {
        var_a7 = temp_v1 - temp_a4;
        var_t0 = (u8) temp_a4;
        var_a5 = temp_f0 - var_a5;
    }
    temp_a4_2 = ((s32) (var_a5 * (var_a7 * 2)) / temp_f0) - var_a7;
    if (temp_a4_2 > 0) {
        var_v1 = (var_t0 & 0xFF) + temp_a4_2;
    } else {
        var_v1 = (var_t0 & 0xFF) - temp_a4_2;
    }
    M2C_FIELD(arg0, s8 *, 0) = (s8) (var_v1 & 0xFF);
    var_t0_2 = M2C_FIELD(arg2, u8 *, 1);
    if ((s32) (*(u8 *)D_00591DF0) >= 0) {
        var_f1_2 = (f32) (*(u8 *)D_00591DF0);
    } else {
        var_f1_2 = 2.0f * (f32) (((u8) (*(u8 *)D_00591DF0) >> 1) | ((*(u8 *)D_00591DF0) & 1));
    }
    temp_a4_3 = M2C_FIELD(arg1, u8 *, 1) & 0xFF;
    temp_v1_2 = var_t0_2 & 0xFF;
    temp_f0_2 = (s32) ((f32) arg3 * (var_f1_2 / 60.0f));
    var_a5_2 = (s32) D_003EA4F4 % temp_f0_2;
    if (temp_a4_3 >= temp_v1_2) {
        var_a7_2 = temp_a4_3 - temp_v1_2;
    } else {
        var_a7_2 = temp_v1_2 - temp_a4_3;
        var_t0_2 = (u8) temp_a4_3;
        var_a5_2 = temp_f0_2 - var_a5_2;
    }
    temp_a4_4 = ((s32) (var_a5_2 * (var_a7_2 * 2)) / temp_f0_2) - var_a7_2;
    if (temp_a4_4 > 0) {
        var_v1_2 = (var_t0_2 & 0xFF) + temp_a4_4;
    } else {
        var_v1_2 = (var_t0_2 & 0xFF) - temp_a4_4;
    }
    M2C_FIELD(arg0, s8 *, 1) = (s8) (var_v1_2 & 0xFF);
    var_t0_3 = M2C_FIELD(arg2, u8 *, 2);
    if ((s32) (*(u8 *)D_00591DF0) >= 0) {
        var_f1_3 = (f32) (*(u8 *)D_00591DF0);
    } else {
        var_f1_3 = 2.0f * (f32) (((u8) (*(u8 *)D_00591DF0) >> 1) | ((*(u8 *)D_00591DF0) & 1));
    }
    temp_a4_5 = M2C_FIELD(arg1, u8 *, 2) & 0xFF;
    temp_v1_3 = var_t0_3 & 0xFF;
    temp_f0_3 = (s32) ((f32) arg3 * (var_f1_3 / 60.0f));
    var_a5_3 = (s32) D_003EA4F4 % temp_f0_3;
    if (temp_a4_5 >= temp_v1_3) {
        var_a7_3 = temp_a4_5 - temp_v1_3;
    } else {
        var_a7_3 = temp_v1_3 - temp_a4_5;
        var_t0_3 = (u8) temp_a4_5;
        var_a5_3 = temp_f0_3 - var_a5_3;
    }
    temp_a4_6 = ((s32) (var_a5_3 * (var_a7_3 * 2)) / temp_f0_3) - var_a7_3;
    if (temp_a4_6 > 0) {
        var_v1_3 = (var_t0_3 & 0xFF) + temp_a4_6;
    } else {
        var_v1_3 = (var_t0_3 & 0xFF) - temp_a4_6;
    }
    M2C_FIELD(arg0, s8 *, 2) = (s8) (var_v1_3 & 0xFF);
    var_a5_4 = M2C_FIELD(arg2, u8 *, 3);
    if ((s32) (*(u8 *)D_00591DF0) >= 0) {
        var_f1_4 = (f32) (*(u8 *)D_00591DF0);
    } else {
        var_f1_4 = 2.0f * (f32) (((u8) (*(u8 *)D_00591DF0) >> 1) | ((*(u8 *)D_00591DF0) & 1));
    }
    temp_a1 = M2C_FIELD(arg1, u8 *, 3) & 0xFF;
    temp_v1_4 = var_a5_4 & 0xFF;
    temp_f0_4 = (s32) ((f32) arg3 * (var_f1_4 / 60.0f));
    var_a2 = (s32) D_003EA4F4 % temp_f0_4;
    if (temp_a1 >= temp_v1_4) {
        var_a4 = temp_a1 - temp_v1_4;
    } else {
        var_a4 = temp_v1_4 - temp_a1;
        var_a5_4 = (u8) temp_a1;
        var_a2 = temp_f0_4 - var_a2;
    }
    temp_a1_2 = ((s32) (var_a2 * (var_a4 * 2)) / temp_f0_4) - var_a4;
    if (temp_a1_2 > 0) {
        var_v1_4 = (var_a5_4 & 0xFF) + temp_a1_2;
    } else {
        var_v1_4 = (var_a5_4 & 0xFF) - temp_a1_2;
    }
    M2C_FIELD(arg0, s8 *, 3) = (s8) (var_v1_4 & 0xFF);
}
