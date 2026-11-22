/* compiler: mwcc-3.0.1b151 */
#include "types.h"

s32 func_00AFBAB0(u8);
extern char D_00591E57[];

s32 func_009BBE90(void *arg0) {
    u8 value;
    u8 *entry;
    u8 value2;
    s32 value3;
    s8 *entry2;
    s32 value4;
    entry = (u8 *)D_00591E57;
    value2 = *entry;
    value4 = 0;
    value3 = (s32)value2;
    entry2 = (s8 *)arg0;
    value2 = *((u8 *)D_00591E57);
    if ((0 < value3) && (((s32)(*((u8 *)D_00591E57))) < 0x17)) {
        value4 = 1;
    }
    if ((value4 != 0) && ((*((u8 *)(0x4C + ((s8 *)arg0)))) != 0)) {
        value = *((u8 *)(entry2 + 0));
        if (value == (func_00AFBAB0(value2) & 0xFF)) {
            return 1;
        }
    };
    return 0;
}
