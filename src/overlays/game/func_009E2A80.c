/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_00BBB8C0(s32);
extern u8 func_009E1C90(s32);
extern u8 D_005926E6[];

void func_009E2A80(void *arg0) {
    u8 value;
    int value2;

    func_00BBB8C0(8);
    *(u8 *)((int)arg0 + 0x1dc) = 0xff;
    value = func_009E1C90(1);
    if (value != '\x01') {
        return;
    }
    *(u16 *)((int)arg0 + 0x1d0) = 0;
    *(u16 *)((int)arg0 + 0x1ce) = 0;
    value2 = func_00BBB8C0((u32)D_005926E6[0]);
    *(char *)((int)arg0 + 0x1da) = (char)value2;
}
