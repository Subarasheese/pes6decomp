/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEE60(void *, void *);
extern void func_001F18D0(void *, void *);
extern void func_001EF900(void *, s8);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_001EE630(void *, void *);              /* extern */
M2C_UNK func_001EF370(void *, f32 *, s16);          /* extern */
extern u8 D_003E7D60;
extern u8 D_003E7D61;
extern u8 D_003E7D62;
extern u8 D_003E7D63;
extern char D_00CB4F90[];

void func_00B97660(void *arg0) {
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    u8 sp8C;
    u8 sp8D;
    u8 sp8E;
    u8 sp8F;
    s16 temp_a2;
    s16 temp_v1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_s0;
    void *temp_s3;

    var_s4 = 0;
    var_s3 = 0;
    var_s0 = 0;
    sp8E = D_003E7D62;
    sp8C = D_003E7D60;
    sp8D = D_003E7D61;
    sp8F = D_003E7D63;
    do {
        var_s5 = 0;
        var_s2 = 0;
loop_2:
        func_001EEE60(M2C_FIELD((var_s4 + M2C_FIELD(arg0, s32 *, 0) + var_s2), void **, 0x38), &sp8C);
        func_001EF900(M2C_FIELD((var_s4 + M2C_FIELD(arg0, s32 *, 0) + var_s2), void **, 0x38), 0);
        var_s5 += 1;
        var_s2 += 4;
        if (var_s5 < 9) {
            goto loop_2;
        }
        func_001F3D10(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0) + var_s3), s32 *, 0xC), 0U);
        func_001F18D0(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0) + var_s3), void **, 0xC), &sp8C);
        var_s0 += 1;
        var_s4 += 0x24;
        var_s3 += 4;
    } while (var_s0 < 0xB);
    var_s4_2 = 0;
    var_s2_2 = 0;
    do {
        temp_s3 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0) + var_s2_2), void **, 0x38);
        temp_s0 = ((void *)D_00CB4F90) + (M2C_FIELD((M2C_FIELD(arg0, s32 *, 4) + (M2C_FIELD(arg0, u8 *, 0x3E) * 0x52) + var_s4_2), u8 *, 0xA0) * 8);
        temp_a2 = M2C_FIELD(temp_s0, s16 *, 4);
        var_v0 = temp_a2 >> 1;
        if (temp_a2 < 0) {
            var_v0 = (s32) (temp_a2 + 1) >> 1;
        }
        temp_v1 = M2C_FIELD(temp_s0, s16 *, 6);
        var_v0_2 = temp_v1 >> 1;
        sp70 = (f32) -(temp_a2 - var_v0);
        if (temp_v1 < 0) {
            var_v0_2 = (s32) (temp_v1 + 1) >> 1;
        }
        sp74 = (f32) -(temp_v1 - var_v0_2);
        sp78 = (f32) temp_a2;
        sp7C = (f32) temp_v1;
        func_001EF370(temp_s3, &sp70, temp_a2);
        func_001EE630(temp_s3, temp_s0);
        func_001EF900(temp_s3, 1);
        var_s4_2 += 1;
        var_s2_2 += 0x24;
    } while (var_s4_2 < 0xB);
}
