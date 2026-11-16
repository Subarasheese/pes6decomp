/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001454C0(s32);
extern void func_001509A0(s32, s32, s32, s32, s32);
extern void func_0019E250(s32, s32, s32, u8);
extern u8 D_0051FF43[];
extern u8 D_0051FF44[];
extern u8 D_0051FF4A[];
extern u8 D_0051FF4B[];

void func_0019E100(void) {
    s32 sp70[6];
    s32 *var_s1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1;

    var_s3 = 0;
    temp_s5 = D_0051FF43[0] & 0xF;
    temp_s2 = ((s32) D_0051FF43[0] >> 4) & 0xF;
    temp_s1 = D_0051FF44[0] & 0xF;
    temp_s0 = ((s32) D_0051FF44[0] >> 4) & 0xF;
    do {
        var_v1 = var_s3 >> 1;
        if (var_s3 < 0) {
            var_v1 = (s32) (var_s3 + 1) >> 1;
        }
        if (var_v1 == 1) {
            func_0019E250(var_s3, temp_s1, temp_s0, D_0051FF4B[0]);
        } else {
            func_0019E250(var_s3, temp_s5, temp_s2, D_0051FF4A[0]);
        }
        var_s3 += 1;
    } while (var_s3 < 8);
    temp_s3 = func_001454C0(0x2B03);
    temp_s4 = func_001454C0(0x2925);
    sp70[1] = temp_s2 * 0x10;
    var_s2 = 0;
    sp70[0] = temp_s5 * 0x10;
    sp70[4] = temp_s0 * 0x10;
    var_s1 = sp70;
    sp70[2] = temp_s5 * 0x10;
    var_s0 = 0;
    sp70[3] = temp_s1 * 0x10;
    sp70[5] = temp_s1 * 0x10;
    do {
        func_001509A0(temp_s3, var_s0, temp_s4, *var_s1, 0x10);
        var_s2 += 1;
        var_s1 += 1;
        var_s0 += 0x10;
    } while (var_s2 < 6);
}
