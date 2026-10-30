/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
void func_00634BD0(void *arg0) {
    s32 var_s1_2;
    s32 var_s2;
    void *temp_a0;
    void *temp_a0_2;
    void *var_s0;
    void *var_s1;

    var_s0 = arg0;
    func_001D7D60(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x4C), 0);
    func_001D7D60(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 0x6C), 0);
    func_001D7D60(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 0x68), 0);
    func_001D7D60(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 0x88), 0);
    var_s2 = 0;
    var_s1 = var_s0;
    do {
        temp_a0 = M2C_FIELD(var_s1, void **, 0xA4);
        if (temp_a0 != NULL) {
            func_001D7D60(temp_a0, 0);
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 0x14);
    var_s1_2 = 0;
    do {
        temp_a0_2 = M2C_FIELD(var_s0, void **, 0xF0);
        if (temp_a0_2 != NULL) {
            func_001D7D60(temp_a0_2, 0);
        }
        var_s1_2 += 1;
        var_s0 += 4;
    } while (var_s1_2 < 2);
}
