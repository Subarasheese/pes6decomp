/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001C48E8(s32 *, s32, s32);
extern void *Pes6SaveData_GetBlockE970(void);

void func_00AFE840(void) {
    s8 *temp_v0;

    temp_v0 = Pes6SaveData_GetBlockE970();
    if (temp_v0 != NULL) {
        func_001C48E8((s32 *)(temp_v0 + 0x1053A), 0, 0x1E0);
    }
}
