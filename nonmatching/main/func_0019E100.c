/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001454C0(M2C_UNK);                         /* extern */
M2C_UNK func_001509A0(s32, s32, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_0019E250(s32, s32, s32, u8);           /* extern */
extern char D_0051FF43[];
extern char D_0051FF44[];
extern char D_0051FF4A[];
extern char D_0051FF4B[];

void func_0019E100(void) {
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 *var_s1;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1;

    var_s3 = 0;
    temp_s5 = (*(u8 *)D_0051FF43) & 0xF;
    temp_s2 = ((s32) (*(u8 *)D_0051FF43) >> 4) & 0xF;
    temp_s1 = (*(u8 *)D_0051FF44) & 0xF;
    temp_s0 = ((s32) (*(u8 *)D_0051FF44) >> 4) & 0xF;
    do {
        var_v1 = var_s3 >> 1;
        if (var_s3 < 0) {
            var_v1 = (s32) (var_s3 + 1) >> 1;
        }
        if (var_v1 == 1) {
            func_0019E250(var_s3, temp_s1, temp_s0, (*(u8 *)D_0051FF4B));
        } else {
            func_0019E250(var_s3, temp_s5, temp_s2, (*(u8 *)D_0051FF4A));
        }
        var_s3 += 1;
    } while (var_s3 < 8);
    temp_s3 = func_001454C0(0x2B03);
    temp_s4 = func_001454C0(0x2925);
    temp_v1 = temp_s1 * 0x10;
    temp_a0 = temp_s5 * 0x10;
    sp74 = temp_s2 * 0x10;
    var_s2 = 0;
    sp70 = temp_a0;
    sp80 = temp_s0 * 0x10;
    var_s1 = &sp70;
    sp78 = temp_a0;
    var_s0 = 0;
    sp7C = temp_v1;
    sp84 = temp_v1;
    do {
        func_001509A0(temp_s3, var_s0, temp_s4, *var_s1, 0x10);
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 0x10;
    } while (var_s2 < 6);
}
