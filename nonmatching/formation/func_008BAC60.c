/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern s32 D_003EA4F4;
extern char D_00591DF0[];

void func_008BAC60(void *arg0) {
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_f0_3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;

    if ((s32) (*(u8 *)D_00591DF0) >= 0) {
        var_f1 = (f32) (*(u8 *)D_00591DF0);
    } else {
        var_f1 = 2.0f * (f32) (((u8) (*(u8 *)D_00591DF0) >> 1) | ((*(u8 *)D_00591DF0) & 1));
    }
    temp_f0 = (s32) ((f32) 0x1E * (var_f1 / 60.0f));
    temp_lo = (s32) ((temp_f0 - ((s32) D_003EA4F4 % temp_f0)) * 0xFE) / temp_f0;
    temp_a1 = temp_lo - 0x7F;
    if (temp_a1 > 0) {
        var_v1 = temp_lo - 0x3E;
    } else {
        var_v1 = 0x41 - temp_a1;
    }
    M2C_FIELD(arg0, s8 *, 0) = (s8) (var_v1 & 0xFF);
    if ((s32) (*(u8 *)D_00591DF0) >= 0) {
        var_f1_2 = (f32) (*(u8 *)D_00591DF0);
    } else {
        var_f1_2 = 2.0f * (f32) (((u8) (*(u8 *)D_00591DF0) >> 1) | ((*(u8 *)D_00591DF0) & 1));
    }
    temp_f0_2 = (s32) ((f32) 0x78 * (var_f1_2 / 60.0f));
    temp_lo_2 = (s32) (((s32) D_003EA4F4 % temp_f0_2) << 7) / temp_f0_2;
    temp_a1_2 = temp_lo_2 - 0x40;
    if (temp_a1_2 > 0) {
        var_v1_2 = temp_lo_2 + 0x3F;
    } else {
        var_v1_2 = 0x7F - temp_a1_2;
    }
    M2C_FIELD(arg0, s8 *, 1) = (s8) (var_v1_2 & 0xFF);
    if ((s32) (*(u8 *)D_00591DF0) >= 0) {
        var_f1_3 = (f32) (*(u8 *)D_00591DF0);
    } else {
        var_f1_3 = 2.0f * (f32) (((u8) (*(u8 *)D_00591DF0) >> 1) | ((*(u8 *)D_00591DF0) & 1));
    }
    temp_f0_3 = (s32) ((f32) 0x14 * (var_f1_3 / 60.0f));
    temp_lo_3 = (s32) (((s32) D_003EA4F4 % temp_f0_3) << 7) / temp_f0_3;
    temp_a1_3 = temp_lo_3 - 0x40;
    if (temp_a1_3 > 0) {
        var_v1_3 = temp_lo_3 + 0x3F;
    } else {
        var_v1_3 = 0x7F - temp_a1_3;
    }
    M2C_FIELD(arg0, s8 *, 2) = (s8) (var_v1_3 & 0xFF);
    M2C_FIELD(arg0, s8 *, 3) = 0xFF;
}
