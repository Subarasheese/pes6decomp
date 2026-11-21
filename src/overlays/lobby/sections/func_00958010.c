/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0082C2A0(void);
extern s32 func_0082C690(s32, s32);
extern s32 func_0082C840(s32);
extern s32 func_0082C920(s32);
extern s32 func_00958060(s32);

s32 func_00958010(void) {
    s32 value1;
    s32 value2;
    value1 = func_0082C2A0();
    if (value1 == 0) {
        func_0082C920(0x12);
        func_0082C840(0xE);
        func_0082C690(0xE, 0);
        return 2;
    } else {
        value2 = func_00958060(((s32 *)(value1))[0x127A]);
        return value2;
    }
}
