/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void * Pes6SaveData_GetBlock8B694(void);
void func_00B35E00(void) {
    void *temp_v0;

    temp_v0 = Pes6SaveData_GetBlock8B694();
    M2C_FIELD(temp_v0, s32 *, 0) = 0;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
}
