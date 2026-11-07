/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C7F58(s8 *);                        /* extern */

s8 *func_00121430(s8 *arg0) {
    s8 *temp_s0;
    s8 *var_a0;

    var_a0 = arg0;
    temp_s0 = var_a0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
        } while (*var_a0 != 0);
    }
    func_001C7F58(var_a0);
    return temp_s0;
}
