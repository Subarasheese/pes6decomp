/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002D4870(int);
extern int func_00256140(void);
extern void func_002D4970(s32);
extern void func_002D33D0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

void func_00C95120(void) {
    s32 temp_s0;
    void *temp_a1;
    void *temp_v1;
    void *var_a2;

    temp_s0 = func_00256140();
    func_0026E840(0x82000117);
    func_002D4870(0);
    func_002D4970(1);
    func_002D33D0();
    temp_v1 = M2C_FIELD(temp_s0, void **, 0x1C);
    var_a2 = M2C_FIELD(temp_v1, void **, 0x14);
    if (var_a2 != temp_v1) {
        do {
            temp_a1 = M2C_FIELD(var_a2, void **, 0x14);
            M2C_FIELD(M2C_FIELD(var_a2, void **, 0x10), void **, 0x14) = temp_a1;
            M2C_FIELD(M2C_FIELD(var_a2, void **, 0x14), void **, 0x10) = (void *) M2C_FIELD(var_a2, void **, 0x10);
            M2C_FIELD(var_a2, void **, 0x14) = (void *) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), void **, 0x14);
            M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), void **, 0x14) = var_a2;
            M2C_FIELD(var_a2, void **, 0x10) = NULL;
            var_a2 = temp_a1;
        } while (temp_a1 != M2C_FIELD(temp_s0, void **, 0x1C));
    }
}
