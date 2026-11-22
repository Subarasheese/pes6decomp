/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_001C4730(s32, s32, s32);
s32 func_0021F150(s32);
extern s32 func_0022D9F0(void);
s32 func_00237530(s32);
extern char D_0065EF78[];

void func_006455E0(void) {
    s32 value;
    s32 value2;
    s32 value3;
    s32 value4;
    s32 value5;
    s32 value6;
    int value7;
    value2 = *((s32 *)D_0065EF78);
    value3 = func_0022D9F0();
    value4 = func_00237530(0x127);
    value7 = 0x127;
    value5 = func_0021F150(value7);
    value6 = value5;
    func_001C4730(0xC + value2, value3, 0x14);
    value3 = 0x1198;
    value = value2;
    func_001C4730(value - -0x20, value4, value3);
    func_001C4730(0x11B8 + value2, value6, 0x203C);
}
