/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F0160(void *);
extern void func_001B9C60(void *);
extern void func_001B5440(void);
extern void func_00153FA0(void *);
void func_002F62E0(void *arg0) {
    s32 var_s1;
    void *temp_a0;
    void *var_s0;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, u8 *, 3) != 0) {
            func_001B5440();
            M2C_FIELD(arg0, u8 *, 3) = 0U;
        }
        temp_a0 = M2C_FIELD(arg0, void **, 0xB0);
        if (temp_a0 != NULL) {
            func_001B9C60(temp_a0);
        }
        func_002F0160(arg0 + 0x10);
        var_s1 = 0;
        var_s0 = arg0;
        do {
            func_00153FA0(M2C_FIELD(var_s0, void **, 0xB8));
            var_s1 += 1;
            var_s0 += 8;
        } while (var_s1 < 2);
        func_00153FA0(arg0);
    }
}
