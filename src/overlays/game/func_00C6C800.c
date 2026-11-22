/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 SD_call(s32);

extern void *Pes6Ball_Current;

void func_00C6C800(void) {
    s32 var_a0;

    if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x1300) {
        var_a0 = 0x84077819;
    } else {
        var_a0 = 0x8407781A;
    }
    SD_call(var_a0);
}
