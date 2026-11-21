/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001B4B90(s32 *, s32);
extern void *func_001B4D80(float, float);

extern s32 *D_003EB2C8;

void func_00CE4260(void) {
    s32 *temp_v0;

    if (D_003EB2C8 == NULL) {
        temp_v0 = func_001B4D80(16000.0f, 0.0f);
        D_003EB2C8 = temp_v0;
        func_001B4B90(temp_v0, 0);
    }
}
