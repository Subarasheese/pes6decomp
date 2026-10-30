/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F1920(void *, s32);
extern void func_002E1C50(void *, s32);
extern void func_001EF900(void *, s8);
M2C_UNK func_002DF8E0(s32, s32);                    /* extern */

void func_002F2C70(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;
    s32 var_s0;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s4;
    void *var_s3;
    void *var_s3_4;
    void *var_s4_2;
    void *var_s4_3;

    var_s4 = 0;
    var_s3 = arg0;
    do {
        func_002F1920(var_s3, arg1);
        var_s4 += 1;
        var_s3 += 0x24;
    } while (var_s4 < 2);
    var_s3_2 = 0;
    var_s4_2 = arg0;
    do {
        func_002F1920(var_s4_2 + 0x48, arg1);
        var_s3_2 += 1;
        var_s4_2 += 0x24;
    } while (var_s3_2 < 8);
    var_s3_3 = 0;
    var_s4_3 = arg0;
    do {
        func_002F1920(var_s4_3 + 0x168, arg1);
        func_002E1C50(var_s4_3 + 0x18C, arg1);
        var_s3_3 += 1;
        var_s4_3 += 0x4C;
    } while (var_s3_3 < 0xA);
    temp_s1 = arg1 & 0xFF & (arg2 & 0xFF);
    func_002E1C50(arg0 + 0x46C, temp_s1 & 0xFF);
    var_s0 = 0;
    var_s3_4 = arg0;
    do {
        func_001EF900(M2C_FIELD(var_s3_4, void **, 0x464), temp_s1 & 0xFF);
        var_s0 += 1;
        var_s3_4 += 4;
    } while (var_s0 < 2);
    func_002DF8E0(M2C_FIELD(arg0, s32 *, 0x494), temp_s1 & 0xFF);
}
