/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_00B695D0(void);
extern void func_001D7D60(void *, s8);
s32 func_00972D60(s32, s32, s8);
s32 func_009737C0(s32, s8);

void func_00B6A950(s8 arg0) {
    s32 value;
    void **value2;
    u32 value3;
    u32 value4;
    value4 = (value3 = func_00B695D0());
    if (value3 != 0) {
        value = 0;
        do {
            value2 = (void **)(((s8 *)value4) + 0x3324);
            func_00972D60(*((s32 *)(((s8 *)value4) + 0x3318)), 0, arg0);
            func_009737C0(*((s32 *)(((s8 *)value4) + 0x331C)), arg0);
            func_009737C0(*((s32 *)(((s8 *)value4) + 0x3320)), arg0);
            func_001D7D60(*value2, arg0);
            func_001D7D60(*((void **)(((s8 *)value4) + 0x3328)), arg0);
            value += 1;
            value4 += 0x24;
        } while (value < 0x17);
    }
}
