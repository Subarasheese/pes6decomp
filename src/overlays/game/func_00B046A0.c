/* compiler: mwcc-3.0.1b151 */
#include "types.h"

s32 func_009B3070(u16, s32);
s32 func_009F4AC0(void *, s32);
s16 func_00A97C10(s32, s32);
extern s32 D_003E74CC;

void func_00B046A0(void *arg0, s32 arg1) {
    int value;
    s32 value2;
    s8 *entry;
    void *entry2;
    s8 *entry3;
    entry3 = ((s8 *)arg0) + 4;
    entry = (s8 *)arg0;
    entry2 = *((void **)entry3);
    value = (*((u16 *)(((s8 *)entry2) + 0x30))) * 4;
    value2 = func_009F4AC0(arg0, ((*((s32 *)(((s8 *)(value + D_003E74CC)) + 0x2FD8))) - 2) -
                                     ((s32)(*((f32 *)(((s8 *)entry2) + 0x38)))));
    if (value2 < 2) {
        value2 = 2;
    }
    *((s16 *)(entry + 0x38)) =
        func_00A97C10(func_009B3070(*((u16 *)(entry + 0x26)), arg1) & 0xFFFF, value2);
}
