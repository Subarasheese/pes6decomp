/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *Pes6SaveData_GetBlockE970(void);
extern s32 D_00A77EE0[];
extern s32 D_00A77EE8[];

void func_0095C6A0(void) {
    void *temp_v0;

    temp_v0 = Pes6SaveData_GetBlockE970();
    if (temp_v0 != NULL) {
        if (D_00A77EE0[0] == 1) {
            M2C_FIELD(temp_v0, s32 *, 0x325A8) = (s32)D_00A77EE8[0];
        } else {
            M2C_FIELD(temp_v0, s32 *, 0x325A8) = 0;
        }
    }
}
