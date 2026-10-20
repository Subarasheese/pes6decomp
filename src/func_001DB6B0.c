/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001D9B10(void *);                      /* extern */
void *func_001DB5F0();                              /* extern */

void func_001DB6B0(void) {
    void *temp_s0;
    void *var_a0;

    var_a0 = func_001DB5F0();
    if (var_a0 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_a0, void **, 4);
            if ((M2C_FIELD(var_a0, u8 *, 0x29) == 0) && (M2C_FIELD(var_a0, u8 *, 0x2A) == 0)) {
                func_001D9B10(var_a0);
            }
            var_a0 = temp_s0;
        } while (temp_s0 != NULL);
    }
}
