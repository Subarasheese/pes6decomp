/* compiler: mwcc-3.0.1b151 */
#include "types.h"

void func_001A64B0(void *, s32, u8, s32);
extern char D_00520640[];

void func_001A6420(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 value;
    u8 value2;
    void **value3;
    u8 *entry;

    value = *arg0;
    value3 = (void **)(D_00520640 + value * 4);
    entry = (u8 *)*value3;
    if (!(((s32)value < 0x23) && (entry != 0))) {
        return;
    }
    *value3 = 0;
    value2 = entry[2] - 1;
    entry[2] = value2;
    if (value2 > 0) {
        return;
    }
    if (arg1 != 0) {
        func_001A64B0(entry, arg1, value, arg3);
    }
    entry[2] = 0;
}
