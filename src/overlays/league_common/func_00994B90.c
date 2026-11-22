/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char * Pes6SaveData_GetBlockE970(void);

void func_00994B90(void) {
    s32 temp_v1;
    s32 var_s0;
    char *temp_v0;

    var_s0 = 0;
    do {
        temp_v0 = Pes6SaveData_GetBlockE970();
        if (temp_v0 != NULL) {
            temp_v1 = var_s0 & 0xFF;
            if (temp_v1 < 0x48) {
                M2C_FIELD((temp_v0 + temp_v1), s8 *, 0x33E68) = 0;
            }
        }
        var_s0 += 1;
    } while (var_s0 < 0x48);
}
