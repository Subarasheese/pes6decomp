/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
void func_002EA430(void *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    void *var_a3;
    void *var_a3_2;

    var_a2 = 0;
    var_a1 = 0;
loop_1:
    if (M2C_FIELD(arg0, s32 *, 0x1DE4) == -1) {
        var_a2 += 1;
        if (var_a2 >= 8) {

        } else {
            goto loop_1;
        }
    } else {
        var_a1 = 1;
    }
    if (var_a1 == 1) {
        func_001D7D60(M2C_FIELD(arg0, void **, 0x6C), arg1 & 0xFF);
    }
    var_a2_2 = 0;
    var_a1_2 = 8;
    var_a3 = arg0 + 0x2520;
loop_10:
    if (M2C_FIELD(var_a3, s32 *, 0x1DE4) == -1) {
        var_a1_2 += 1;
        var_a3 += 0x4A4;
        if (var_a1_2 < 0x10) {
            goto loop_10;
        }
    } else {
        var_a2_2 = 1;
    }
    if (var_a2_2 == 1) {
        func_001D7D60(M2C_FIELD(arg0, void **, 0x70), arg1 & 0xFF);
    }
    var_a2_3 = 0;
    var_a1_3 = 0x10;
    var_a3_2 = arg0 + 0x4A40;
loop_18:
    if (M2C_FIELD(var_a3_2, s32 *, 0x1DE4) == -1) {
        var_a1_3 += 1;
        var_a3_2 += 0x4A4;
        if (var_a1_3 < 0x14) {
            goto loop_18;
        }
    } else {
        var_a2_3 = 1;
    }
    if (var_a2_3 == 1) {
        func_001D7D60(M2C_FIELD(arg0, void **, 0x74), arg1 & 0xFF);
    }
}
