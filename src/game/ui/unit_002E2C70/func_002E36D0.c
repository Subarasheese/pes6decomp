/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_001EF900(s32, s32);

void func_002E36D0(void *arg0, u8 arg1) {
    u8 *entry;
    int value;
    int value2;
    void *entry2;
    if (arg0 != 0) {
        s32 value3;
        s8 *entry3;
        *((u8 *)(((s8 *)arg0) + 0x11)) = arg1;
        value2 =
            (value3 = ((*((u8 *)(((s8 *)arg0) + 0x10))) & (*((u8 *)(((s8 *)arg0) + 0x11)))) & 0xFF);
        func_001EF900(*((s32 *)(((s8 *)arg0) + 4)), value3);
        entry2 = arg0;
        entry3 = (s8 *)entry2;
        entry3 = entry3 + 8;
        func_001EF900(*((s32 *)entry3),
                      (value = (*(entry = (u8 *)(((s8 *)arg0) + 0x12))) & (value3 & 0xFF)) & 0xFF);
    }
}
