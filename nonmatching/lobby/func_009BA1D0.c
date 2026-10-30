/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9C60(void *);
extern void func_001D7F10(void *);
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */

void func_009BA1D0(void *arg0) {
    s32 temp_a0_2;
    s32 var_s1;
    s32 var_s2_2;
    s32 var_s3;
    s8 temp_v0;
    void *temp_a0;
    void *var_s2;
    void *var_s3_2;

    func_002DC1D0(M2C_FIELD(arg0, s32 *, 0xC0));
    temp_a0 = M2C_FIELD(arg0, void **, 0xC4);
    if (temp_a0 != NULL) {
        func_001B9C60(temp_a0);
        M2C_FIELD(arg0, void **, 0xC4) = NULL;
    }
    temp_v0 = M2C_FIELD(arg0, s8 *, 2);
    if (temp_v0 < 0xA) {
        var_s1 = temp_v0 + 1;
    } else {
        var_s1 = 9;
    }
    var_s3 = 0;
    var_s2 = arg0;
    do {
        func_001D7F10(M2C_FIELD(var_s2, void **, 8));
        var_s3 += 1;
        M2C_FIELD(var_s2, void **, 8) = NULL;
        var_s2 += 4;
    } while (var_s3 < 9);
    var_s2_2 = 0;
    if (var_s1 > 0) {
        var_s3_2 = arg0;
        do {
            func_001D7F10(M2C_FIELD(var_s3_2, void **, 0x2C));
            var_s2_2 += 1;
            M2C_FIELD(var_s3_2, void **, 0x2C) = NULL;
            var_s3_2 += 4;
        } while (var_s2_2 < var_s1);
    }
    func_001D7F10(M2C_FIELD(arg0, void **, 0x50));
    M2C_FIELD(arg0, void **, 0x50) = NULL;
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x168);
    if (temp_a0_2 != 0) {
        func_002DF960(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0x168) = 0;
    }
}
