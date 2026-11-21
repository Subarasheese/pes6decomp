/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern u32 func_00821680(void);
extern u32 func_00821690(void);
extern s32 func_0082C2A0(void);
extern s32 func_0082C840(s32);
extern s32 func_00866340(s8 *, s32, s32, s32);

extern char D_008A64B4[];

s32 func_00940510(void) {
    s32 value;
    s32 value2;
    s32 value3;
    u32 value4;

    value = func_0082C2A0();
    if (value == 0) {
        return 2;
    }
    value4 = func_00821690();
    value2 = func_00866340((s8 *)value, (s32)value4, func_00821680(), 0x14);
    if (value2 == -0x66) {
        return 0;
    }
    if (value2 == -0x40) {
        return 0;
    }
    if (value2 != 0) {
        return 1;
    }
    value3 = 0;
    (*(s32 *)D_008A64B4) = 0;
    do {
        func_0082C840(value3);
        value3 += 1;
    } while (value3 < 0xBB);
    return 4;
}
