/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B3D3D0(void);
void func_00B39160(s8 arg0) {
    s32 var_s0;
    u32 var_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    var_s1 = func_00B3D3D0();
    if (var_s1 != 0) {
        func_001D7D60(M2C_FIELD(var_s1, void **, 8), arg0);
        func_001D7D60(M2C_FIELD(var_s1, void **, 4), arg0);
        func_001D7D60(M2C_FIELD(var_s1, void **, 0xC), arg0);
        func_001D7D60(M2C_FIELD(var_s1, void **, 0x18), arg0);
        func_001D7D60(M2C_FIELD(var_s1, void **, 0x20), arg0);
        func_001D7D60(M2C_FIELD(var_s1, void **, 0x28), arg0);
        func_001D7D60(M2C_FIELD(var_s1, void **, 0x30), arg0);
        func_001D7D60(M2C_FIELD(var_s1, void **, 0x38), arg0);
        func_001D7D60(M2C_FIELD(var_s1, void **, 0x3C), arg0);
        temp_a0 = M2C_FIELD(var_s1, void **, 0x40);
        if (temp_a0 != NULL) {
            func_001D7D60(temp_a0, arg0);
        }
        temp_a0_2 = M2C_FIELD(var_s1, void **, 0x44);
        if (temp_a0_2 != NULL) {
            func_001D7D60(temp_a0_2, arg0);
        }
        func_001D7D60(M2C_FIELD(var_s1, void **, 0x10), arg0);
        var_s0 = 0;
        do {
            temp_a0_3 = M2C_FIELD(var_s1, void **, 0x48);
            if (temp_a0_3 != NULL) {
                func_001D7D60(temp_a0_3, arg0);
            }
            var_s0 += 1;
            var_s1 += 4;
        } while (var_s0 < 3);
    }
}
