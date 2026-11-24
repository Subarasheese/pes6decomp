/* compiler: mwcc-3.0.1b151 */
#include "types.h"

char *func_002C7D80(s32);
void func_00B24320(s32, s32, s32);
extern char D_00591DCC[];
extern char D_00CB37A8[];

void func_00C32330(void) {
    int value;
    s32 value2;
    s8 *entry;
    int value3;
    s32 value4;
    u8 value5;
    u8 *entry2;
    char *entry3;
    u8 value6;
    value4 = 0;
    do {
        entry3 = func_002C7D80(value4);
        entry2 = (u8 *)(((s8 *)entry3) + 0x17);
        value5 = *entry2;
        value2 = *((u8 *)D_00591DCC);
        value2 = value2 * 2;
        value6 = *((*((u8 *)(((s8 *)entry3) + 0))) + (((char *)D_00CB37A8) + value2));
        value = 0xFF;
        if (value5 == 1) {
            value3 = value6;
            value3 = value3 & value;
            func_00B24320(value3, 0, 1);
        } else if (value5 == 2) {
            func_00B24320(value6 & value, 1, 1);
        }
        value4 += 1;
        *((u8 *)((entry = (s8 *)entry3) + 0x17)) = 0U;
    } while (value4 < 2);
}
