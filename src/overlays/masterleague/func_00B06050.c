/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_00B06560(void);

s32 func_0095F420(s32 *, s32, s32, s32);

void func_00B06050(void) {
    s8 *entry;
    s32 localValue1;
    int value;
    u32 value2;
    if (0 != func_00B06560()) {
        int value3;

        localValue1 = 0x0104001A;
        value2 = func_00B06560();
        value3 = 0;
        value = 0x28;
        entry = (s8 *)value2;
        ;
        if ((value2 != value3) && ((*((s32 *)(value + ((s8 *)value2)))) == value3)) {
            *((s32 *)(entry - -0x28)) = func_0095F420(&localValue1, 1, value3, value3);
        }
    }
}
