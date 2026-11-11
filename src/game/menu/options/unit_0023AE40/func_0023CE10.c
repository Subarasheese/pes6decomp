/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001C4698(s32, void *, s32);
s32 func_00221280();
void func_002B9340(void *);

s32 func_0023CE10(void) {
    u8 sp20[0x24];
    s32 temp_16;

    temp_16 = func_00221280();
    func_002B9340(&sp20);
    return func_001C4698(temp_16, &sp20, 0x24) != 0;
}
